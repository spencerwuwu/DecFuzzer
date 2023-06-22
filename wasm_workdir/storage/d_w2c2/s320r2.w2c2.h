#ifndef s320r2_H
#define s320r2_H

#include "w2c2_base.h"

typedef struct s320r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s320r2Instance;

void f0(s320r2Instance*);

void f1(s320r2Instance*);

U32 f2(s320r2Instance*);

void f3(s320r2Instance*,U32);

U32 f4(s320r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s320r2Instance*,U32,U32,U32,U32,U32);

void f6(s320r2Instance*,U32);

void f7(s320r2Instance*,U32,U32,U32);

void f8(s320r2Instance*,U32,U32,U32);

void s320r2____wasm_call_ctors(s320r2Instance*i);

void s320r2____wasm_apply_data_relocs(s320r2Instance*i);

U32 s320r2_func_1(s320r2Instance*i);

void s320r2_call_cb(s320r2Instance*i,U32 l0);

void s320r2Instantiate(s320r2Instance* instance, void* resolve(const char* module, const char* name));

void s320r2FreeInstance(s320r2Instance* instance);

#endif /* s320r2_H */

