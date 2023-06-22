#ifndef s874r2_H
#define s874r2_H

#include "w2c2_base.h"

typedef struct s874r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s874r2Instance;

void f0(s874r2Instance*);

void f1(s874r2Instance*);

U32 f2(s874r2Instance*);

void f3(s874r2Instance*,U32);

U32 f4(s874r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s874r2Instance*,U32,U32,U32,U32,U32);

void f6(s874r2Instance*,U32);

void f7(s874r2Instance*,U32,U32,U32);

void f8(s874r2Instance*,U32,U32,U32);

void s874r2____wasm_call_ctors(s874r2Instance*i);

void s874r2____wasm_apply_data_relocs(s874r2Instance*i);

U32 s874r2_func_1(s874r2Instance*i);

void s874r2_call_cb(s874r2Instance*i,U32 l0);

void s874r2Instantiate(s874r2Instance* instance, void* resolve(const char* module, const char* name));

void s874r2FreeInstance(s874r2Instance* instance);

#endif /* s874r2_H */

