#ifndef s750r2_H
#define s750r2_H

#include "w2c2_base.h"

typedef struct s750r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s750r2Instance;

void f0(s750r2Instance*);

void f1(s750r2Instance*);

U32 f2(s750r2Instance*);

void f3(s750r2Instance*,U32);

U32 f4(s750r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s750r2Instance*,U32,U32,U32,U32,U32);

void f6(s750r2Instance*,U32);

void f7(s750r2Instance*,U32,U32,U32);

void f8(s750r2Instance*,U32,U32,U32);

void s750r2____wasm_call_ctors(s750r2Instance*i);

void s750r2____wasm_apply_data_relocs(s750r2Instance*i);

U32 s750r2_func_1(s750r2Instance*i);

void s750r2_call_cb(s750r2Instance*i,U32 l0);

void s750r2Instantiate(s750r2Instance* instance, void* resolve(const char* module, const char* name));

void s750r2FreeInstance(s750r2Instance* instance);

#endif /* s750r2_H */

