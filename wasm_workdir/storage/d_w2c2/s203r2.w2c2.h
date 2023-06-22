#ifndef s203r2_H
#define s203r2_H

#include "w2c2_base.h"

typedef struct s203r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s203r2Instance;

void f0(s203r2Instance*);

void f1(s203r2Instance*);

U32 f2(s203r2Instance*);

void f3(s203r2Instance*,U32);

U32 f4(s203r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s203r2Instance*,U32,U32,U32,U32,U32);

void f6(s203r2Instance*,U32);

void f7(s203r2Instance*,U32,U32,U32);

void f8(s203r2Instance*,U32,U32,U32);

void s203r2____wasm_call_ctors(s203r2Instance*i);

void s203r2____wasm_apply_data_relocs(s203r2Instance*i);

U32 s203r2_func_1(s203r2Instance*i);

void s203r2_call_cb(s203r2Instance*i,U32 l0);

void s203r2Instantiate(s203r2Instance* instance, void* resolve(const char* module, const char* name));

void s203r2FreeInstance(s203r2Instance* instance);

#endif /* s203r2_H */

