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
exit(0)
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
exit(0)
#Config.set_decompiler("ida")
#results = fuzzer.single_test_WASM('./practice/', 's449retdec.c', './tmp/', remove=True)
#results = fuzzer.single_test_WASM('./result_retdec/error/', 's0r2.c', './tmp/', remove=True)
results = fuzzer.seed_test_WASM('./result_retdec/error/', './tmp/', './tmp')
total = sum(results.values())
print()
print()
print("Complete!")
print(f"Total:                 {total}")
print(f"Succeed:               {results['SUCCEED']}")
print(f"Compile failed:        {results['F_COM']}")
print(f"DeCompile failed:      {results['F_DECOM']}")
print(f"ReCompile failed:      {results['F_RECOM']}")
print(f"Execute discrepancy:   {results['F_DISCR']}")
