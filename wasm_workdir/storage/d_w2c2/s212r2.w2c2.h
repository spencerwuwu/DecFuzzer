#ifndef s212r2_H
#define s212r2_H

#include "w2c2_base.h"

typedef struct s212r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s212r2Instance;

void f0(s212r2Instance*);

void f1(s212r2Instance*);

U32 f2(s212r2Instance*);

void f3(s212r2Instance*,U32);

U32 f4(s212r2Instance*,U32,U32,U32);

void f5(s212r2Instance*,U32,U32,U32,U32,U32);

void f6(s212r2Instance*,U32);

void f7(s212r2Instance*,U32,U32,U32);

void f8(s212r2Instance*,U32,U32,U32);

void s212r2____wasm_call_ctors(s212r2Instance*i);

void s212r2____wasm_apply_data_relocs(s212r2Instance*i);

U32 s212r2_func_1(s212r2Instance*i);

void s212r2_call_cb(s212r2Instance*i,U32 l0);

void s212r2Instantiate(s212r2Instance* instance, void* resolve(const char* module, const char* name));

void s212r2FreeInstance(s212r2Instance* instance);

#endif /* s212r2_H */

