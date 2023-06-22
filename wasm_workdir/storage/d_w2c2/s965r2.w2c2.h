#ifndef s965r2_H
#define s965r2_H

#include "w2c2_base.h"

typedef struct s965r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s965r2Instance;

void f0(s965r2Instance*);

void f1(s965r2Instance*);

U32 f2(s965r2Instance*);

void f3(s965r2Instance*,U32);

U32 f4(s965r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s965r2Instance*,U32,U32,U32,U32,U32);

void f6(s965r2Instance*,U32);

void f7(s965r2Instance*,U32,U32,U32);

void f8(s965r2Instance*,U32,U32,U32);

void s965r2____wasm_call_ctors(s965r2Instance*i);

void s965r2____wasm_apply_data_relocs(s965r2Instance*i);

U32 s965r2_func_1(s965r2Instance*i);

void s965r2_call_cb(s965r2Instance*i,U32 l0);

void s965r2Instantiate(s965r2Instance* instance, void* resolve(const char* module, const char* name));

void s965r2FreeInstance(s965r2Instance* instance);

#endif /* s965r2_H */

