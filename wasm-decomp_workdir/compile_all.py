#!/usr/bin/env python3
import os
import subprocess

RUNTIME_DIR = '../runtime'
WASM_DECOMPILE = "/home/weicheng/Documents/Wasm/wabt/bin/wasm-decompile"
EMCC_CFLAGS = f"-s WASM=1 -s SIDE_MODULE=1 -g3 -w -I{RUNTIME_DIR}"

#for c_file in os.listdir("./seed_for_wasm-decomp/"):
for c_file in ["107.c"]:
    compile_cmd = "emcc " + EMCC_CFLAGS + " ./seed_for_wasm-decomp/" + c_file + \
        " -o" + "compiled_wasm/" + c_file.replace(".c", ".wasm")
    status, output = subprocess.getstatusoutput(compile_cmd)
    if status != 0:
        print("Compile failed: ", output)
    break

for wasm_file in os.listdir("./compiled_wasm/"):
    decompile_cmd = WASM_DECOMPILE + " " + "compiled_wasm/" + wasm_file + " -o decompiled/" + wasm_file.replace(".wasm", ".c")
    status, output = subprocess.getstatusoutput(decompile_cmd)
    if status != 0:
        print("Compile failed: ", output)
    break
