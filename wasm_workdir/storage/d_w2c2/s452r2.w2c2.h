#ifndef s452r2_H
#define s452r2_H

#include "w2c2_base.h"

typedef struct s452r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s452r2Instance;

void f0(s452r2Instance*);

void f1(s452r2Instance*);

U32 f2(s452r2Instance*);

void f3(s452r2Instance*,U32);

U32 f4(s452r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s452r2Instance*,U32,U32,U32,U32,U32);

void f6(s452r2Instance*,U32);

void f7(s452r2Instance*,U32,U32,U32);

void f8(s452r2Instance*,U32,U32,U32);

void s452r2____wasm_call_ctors(s452r2Instance*i);

void s452r2____wasm_apply_data_relocs(s452r2Instance*i);

U32 s452r2_func_1(s452r2Instance*i);

void s452r2_call_cb(s452r2Instance*i,U32 l0);

void s452r2Instantiate(s452r2Instance* instance, void* resolve(const char* module, const char* name));

void s452r2FreeInstance(s452r2Instance* instance);

#endif /* s452r2_H */

