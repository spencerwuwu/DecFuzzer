#ifndef s451r2_H
#define s451r2_H

#include "w2c2_base.h"

typedef struct s451r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s451r2Instance;

void f0(s451r2Instance*);

void f1(s451r2Instance*);

U32 f2(s451r2Instance*);

void f3(s451r2Instance*,U32);

U32 f4(s451r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s451r2Instance*,U32,U32,U32,U32,U32);

void f6(s451r2Instance*,U32);

void f7(s451r2Instance*,U32,U32,U32);

void f8(s451r2Instance*,U32,U32,U32);

void s451r2____wasm_call_ctors(s451r2Instance*i);

void s451r2____wasm_apply_data_relocs(s451r2Instance*i);

U32 s451r2_func_1(s451r2Instance*i);

void s451r2_call_cb(s451r2Instance*i,U32 l0);

void s451r2Instantiate(s451r2Instance* instance, void* resolve(const char* module, const char* name));

void s451r2FreeInstance(s451r2Instance* instance);

#endif /* s451r2_H */

