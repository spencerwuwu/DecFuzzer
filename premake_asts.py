#!/usr/bin/env python3
import os
from clang.cindex import TranslationUnit
from src import Config

DE_DIRS = ["seed_all", "storage/d_r2", "storage/d_retdec", "wasm_workdir/storage/d_wasm2c"]

for src_dir in DE_DIRS:
    if src_dir == "seed_all":
        out_dir = "asts/orig/"
    else:
        out = src_dir.split("/")[-1]
        out_dir = "asts/%s/" % out

    for c_file in os.listdir(src_dir):
        if not c_file.endswith(".c"):
            continue

        out_f = out_dir + c_file.replace(".c", ".ast")
        if os.path.exists(out_f):
            continue

        c_f = f"{src_dir}/{c_file}"
        t_unit = TranslationUnit.from_source(c_f, [f"-I{Config.runtime_dir}"])
        t_unit.save(out_f)
        print("Generated:", out_f)
