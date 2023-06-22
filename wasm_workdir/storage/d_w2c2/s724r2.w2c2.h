#ifndef s724r2_H
#define s724r2_H

#include "w2c2_base.h"

typedef struct s724r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s724r2Instance;

void f0(s724r2Instance*);

void f1(s724r2Instance*);

U32 f2(s724r2Instance*);

void f3(s724r2Instance*,U32);

void f4(s724r2Instance*,U32);

void s724r2____wasm_call_ctors(s724r2Instance*i);

void s724r2____wasm_apply_data_relocs(s724r2Instance*i);

U32 s724r2_func_1(s724r2Instance*i);

void s724r2_call_cb(s724r2Instance*i,U32 l0);

void s724r2Instantiate(s724r2Instance* instance, void* resolve(const char* module, const char* name));

void s724r2FreeInstance(s724r2Instance* instance);

#endif /* s724r2_H */

