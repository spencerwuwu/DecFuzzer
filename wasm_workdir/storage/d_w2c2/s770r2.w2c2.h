#ifndef s770r2_H
#define s770r2_H

#include "w2c2_base.h"

typedef struct s770r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s770r2Instance;

void f0(s770r2Instance*);

void f1(s770r2Instance*);

U32 f2(s770r2Instance*);

void f3(s770r2Instance*,U32);

U32 f4(s770r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s770r2Instance*,U32,U32,U32,U32,U32);

void f6(s770r2Instance*,U32);

void f7(s770r2Instance*,U32,U32,U32);

void f8(s770r2Instance*,U32,U32,U32);

void s770r2____wasm_call_ctors(s770r2Instance*i);

void s770r2____wasm_apply_data_relocs(s770r2Instance*i);

U32 s770r2_func_1(s770r2Instance*i);

void s770r2_call_cb(s770r2Instance*i,U32 l0);

void s770r2Instantiate(s770r2Instance* instance, void* resolve(const char* module, const char* name));

void s770r2FreeInstance(s770r2Instance* instance);

#endif /* s770r2_H */

