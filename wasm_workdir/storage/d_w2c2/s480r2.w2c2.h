#ifndef s480r2_H
#define s480r2_H

#include "w2c2_base.h"

typedef struct s480r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s480r2Instance;

void f0(s480r2Instance*);

void f1(s480r2Instance*);

U32 f2(s480r2Instance*);

void f3(s480r2Instance*,U32);

U32 f4(s480r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s480r2Instance*,U32,U32,U32,U32,U32);

void f6(s480r2Instance*,U32);

void f7(s480r2Instance*,U32,U32,U32);

void f8(s480r2Instance*,U32,U32,U32);

void s480r2____wasm_call_ctors(s480r2Instance*i);

void s480r2____wasm_apply_data_relocs(s480r2Instance*i);

U32 s480r2_func_1(s480r2Instance*i);

void s480r2_call_cb(s480r2Instance*i,U32 l0);

void s480r2Instantiate(s480r2Instance* instance, void* resolve(const char* module, const char* name));

void s480r2FreeInstance(s480r2Instance* instance);

#endif /* s480r2_H */

