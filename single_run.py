#!/usr/bin/env python3
# -*- coding: UTF-8 -*-

# import sys, getopt

#from src import fuzzer
from src import Config
from src import generator

Config.set_decompiler("r2")
file_path = "practice/107.c"
generator.compile_single_file(file_path)
generator.decompile_single_file(file_path[:-2])
decompiled_file_name = file_path[:-2] + Config.Radare2_suffix  # '_r2.c'
generator.recompile_single_file(file_path,
                                decompiled_file_name,
                                func_name=Config.replaced_func_name,  # func_1
                                keep_func_decl_unchanged=1,
                                try_second_time=1)
#Config.set_decompiler("retdec")
Config.set_decompiler("wasm-decompile")
file_path = "practice/607.c"
generator.compile_single_wasm(file_path)
generator.decompile_single_file(file_path[:-2])
decompiled_file_name = file_path[:-2] + Config.WasmDecompile_suffix  # '_wasm.c'
generator.recompile_single_file(file_path,
                                decompiled_file_name,
                                func_name=Config.replaced_func_name,  # func_1
                                keep_func_decl_unchanged=1,
                                try_second_time=1)
