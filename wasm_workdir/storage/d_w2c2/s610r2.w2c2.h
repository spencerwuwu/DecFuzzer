#ifndef s610r2_H
#define s610r2_H

#include "w2c2_base.h"

typedef struct s610r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s610r2Instance;

void f0(s610r2Instance*);

void f1(s610r2Instance*);

U32 f2(s610r2Instance*);

void f3(s610r2Instance*,U32);

U32 f4(s610r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s610r2Instance*,U32,U32,U32,U32,U32);

void f6(s610r2Instance*,U32);

void f7(s610r2Instance*,U32,U32,U32);

void f8(s610r2Instance*,U32,U32,U32);

void s610r2____wasm_call_ctors(s610r2Instance*i);

void s610r2____wasm_apply_data_relocs(s610r2Instance*i);

U32 s610r2_func_1(s610r2Instance*i);

void s610r2_call_cb(s610r2Instance*i,U32 l0);

void s610r2Instantiate(s610r2Instance* instance, void* resolve(const char* module, const char* name));

void s610r2FreeInstance(s610r2Instance* instance);

#endif /* s610r2_H */

