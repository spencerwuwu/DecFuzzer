#ifndef s611r2_H
#define s611r2_H

#include "w2c2_base.h"

typedef struct s611r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s611r2Instance;

void f0(s611r2Instance*);

void f1(s611r2Instance*);

U32 f2(s611r2Instance*);

void f3(s611r2Instance*,U32);

U32 f4(s611r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s611r2Instance*,U32,U32,U32,U32,U32);

void f6(s611r2Instance*,U32);

void f7(s611r2Instance*,U32,U32,U32);

void f8(s611r2Instance*,U32,U32,U32);

void s611r2____wasm_call_ctors(s611r2Instance*i);

void s611r2____wasm_apply_data_relocs(s611r2Instance*i);

U32 s611r2_func_1(s611r2Instance*i);

void s611r2_call_cb(s611r2Instance*i,U32 l0);

void s611r2Instantiate(s611r2Instance* instance, void* resolve(const char* module, const char* name));

void s611r2FreeInstance(s611r2Instance* instance);

#endif /* s611r2_H */

