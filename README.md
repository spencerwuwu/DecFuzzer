# How Far We Have Come: Testing Decompilation Correctness of C Decompilers  ISSTA'20

ISSTA'20 Artifact for: `How Far We Have Come: Testing Decompilation Correctness of C Decompilers`

## 0. Environment
Our experiment was conducted on `64-bit Ubuntu 18.04`. We recommend to set up on
the same OS system. 

## 1. Project Structure
* `src/`: source code directory
* `runtime/`: CSmith runtime library
* `seed_for_retdec` and  `seed_for_r2`: sample seeds for EMI testing (see clarifications below).

## 2. Code Structure
* `fuzzer.py`: main component to initialize a fuzzing test campaign by calling functions in this script
* `generator.py`: to compile and decompile files (to interact with Radare2 and IDA-Pro, we provide two scripts as follows; the other two decompilers can be used directly via command line)
    * `R2_decompile.py`: to decompile with Radare2/Ghidra 
    * `IDA_decompile.py` and `idapy_decompile.py`: to decompile with IDA (IDA-Pro is not provided in this Artifact Evaluation Package; see clarifications below)
* `EMI_generator.py`: to generate EMI variants
    * `MySQL_connector.py`: to connect MySQL, which is used in the implementation of EMI mutation
    * `CFG_measurer.py`: to measure CFG distance of two programs (used for EMI mutation)
    * `ENV_Profiler.py`: to provide live code EMI mutation function
    * `ContextTable.py`: context structure
* `replacer.py`: to replace main() in original code with decompilation result
    * `modifier.py`: to replace custom macros in decompilation results
* `checker.py`: to compare the output of the two programs for consistency
* `Config.py`: constant values/strings/paths

## 3. Installation of dependencies

### 3.0. Libraries and tools:

    sudo apt install gcc-multilib
    sudo apt install m4
    sudo apt install openssl libssl-dev -y
    sudo apt install flex bison
    sudo apt install pkg-config

`Cmake` version 3.12 or later is needed to build r2ghidra-dec. To install latest
version of Cmake, download source code from [here](https://github.com/Kitware/CMake/releases/download/v3.16.6/cmake-3.16.6.tar.gz),
and then build it following instructions on their [website](https://cmake.org/install/):

    ./bootstrap
    make 
    sudo make install

### 3.1. MySQL
MySQL is used in EMI mutation. To install it on Ubuntu:

    apt-get install mysql-server

Then start mysql service:

    service mysql start

**Remember to update `user` and `passwd` in MySQL_connector.py** if you set another user and password. You can check your default user and password by:

    sudo cat /etc/mysql/debian.cnf

### 3.2. PyMySQL

To install the MySQL Driver for Python3:

    apt-get install python3-pip
    pip3 install PyMySQL


### 3.3. Decompilers

As reported in the paper, four decompilers are tested as follows:

* IDA Pro: [https://www.hex-rays.com/products/ida/](https://www.hex-rays.com/products/ida/ )
* JEB3: [https://www.pnfsoftware.com/](https://www.pnfsoftware.com/)
* RetDec: [https://retdec.com/](https://retdec.com/)
* Radare2: [https://www.radare.org/n/radare2.html](https://www.radare.org/n/radare2.html) 
(we tested the r2ghidra plugin of Radare2, more specifically)

We note that *IDA Pro* and *JEB3* are commercial tools, and we decide to not provide them in this artifact evaluation phase. Instead, we provide instructions to setup the other two free decompilers *RetDec* and *Radare2* with *Ghidra* plugin. We assure that two commercial decompilers are tested in exactly the same way.

#### 3.3.1. Radare2 and r2ghidra 

To install Radare2:

    git clone https://github.com/radareorg/radare2
    git checkout 8ef97b3918d632cf4447bb8e3c62eba015561f4e
    cd radare2 ; sys/install.sh ; cd ..

We use commit 8ef97b3918d632cf4447bb8e3c62eba015561f4e when writing this README.

Replace or patch the `~/.local/share/radare2/r2pm/git/radare2-pm`
`https://github.com/spencerwuwu/radare2-pm`

To further install the Ghidra decompiler plugin (named r2ghidra):

    r2pm update
    r2pm -i r2ghidra

Then we need to install r2pipe to use our decompiler script *R2_decompile.py*:

    pip3 install r2pipe

#### 3.3.2. RetDec

To install RetDec, we recommend to download and unpack [pre-built
package](https://github.com/avast/retdec/releases) to save time, you can also
build from source code following the instructions on their [github
page](https://github.com/avast/retdec) (note that the size of unpacked RetDec is
about 5.5 GB.)

Download and unpack the pre-built RetDec (ver. 4.0) for Ubuntu at
[here](https://github.com/avast/retdec/releases/download/v4.0/retdec-v4.0-ubuntu-64b.tar.xz),
then you can use `retdec-decompiler.py` under `retdec/bin/`.

**Remember to update the absolute path to `retdec-decompiler.py` in _Config.py_.** For example:

    RetDec_absolute_path = '/home/fuzz/Documents/retdec-install/bin/retdec-decompiler.py'


## 4. Reproducing experimental results

### 4.1. Setup

Clone this repository

    git clone https://github.com/monkbai/DecFuzzer.git

Then do not forget to **update the absolute path to csmith runtime `runtime_dir` in _Config.py_.** For example:

    runtime_dir = '/home/fuzz/Documents/DecFuzzer/runtime/'

### 4.2. Reproducing experimental results

    python3 run.py

The script `run.py` will run fuzzing test on *RetDec* and *r2ghidra*, separately. It will first test 1000 csmith generated programs in directory `./seed_for_[retdec|r2]`, the result will be stored in `./seed_for_[retdec|r2]/result/` and `./seed_for_[retdec|r2]/error/`, the EMI variants will be stored in `./seed_for_[retdec|r2]/emi/`.

Then it will test all generated EMI variants, the results are stored in a similar manner.

It will take several hours to finish the whole process. While it's unlikely to get exactly the same number (since randomness is involved in generating EMI mutations), it should give a very close number reported in Table 3 in our paper.

### 4.4. Access to data

Meanwhile, for the ease of understanding/checking our results reported in the paper, We also provide all Csmith generated programs and EMI mutations which can be used to re-produce findings in Table 3, you can download them from [here](https://www.dropbox.com/sh/kqw7e19snfeukai/AADHZ45TAL9Kxi7v9nmdXfLCa?dl=0).

Then, you can reproduce the experiment results using the 'reproduce.py` script we provided. It takes two steps:

**Step 1**

Put all the C source files to be tested in a directory. For instance, to test RetDec, downloading the corresponding folder from Dropbox will result into the following folder structure:

    ➜  ~ tree retdec_folder
    retdec_folder
    ├── cmisth_files
    │   ├── error
    │   └── result
    └── emi_files
        ├── error
        └── result

Our current results are put inside “error” and “result” subfolders. So before testing, consider removing those four subfolders.


**Step 2**

Run `./reproduce.py` like:

    python3 ./reproduce.py --decompiler <decompiler name> --files_dir <directory to C files>

For instance, 

    python3 ./reproduce.py --decompiler retdec --files_dir retdec_folder/emi_files

And
 
     python3 ./reproduce.py --decompiler retdec --files_dir retdec_folder/csmith_files


Indeed, `reproduce.py` is designed such that when users want to test our four decompilers, then can specify the `--decompiler` parameter with: `retdec`, `r2`, `jeb` or `ida`. Also, in addition to directly taking EMI or CSmith generated C files as the inputs, `reproduce.py` also provides another option `--EMI` to enable the generation of new EMI variants along the testing. For example:

    python3 ./reproduce.py --decompiler r2 --files_dir ./radare2_folder/csmith_files --emi_dir ./new_seed_for_radare2/emi --EMI

Where `--emi_dir` accompanies `--EMI` to specify the output directory of newly generated EMI variants.

### 4.5. Interpret Result

As noted in our paper, suppose a C file `10.c` is to be tested, it will be compiled first:

    10.c == compile ==> 10

Then the executable `10` will be decompiled by corresponding decompiler:

    10 == decompile ==> 10_retdec.c or 10_r2.c

We try to generate a new compilable file by replacing `func_1` function in `10.c` with code in `10_retdec.c` or `10_r2.c`:

    10_retdec.c or 10_r2.c == replace ==> 10_new.c == recompile ==> 10_new

If recompilation is failed, the source code is stored in `error` folder and error information is logged in `error/error_log.txt`.

Finally, we compare the outputs of `10` and `10_new`, if they yield different outputs, it will be stored in `result` and logged in `result/result_log.txt`.




