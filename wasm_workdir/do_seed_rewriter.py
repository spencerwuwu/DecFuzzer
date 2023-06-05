#!/usr/bin/env python3
import sys
import os

f_dir = sys.argv[1]

for fname in os.listdir(f"../{f_dir}"):
    if not fname.endswith(".c"):
        continue
    with open(f'../{f_dir}/{fname}', "r") as fd:
        orig_content = fd.read()

    out_content = []
    out_content_idx = 0
    enter_func = False
    func_enter_idx = None
    func_exit_idx = None

    enter_main = False
    main_extracted = []

    func_brac_level = 0

    # Collect all contents before and inside func_1
    # Gather & rewrite partial lines from main
    for line in orig_content.split("\n"):
        if enter_main == True:
            if line.strip().startswith("transparent_crc"):
                n_line = line.replace(", ", "_l, ", 1).replace(");", ", &crc32_context, crc32_tab);")
                main_extracted.append(n_line)
            elif line.strip().startswith("platform_main_end"):
                n_line = line.replace("platform_main_end(", "return ").replace(", print_hash_value);", ";")
                main_extracted.append(n_line)
            continue

        if len(line) == 0:
            continue
        elif line.strip() == '#include "csmith.h"':
            out_content.append('#include "csmith_wasm.h"')
        elif 'static' in line and 'func_1(void);' in line:
            out_content.append("")
        elif 'static' in line and 'func_1(void)' in line:
            out_content.append('uint32_t func_1(void)')
            func_enter_idx = out_content_idx
            enter_func = True
        elif line.strip().startswith("set_var("):
            continue
        elif line.strip().startswith("return"):
            continue
        elif line.strip() == "int main (int argc, char* argv[])":
            enter_main = True
            continue
        elif "{" in line:
            if func_brac_level == 0 and enter_func:
                func_enter_idx = out_content_idx
            out_content.append(line)
            func_brac_level += line.count("{")
            func_brac_level -= line.count("}")
            if enter_func and func_brac_level == 0:
                func_exit_idx = out_content_idx
        elif "}" in line:
            out_content.append(line)
            func_brac_level -= line.count("}")
            if enter_func and func_brac_level == 0:
                func_exit_idx = out_content_idx
        else:
            out_content.append(line)
        out_content_idx += 1

    # Polish out_content with main_extracted

    out_content.insert(func_exit_idx, "\n".join(l for l in main_extracted))

    inits = """ 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         """
    out_content.insert(func_enter_idx+1, inits)

    patch = """
    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    """
    out_content.append(patch)

    with open(f'seed_for_wasm/{f_dir.replace("eed_for_", fname.replace(".c", ""))}.c', "w") as fd:
        for line in out_content:
            fd.write(line + "\n")

