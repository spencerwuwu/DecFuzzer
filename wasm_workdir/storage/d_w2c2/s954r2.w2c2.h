#ifndef s954r2_H
#define s954r2_H

#include "w2c2_base.h"

typedef struct s954r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s954r2Instance;

void f0(s954r2Instance*);

void f1(s954r2Instance*);

U32 f2(s954r2Instance*);

void f3(s954r2Instance*,U32);

U32 f4(s954r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s954r2Instance*,U32,U32,U32,U32,U32);

void f6(s954r2Instance*,U32);

void f7(s954r2Instance*,U32,U32,U32);

void f8(s954r2Instance*,U32,U32,U32);

void s954r2____wasm_call_ctors(s954r2Instance*i);

void s954r2____wasm_apply_data_relocs(s954r2Instance*i);

U32 s954r2_func_1(s954r2Instance*i);

void s954r2_call_cb(s954r2Instance*i,U32 l0);

void s954r2Instantiate(s954r2Instance* instance, void* resolve(const char* module, const char* name));

void s954r2FreeInstance(s954r2Instance* instance);

#endif /* s954r2_H */

