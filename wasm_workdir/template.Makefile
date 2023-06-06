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

all: {{libname}} {{libname}}.wasm {{libname}}.wasm.c {{libname}}_wasm

clean:
	rm -rf {{libname}}.wasm {{libname}}.wasm.c {{libname}}.wasm.h {{libname}}_wasm {{libname}} *.o

#Step 0: build native binary
{{libname}}: seed_for_wasm/{{libname}}.c
	$(CC) $(CFLAGS) -O{{opt}} -I$(CSMITH_LIB) seed_for_wasm/{{libname}}.c orig_main.c -o {{libname}}

#Step 1: build our library into wasm, using clang from the wasi-sdk
{{libname}}.wasm: seed_for_wasm/{{libname}}.c
	emcc $(EMCC_CFLAGS) -O{{opt}} -I$(CSMITH_LIB) seed_for_wasm/{{libname}}.c -o {{libname}}.wasm

#Step 2: use wasm2c to convert our wasm to a C implementation of wasm we can link with our app.
{{libname}}.wasm.c: {{libname}}.wasm
	$(WASM2C) {{libname}}.wasm -o {{libname}}.wasm.c

#Step 3: compiling and linking our application with our library
{{libname}}_wasm: {{libname}}.wasm.c
	$(CC) $(CFLAGS) -c $(WASI_RUNTIME_FILES) $(RLBOX_RUNTIME_FILES) -I$(RLBOX_INCLUDE) -I$(RLBOX_ROOT)/include -I$(WASM2C_RUNTIME_PATH) {{libname}}.wasm.c -w -g
	$(CXX) $(CFLAGS) -std=c++17 wasm_main.cpp -o {{libname}}_wasm *.o -I$(RLBOX_INCLUDE) -I$(RLBOX_ROOT)/include -I$(WASM2C_RUNTIME_PATH) -lpthread -w -g
