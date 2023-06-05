RLBOX_ROOT=/home/weicheng/Documents/CS699_WASM/rlbox_wasm2c_sandbox

#RLBOX headers
RLBOX_INCLUDE=$(RLBOX_ROOT)/build/_deps/rlbox-src/code/include

#Our Wasi-SDK
WASI_SDK_ROOT=$(RLBOX_ROOT)/build/_deps/wasiclang-src/

#location of our wasi/wasm runtime
WASM2C_RUNTIME_PATH=$(RLBOX_ROOT)/build/_deps/mod_wasm2c-src/wasm2c
WASI_RUNTIME_FILES=$(addprefix $(WASM2C_RUNTIME_PATH), /wasm-rt-impl.c)
RLBOX_RUNTIME_FILES=$(addprefix $(RLBOX_ROOT)/src, /wasm2c_rt_mem.c /wasm2c_rt_minwasi.c)

CSMITH_LIB=/home/weicheng/Documents/CS699_WASM/DecFuzzer/runtime

WASM2C=/home/weicheng/Documents/CS699_WASM/wabt/build/wasm2c
EMCC_CFLAGS=-s WASM=1 -s SIDE_MODULE=1 -g3 -w
CFLAGS=-fno-stack-protector -no-pie -O0 -w -m32 -g

CC=clang
CXX=clang++

all: s144r2 s144r2.wasm s144r2.wasm.c s144r2_wasm

clean:
	rm -rf s144r2.wasm s144r2.wasm.c s144r2.wasm.h s144r2_wasm s144r2 *.o

#Step 0: build native binary
s144r2: seed_for_wasm/s144r2.c
	$(CC) $(CFLAGS) -I$(CSMITH_LIB) seed_for_wasm/s144r2.c orig_main.c -o s144r2

#Step 1: build our library into wasm, using clang from the wasi-sdk
s144r2.wasm: seed_for_wasm/s144r2.c
	emcc $(EMCC_CFLAGS) -I$(CSMITH_LIB) seed_for_wasm/s144r2.c -o s144r2.wasm

#Step 2: use wasm2c to convert our wasm to a C implementation of wasm we can link with our app.
s144r2.wasm.c: s144r2.wasm
	$(WASM2C) s144r2.wasm -o s144r2.wasm.c

#Step 3: compiling and linking our application with our library
s144r2_wasm: s144r2.wasm.c
	$(CC) $(CFLAGS) -c $(WASI_RUNTIME_FILES) $(RLBOX_RUNTIME_FILES) -I$(RLBOX_INCLUDE) -I$(RLBOX_ROOT)/include -I$(WASM2C_RUNTIME_PATH) s144r2.wasm.c -w -g
	$(CXX) $(CFLAGS) -std=c++17 wasm_main.cpp -o s144r2_wasm *.o -I$(RLBOX_INCLUDE) -I$(RLBOX_ROOT)/include -I$(WASM2C_RUNTIME_PATH) -lpthread -w -g