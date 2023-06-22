#ifndef s854r2_H
#define s854r2_H

#include "w2c2_base.h"

typedef struct s854r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s854r2Instance;

void f0(s854r2Instance*);

void f1(s854r2Instance*);

U32 f2(s854r2Instance*);

void f3(s854r2Instance*,U32);

U32 f4(s854r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s854r2Instance*,U32,U32,U32,U32,U32);

void f6(s854r2Instance*,U32);

void f7(s854r2Instance*,U32,U32,U32);

void f8(s854r2Instance*,U32,U32,U32);

void s854r2____wasm_call_ctors(s854r2Instance*i);

void s854r2____wasm_apply_data_relocs(s854r2Instance*i);

U32 s854r2_func_1(s854r2Instance*i);

void s854r2_call_cb(s854r2Instance*i,U32 l0);

void s854r2Instantiate(s854r2Instance* instance, void* resolve(const char* module, const char* name));

void s854r2FreeInstance(s854r2Instance* instance);

#endif /* s854r2_H */

