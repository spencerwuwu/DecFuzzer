#ifndef s878r2_H
#define s878r2_H

#include "w2c2_base.h"

typedef struct s878r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s878r2Instance;

void f0(s878r2Instance*);

void f1(s878r2Instance*);

U32 f2(s878r2Instance*);

void f3(s878r2Instance*,U32);

U32 f4(s878r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s878r2Instance*,U32,U32,U32,U32,U32);

void f6(s878r2Instance*,U32);

void f7(s878r2Instance*,U32,U32,U32);

void f8(s878r2Instance*,U32,U32,U32);

void s878r2____wasm_call_ctors(s878r2Instance*i);

void s878r2____wasm_apply_data_relocs(s878r2Instance*i);

U32 s878r2_func_1(s878r2Instance*i);

void s878r2_call_cb(s878r2Instance*i,U32 l0);

void s878r2Instantiate(s878r2Instance* instance, void* resolve(const char* module, const char* name));

void s878r2FreeInstance(s878r2Instance* instance);

#endif /* s878r2_H */

