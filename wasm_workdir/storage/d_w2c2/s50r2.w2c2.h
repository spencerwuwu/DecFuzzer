#ifndef s50r2_H
#define s50r2_H

#include "w2c2_base.h"

typedef struct s50r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s50r2Instance;

void f0(s50r2Instance*);

void f1(s50r2Instance*);

U32 f2(s50r2Instance*);

void f3(s50r2Instance*,U32);

U32 f4(s50r2Instance*,U32,U32,U32,U32,U32);

void f5(s50r2Instance*,U32,U32,U32,U32,U32);

void f6(s50r2Instance*,U32);

void f7(s50r2Instance*,U32,U32,U32);

void f8(s50r2Instance*,U32,U32,U32);

void s50r2____wasm_call_ctors(s50r2Instance*i);

void s50r2____wasm_apply_data_relocs(s50r2Instance*i);

U32 s50r2_func_1(s50r2Instance*i);

void s50r2_call_cb(s50r2Instance*i,U32 l0);

void s50r2Instantiate(s50r2Instance* instance, void* resolve(const char* module, const char* name));

void s50r2FreeInstance(s50r2Instance* instance);

#endif /* s50r2_H */

