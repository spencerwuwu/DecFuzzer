#ifndef s91r2_H
#define s91r2_H

#include "w2c2_base.h"

typedef struct s91r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s91r2Instance;

void f0(s91r2Instance*);

void f1(s91r2Instance*);

U32 f2(s91r2Instance*);

void f3(s91r2Instance*,U32);

U32 f4(s91r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s91r2Instance*,U32,U32,U32,U32,U32);

void f6(s91r2Instance*,U32);

void f7(s91r2Instance*,U32,U32,U32);

void f8(s91r2Instance*,U32,U32,U32);

void s91r2____wasm_call_ctors(s91r2Instance*i);

void s91r2____wasm_apply_data_relocs(s91r2Instance*i);

U32 s91r2_func_1(s91r2Instance*i);

void s91r2_call_cb(s91r2Instance*i,U32 l0);

void s91r2Instantiate(s91r2Instance* instance, void* resolve(const char* module, const char* name));

void s91r2FreeInstance(s91r2Instance* instance);

#endif /* s91r2_H */

