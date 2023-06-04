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

all: f11 f11.wasm f11.wasm.c f11_wasm

clean:
	rm -rf f11.wasm f11.wasm.c f11.wasm.h f11_wasm f11 *.o

#Step 0: build native binary
f11: f11.c
	$(CC) $(CFLAGS) -I$(CSMITH_LIB) f11.c orig_main.c -o f11

#Step 1: build our library into wasm, using clang from the wasi-sdk
f11.wasm: f11.c
	emcc $(EMCC_CFLAGS) -I$(CSMITH_LIB) f11.c -o f11.wasm

#Step 2: use wasm2c to convert our wasm to a C implementation of wasm we can link with our app.
f11.wasm.c: f11.wasm
	$(WASM2C) f11.wasm -o f11.wasm.c

#Step 3: compiling and linking our application with our library
f11_wasm: f11.wasm.c
	$(CC) $(CFLAGS) -c $(WASI_RUNTIME_FILES) $(RLBOX_RUNTIME_FILES) -I$(RLBOX_INCLUDE) -I$(RLBOX_ROOT)/include -I$(WASM2C_RUNTIME_PATH) f11.wasm.c -w -g
	$(CXX) $(CFLAGS) -std=c++17 wasm_main.cpp -o f11_wasm *.o -I$(RLBOX_INCLUDE) -I$(RLBOX_ROOT)/include -I$(WASM2C_RUNTIME_PATH) -lpthread -w -g