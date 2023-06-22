#ifndef s54r2_H
#define s54r2_H

#include "w2c2_base.h"

typedef struct s54r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s54r2Instance;

void f0(s54r2Instance*);

void f1(s54r2Instance*);

U32 f2(s54r2Instance*);

void f3(s54r2Instance*,U32);

U32 f4(s54r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s54r2Instance*,U32,U32,U32,U32,U32);

void f6(s54r2Instance*,U32);

void f7(s54r2Instance*,U32,U32,U32);

void f8(s54r2Instance*,U32,U32,U32);

void s54r2____wasm_call_ctors(s54r2Instance*i);

void s54r2____wasm_apply_data_relocs(s54r2Instance*i);

U32 s54r2_func_1(s54r2Instance*i);

void s54r2_call_cb(s54r2Instance*i,U32 l0);

void s54r2Instantiate(s54r2Instance* instance, void* resolve(const char* module, const char* name));

void s54r2FreeInstance(s54r2Instance* instance);

#endif /* s54r2_H */

