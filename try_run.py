#!/usr/bin/env python3
# -*- coding: UTF-8 -*-

# import sys, getopt

from src import fuzzer
from src import Config

# fuzzer.seed_test_AE('./seed_for_retdec/', './seed_for_retdec/emi/', './seed_for_retdec/config.txt')
# fuzzer.emi_test_AE('./seed_for_retdec/emi/', './seed_for_retdec/emi/config.txt')

Config.set_decompiler("r2")
Config.set_decompiler("retdec")
fuzzer.seed_test_WASM('./seed_for_try/', './seed_for_try/emi/', './seed_for_try/config.txt')

