#!/usr/bin/env python3
import os
import re

#from clang.cindex import *
#from src import Config
#
#def do_traverse(cursor):
#    for child in cursor.get_children():
#        if child.kind == CursorKind.DECL_REF_EXPR:
#            print(child.spelling)
#
#c_f = f"storage/d_r2/s0r2_new.c"
#t_unit = TranslationUnit.from_source(c_f, [f"-I{Config.runtime_dir}"])
#for func in t_unit.cursor.get_children():
#    children = list(func.get_children())
#    if len(children) == 0:
#        continue
#    if func.mangled_name == "func_1" and len(children) > 1:
#        print(func.mangled_name)
#        do_traverse(func)

# regex aprpoach
const_type_reg = (r"(\s+"             # spaces
                r"set_var\(" +       # setvar(
                r"[a-fA-F0-9xX,\-\s\n]+" + # 0x124, 2
                r"\);" +
                r")")

def count_non_const_setvar(storage):
    count = 0
    real_files = []
    none_real = []
    for c_f in os.listdir(storage):
        f = f"{storage}/{c_f}"
        with open(f, "r") as fd:
            content = fd.read()
        const_type = re.findall(const_type_reg, content)
        if len(const_type) == 0:
            count += 1
            real_files.append(f)
        else:
            none_real.append(f)
    return count, real_files, none_real


print("r2")
cnt, r2, n2 = count_non_const_setvar("storage/d_r2")

with open("native_decompile_compare/real_r2.txt", "w") as fd:
    fd.write("\n".join(r2))
with open("native_decompile_compare/null_r2.txt", "w") as fd:
    fd.write("\n".join(n2))

print("retdec")
cnt, r, n = count_non_const_setvar("storage/d_retdec")
with open("native_decompile_compare/real_retdec.txt", "w") as fd:
    fd.write("\n".join(r))
with open("native_decompile_compare/null_retdec.txt", "w") as fd:
    fd.write("\n".join(n))

rr2 = [d.replace("storage/d_r2/", "") for d in r2]
rret = [d.replace("storage/d_retdec/", "") for d in r]

s = []
for f in rr2:
    if f not in rret:
        s.append("storage/d_retdec/" + f)

with open("native_decompile_compare/diff.txt", "w") as fd:
    fd.write("\n".join(s))
