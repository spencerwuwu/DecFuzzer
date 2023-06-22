#ifndef s548r2_H
#define s548r2_H

#include "w2c2_base.h"

typedef struct s548r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s548r2Instance;

void f0(s548r2Instance*);

void f1(s548r2Instance*);

U32 f2(s548r2Instance*);

void f3(s548r2Instance*,U32);

U32 f4(s548r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s548r2Instance*,U32,U32,U32,U32,U32);

void f6(s548r2Instance*,U32);

void f7(s548r2Instance*,U32,U32,U32);

void f8(s548r2Instance*,U32,U32,U32);

void s548r2____wasm_call_ctors(s548r2Instance*i);

void s548r2____wasm_apply_data_relocs(s548r2Instance*i);

U32 s548r2_func_1(s548r2Instance*i);

void s548r2_call_cb(s548r2Instance*i,U32 l0);

void s548r2Instantiate(s548r2Instance* instance, void* resolve(const char* module, const char* name));

void s548r2FreeInstance(s548r2Instance* instance);

#endif /* s548r2_H */

