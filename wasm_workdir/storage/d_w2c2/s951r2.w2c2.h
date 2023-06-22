#ifndef s951r2_H
#define s951r2_H

#include "w2c2_base.h"

typedef struct s951r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s951r2Instance;

void f0(s951r2Instance*);

void f1(s951r2Instance*);

U32 f2(s951r2Instance*);

void f3(s951r2Instance*,U32);

U32 f4(s951r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s951r2Instance*,U32,U32,U32,U32,U32);

void f6(s951r2Instance*,U32);

void f7(s951r2Instance*,U32,U32,U32);

void f8(s951r2Instance*,U32,U32,U32);

void s951r2____wasm_call_ctors(s951r2Instance*i);

void s951r2____wasm_apply_data_relocs(s951r2Instance*i);

U32 s951r2_func_1(s951r2Instance*i);

void s951r2_call_cb(s951r2Instance*i,U32 l0);

void s951r2Instantiate(s951r2Instance* instance, void* resolve(const char* module, const char* name));

void s951r2FreeInstance(s951r2Instance* instance);

#endif /* s951r2_H */

