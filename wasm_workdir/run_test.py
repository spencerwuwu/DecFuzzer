#!/usr/bin/env python3
import subprocess
import os
from threading import Timer
from subprocess import Popen, PIPE, getstatusoutput

timeout_sec = 10


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


#################################
# main
#################################
done = []
succeed = 0
diff    = 0
compile_failed = 0
total = 0

if os.path.exists("error_compile.log"):
    with open("error_compile.log", "r") as fd:
        for fname in fd.read().split("\n"):
            if len(fname) != 0:
                done.append(fname)
                compiled_failed += 1
if os.path.exists("error_execute.log"):
    with open("error_execute.log", "r") as fd:
        for fname in fd.read().split("\n"):
            if len(fname) != 0:
                done.append(fname)
                diff += 1
if os.path.exists("succ_execute.log"):
    with open("succ_execute.log", "r") as fd:
        for fname in fd.read().split("\n"):
            if len(fname) != 0:
                done.append(fname)
                succeed += 1
total = len(fname)

for fname in os.listdir(f"./seed_for_wasm"):
    if fname in done:
        continue
    total += 1
    libname = fname.replace(".c", "")

    # Generate code
    cmd = f"./render_code.py {libname}"
    sta, out = subprocess.getstatusoutput(cmd)

    # Comile
    cmd = "make"
    sta, out = subprocess.getstatusoutput(cmd)
    if sta != 0:
        compile_failed += 1
        print(f"Failed compiling seed_for_wasm/{fname}")
        with open("error_compile.log", "a") as fd:
            fd.write(f"{fname}\n")
        # Clean up
        subprocess.getstatusoutput("make clean")
        done.append(fname)
        continue

    stdout1, stderr1 = run_single_prog(f"./{libname}")
    stdout2, stderr2 = run_single_prog(f"./{libname}_wasm")
    if stdout1 != stdout2 and len(stdout1) != 0:
        diff += 1
        print(f"Exec diff seed_for_wasm/{fname}")
        with open("error_execute.log", "a") as fd:
            fd.write(f"{fname}\n")
        with open("full.log", "a") as fd:
            fd.write("\n\n")
            fd.write(f"=== Different in {fname}\n")
            fd.write(f"+ {libname}:\n")
            fd.write('stdout:\n')
            fd.write(stdout1.decode())
            fd.write('\nstderr:\n')
            fd.write(stderr1.decode())

            fd.write(f"+ {libname}_wasm:\n")
            fd.write('stdout:\n')
            fd.write(stdout2.decode())
            fd.write('\nstderr:\n')
            fd.write(stderr2.decode())
    else:
        succeed += 1
        with open("succ_execute.log", "a") as fd:
            fd.write(f"{fname}\n")

    done.append(fname)
    # Clean up
    subprocess.getstatusoutput("make clean")

print("Complete!")
print(f"Total:          {total}")
print(f"Succeed:        {succeed}")
print(f"Compile failed: {compile_failed}")
print(f"Execute diff:   {diff}")
