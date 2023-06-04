#!/usr/bin/env python3

from jinja2 import Template

libname = "f11"

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
    
with open("template.Makefile", "r") as fd:
    tm = Template(fd.read())
msg = tm.render(libname=libname)

with open("Makefile", "w") as fd:
    fd.write(msg)
    
