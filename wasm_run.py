#!/usr/bin/env python3
# -*- coding: UTF-8 -*-

# import sys, getopt

from src import fuzzer
from src import Config

Config.set_decompiler("wasm-decompile")
results = fuzzer.seed_test_WASM('./wasm-decomp_workdir/seed_for_wasm-decomp', './result_wasm-decompile/', './storage/d_wasm-decompile', remove=True, is_wasm=True)
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
