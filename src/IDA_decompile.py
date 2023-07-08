import os
import sys
from subprocess import Popen, PIPE, getstatusoutput
# use IDA (on Windows) to decompile files
ida_path = "/home/weicheng/idaedu-8.0/idat64"
ida_option = "-A "
ida_script_path = "./idapy_decompile.py "


def get_script_path():
    global ida_script_path
    # current_file_path = sys.path[0]
    current_file_path = os.path.realpath(__file__)
    fpath, fname = os.path.split(current_file_path)
    ida_script_path = os.path.join(fpath, "idapy_decompile.py")
    ida_script_path += ' '
    # print(ida_script_path)


def decompile(target_bin_path, generated_file_path):
    get_script_path()

    cmd = f'{ida_path} {ida_option} -S"{ida_script_path}" {target_bin_path}'
    proc = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE, env={"TERM":"xterm"})
    stdout, stderr = proc.communicate()
    if proc.returncode != 0:
        print(stderr.decode())
        return
    print(stdout.decode())
    decompile_tmp_file_path = os.path.join(os.path.split(target_bin_path)[0], 'decompile_tmp.c')
    isExists = os.path.exists(decompile_tmp_file_path)
    if not isExists:
        return -1
    else:
        status, output = getstatusoutput(r'copy ' + decompile_tmp_file_path+ ' '+ generated_file_path)
        status, output = getstatusoutput(r'del ' + decompile_tmp_file_path)
        return 0

bin_path = "/home/weicheng/Documents/CS699_WASM/DecFuzzer/practice/a.out"
out = "/home/weicheng/Documents/CS699_WASM/DecFuzzer/practice/decompiled.c"
decompile(bin_path, out)
