#ifndef s764r2_H
#define s764r2_H

#include "w2c2_base.h"

typedef struct s764r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s764r2Instance;

void f0(s764r2Instance*);

void f1(s764r2Instance*);

U32 f2(s764r2Instance*);

void f3(s764r2Instance*,U32);

U32 f4(s764r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s764r2Instance*,U32,U32,U32,U32,U32);

void f6(s764r2Instance*,U32);

void f7(s764r2Instance*,U32,U32,U32);

void f8(s764r2Instance*,U32,U32,U32);

void s764r2____wasm_call_ctors(s764r2Instance*i);

void s764r2____wasm_apply_data_relocs(s764r2Instance*i);

U32 s764r2_func_1(s764r2Instance*i);

void s764r2_call_cb(s764r2Instance*i,U32 l0);

void s764r2Instantiate(s764r2Instance* instance, void* resolve(const char* module, const char* name));

void s764r2FreeInstance(s764r2Instance* instance);

#endif /* s764r2_H */

