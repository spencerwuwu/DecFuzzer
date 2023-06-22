#ifndef s489r2_H
#define s489r2_H

#include "w2c2_base.h"

typedef struct s489r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s489r2Instance;

void f0(s489r2Instance*);

void f1(s489r2Instance*);

U32 f2(s489r2Instance*);

void f3(s489r2Instance*,U32);

U32 f4(s489r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s489r2Instance*,U32,U32,U32,U32,U32);

void f6(s489r2Instance*,U32);

void f7(s489r2Instance*,U32,U32,U32);

void f8(s489r2Instance*,U32,U32,U32);

void s489r2____wasm_call_ctors(s489r2Instance*i);

void s489r2____wasm_apply_data_relocs(s489r2Instance*i);

U32 s489r2_func_1(s489r2Instance*i);

void s489r2_call_cb(s489r2Instance*i,U32 l0);

void s489r2Instantiate(s489r2Instance* instance, void* resolve(const char* module, const char* name));

void s489r2FreeInstance(s489r2Instance* instance);

#endif /* s489r2_H */

