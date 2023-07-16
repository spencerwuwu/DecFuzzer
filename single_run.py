#!/usr/bin/env python3
# -*- coding: UTF-8 -*-

# import sys, getopt

from src import fuzzer
from src import Config

Config.set_decompiler("retdec")
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
