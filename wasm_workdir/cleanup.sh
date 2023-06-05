#!/bin/bash
test -f Makefile && make clean
rm -rf Makefile orig_main.c wasm_main.cpp
