#ifndef s219r2_H
#define s219r2_H

#include "w2c2_base.h"

typedef struct s219r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s219r2Instance;

void f0(s219r2Instance*);

void f1(s219r2Instance*);

U32 f2(s219r2Instance*);

void f3(s219r2Instance*,U32);

U32 f4(s219r2Instance*,U32,U32,U32,U32,U32);

void f5(s219r2Instance*,U32,U32,U32,U32,U32);

void f6(s219r2Instance*,U32);

void f7(s219r2Instance*,U32,U32,U32);

void f8(s219r2Instance*,U32,U32,U32);

void s219r2____wasm_call_ctors(s219r2Instance*i);

void s219r2____wasm_apply_data_relocs(s219r2Instance*i);

U32 s219r2_func_1(s219r2Instance*i);

void s219r2_call_cb(s219r2Instance*i,U32 l0);

void s219r2Instantiate(s219r2Instance* instance, void* resolve(const char* module, const char* name));

void s219r2FreeInstance(s219r2Instance* instance);

#endif /* s219r2_H */

