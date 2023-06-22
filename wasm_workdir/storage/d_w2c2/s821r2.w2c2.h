#ifndef s821r2_H
#define s821r2_H

#include "w2c2_base.h"

typedef struct s821r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s821r2Instance;

void f0(s821r2Instance*);

void f1(s821r2Instance*);

U32 f2(s821r2Instance*);

void f3(s821r2Instance*,U32);

U32 f4(s821r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s821r2Instance*,U32,U32,U32,U32,U32);

void f6(s821r2Instance*,U32);

void f7(s821r2Instance*,U32,U32,U32);

void f8(s821r2Instance*,U32,U32,U32);

void s821r2____wasm_call_ctors(s821r2Instance*i);

void s821r2____wasm_apply_data_relocs(s821r2Instance*i);

U32 s821r2_func_1(s821r2Instance*i);

void s821r2_call_cb(s821r2Instance*i,U32 l0);

void s821r2Instantiate(s821r2Instance* instance, void* resolve(const char* module, const char* name));

void s821r2FreeInstance(s821r2Instance* instance);

#endif /* s821r2_H */

