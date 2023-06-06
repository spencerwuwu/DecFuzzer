#!/usr/bin/env python3
import sys
import os

f_dir = sys.argv[1]

for fname in os.listdir(f_dir):
    if not fname.endswith(".c"):
        continue
    with open(f'{f_dir}/{fname}', "r") as fd:
        orig_content = fd.read()

    out_content = []
    out_content_idx = 0
    enter_func = False
    func_enter_idx = None
    func_exit_idx = None

    in_set_var = 0
    set_var_idx = None

    enter_main = False
    main_extracted = []

    func_brac_level = 0
    collect_globals = False
    global_vars = []

    # Collect all contents before and inside func_1
    # Gather & rewrite partial lines from main
    for line in orig_content.split("\n"):
        if enter_main == True:
            if line.strip().startswith("transparent_crc"):
                #n_line = line.replace(", ", "_l, ", 1).replace("print_hash_value);", "0, &crc32_context, crc32_tab);")
                n_line = line.replace("print_hash_value);", "0, crc32_context, crc32_tab);")
                main_extracted.append(n_line)
            elif line.strip().startswith("platform_main_end"):
                n_line = line.replace("platform_main_end(", "return ").replace(", print_hash_value);", ";").replace("crc32_context", "*crc32_context")
                main_extracted.append(n_line)
            continue

        # Skip one line if in_set_var
        if in_set_var > 0:
            in_set_var -= 1
            continue

        if collect_globals:
            if "FORWARD DECLARATIONS" in line:
                collect_globals = False
                continue
            if line.startswith("static"):
                global_vars.append(line.replace("static ", ""))
            continue

        if len(line) == 0:
            continue
        elif "GLOBAL VARIABLES" in line:
            collect_globals = True
            continue
        elif line.strip() == '#include "csmith.h"':
            out_content.append('#include "csmith_wasm.h"')
        elif 'static' in line and 'func_1(void);' in line:
            out_content.append("")
        elif 'static' in line and 'func_1(void)' in line:
            out_content.append('uint32_t func_1(void)')
            func_enter_idx = out_content_idx
            enter_func = True
        elif line.strip().startswith("static int set_var("):
            in_set_var = 2
            set_var_idx = out_content_idx
            n_line = line.replace("static int", "static uint32_t")
            n_line = n_line.replace(")", ", uint32_t *crc32_context, uint32_t *crc32_tab)")
            out_content.append(n_line)
            func_brac_level += 1
        elif line.strip().startswith("set_var("):
            n_line = line.split("return")[0].replace(")", ", &crc32_context, crc32_tab)")
            idx = n_line.find("set_var")
            out_content.append(n_line[:idx] + "return " + n_line[idx:])
        elif line.strip() == "int main (int argc, char* argv[])":
            enter_main = True
            continue
        elif line.strip().startswith("return"):
            # indicate no set_var, manually create one later
            out_content.append("return crc32_context ^ 0xFFFFFFFFUL;")
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

    inits = """ 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         """
    out_content.insert(func_enter_idx+1, inits)

    if set_var_idx is not None:
        out_content.insert(set_var_idx+1, "\n".join(l for l in global_vars + main_extracted))

    patch = """
    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    """
    out_content.append(patch)

    with open(f'seed_for_wasm/{fname}', "w") as fd:
        for line in out_content:
            fd.write(line + "\n")

