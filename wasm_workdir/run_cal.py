#!/usr/bin/env python3
import subprocess
import os
from threading import Timer
from subprocess import Popen, PIPE, getstatusoutput
from jinja2 import Template
import sys

timeout_sec = 10

OPT=1
out_dir = f'tmp_O{OPT}/'

def run_single_prog(prog_path):
    global timeout_sec
    proc = Popen(prog_path, stdout=PIPE, stderr=PIPE)
    timer = Timer(timeout_sec, proc.kill)
    try:
        timer.start()
        stdout, stderr = proc.communicate()
    finally:
        timer.cancel()
    return stdout, stderr


def render_code(libname):
    with open("template.orig_main.c", "r") as fd:
        tm = Template(fd.read())
    msg = tm.render(libname=libname)

    with open("orig_main.c", "w") as fd:
        fd.write(msg)

    with open("template.wasm_main.cpp", "r") as fd:
        tm = Template(fd.read())
    msg = tm.render(libname=libname)

    with open("wasm_main.cpp", "w") as fd:
        fd.write(msg)
        
    with open("template.Makefile_cal", "r") as fd:
        tm = Template(fd.read())
    msg = tm.render(libname=libname, opt=0)

    with open("Makefile", "w") as fd:
        fd.write(msg)


if not os.path.exists(out_dir):
    os.mkdir(out_dir)

#################################
# main
#################################
done = []
succeed = 0
diff    = 0
compile_failed = 0
recompile_failed = 0
total = 0

# if os.path.exists(f"{out_dir}/error_compile.log"):
#     with open(f"{out_dir}/error_compile.log", "r") as fd:
#         for fname in fd.read().split("\n"):
#             if len(fname) != 0:
#                 done.append(fname)
#                 compile_failed += 1
# if os.path.exists(f"{out_dir}/error_execute.log"):
#     with open(f"{out_dir}/error_execute.log", "r") as fd:
#         for fname in fd.read().split("\n"):
#             if len(fname) != 0:
#                 done.append(fname)
#                 diff += 1
# if os.path.exists(f"{out_dir}/succ_execute.log"):
#     with open(f"{out_dir}/succ_execute.log", "r") as fd:
#         for fname in fd.read().split("\n"):
#             if len(fname) != 0:
#                 done.append(fname)
#                 succeed += 1
total = len(done)

for fname in os.listdir(f"./seed_for_wasm"):
    if fname in done:
        continue
    total += 1
    libname = fname.replace(".c", "")

    print(libname)
    # Generate code
    render_code(libname)

    # Comile
    cmd = "make"
    sta, out = subprocess.getstatusoutput(cmd)

    # Clean up
    subprocess.getstatusoutput("make clean")

