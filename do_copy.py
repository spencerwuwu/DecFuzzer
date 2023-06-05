#!/usr/bin/env python3
import subprocess
import os
import sys

f_dir = sys.argv[1]

def copy_file(src, dst):
    sta, out = subprocess.getstatusoutput('cp ' + src + ' ' + dst)
    return sta, out

for fname in os.listdir(f_dir):
    if not fname.endswith(".c"):
        continue
    n_fname = f_dir.replace("eed_for_", fname.replace(".c", "")) + ".c"
    copy_file(f'{f_dir}/{fname}', f'seed_all/{n_fname}')

