#ifndef s309r2_H
#define s309r2_H

#include "w2c2_base.h"

typedef struct s309r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s309r2Instance;

void f0(s309r2Instance*);

void f1(s309r2Instance*);

U32 f2(s309r2Instance*);

void f3(s309r2Instance*,U32);

U32 f4(s309r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s309r2Instance*,U32,U32,U32,U32,U32);

void f6(s309r2Instance*,U32);

void f7(s309r2Instance*,U32,U32,U32);

void f8(s309r2Instance*,U32,U32,U32);

void s309r2____wasm_call_ctors(s309r2Instance*i);

void s309r2____wasm_apply_data_relocs(s309r2Instance*i);

U32 s309r2_func_1(s309r2Instance*i);

void s309r2_call_cb(s309r2Instance*i,U32 l0);

void s309r2Instantiate(s309r2Instance* instance, void* resolve(const char* module, const char* name));

void s309r2FreeInstance(s309r2Instance* instance);

#endif /* s309r2_H */

