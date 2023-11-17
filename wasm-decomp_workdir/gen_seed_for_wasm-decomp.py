#!/usr/bin/env python3
import os


for seed_file in os.listdir("../seed_for_r2"):
    in_file = f"../seed_for_r2/{seed_file}"
    out_file = f"seed_for_wasm-decomp/{seed_file}"
    with open(in_file, "r") as f:
        lines = f.readlines()
    with open(out_file, "w") as f:
        for line in lines:
            if "static" in line and "func_1" in line:
                line = line.replace("static", "")
            f.write(line)
