#ifndef s373r2_H
#define s373r2_H

#include "w2c2_base.h"

typedef struct s373r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s373r2Instance;

void f0(s373r2Instance*);

void f1(s373r2Instance*);

U32 f2(s373r2Instance*);

void f3(s373r2Instance*,U32);

U32 f4(s373r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s373r2Instance*,U32,U32,U32,U32,U32);

void f6(s373r2Instance*,U32);

void f7(s373r2Instance*,U32,U32,U32);

void f8(s373r2Instance*,U32,U32,U32);

void s373r2____wasm_call_ctors(s373r2Instance*i);

void s373r2____wasm_apply_data_relocs(s373r2Instance*i);

U32 s373r2_func_1(s373r2Instance*i);

void s373r2_call_cb(s373r2Instance*i,U32 l0);

void s373r2Instantiate(s373r2Instance* instance, void* resolve(const char* module, const char* name));

void s373r2FreeInstance(s373r2Instance* instance);

#endif /* s373r2_H */

