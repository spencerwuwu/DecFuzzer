#ifndef s738r2_H
#define s738r2_H

#include "w2c2_base.h"

typedef struct s738r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s738r2Instance;

void f0(s738r2Instance*);

void f1(s738r2Instance*);

U32 f2(s738r2Instance*);

void f3(s738r2Instance*,U32);

U32 f4(s738r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s738r2Instance*,U32,U32,U32,U32,U32);

void f6(s738r2Instance*,U32);

void f7(s738r2Instance*,U32,U32,U32);

void f8(s738r2Instance*,U32,U32,U32);

void s738r2____wasm_call_ctors(s738r2Instance*i);

void s738r2____wasm_apply_data_relocs(s738r2Instance*i);

U32 s738r2_func_1(s738r2Instance*i);

void s738r2_call_cb(s738r2Instance*i,U32 l0);

void s738r2Instantiate(s738r2Instance* instance, void* resolve(const char* module, const char* name));

void s738r2FreeInstance(s738r2Instance* instance);

#endif /* s738r2_H */

