#ifndef s879r2_H
#define s879r2_H

#include "w2c2_base.h"

typedef struct s879r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s879r2Instance;

void f0(s879r2Instance*);

void f1(s879r2Instance*);

U32 f2(s879r2Instance*);

void f3(s879r2Instance*,U32);

U32 f4(s879r2Instance*,U32,U32,U32,U32);

void f5(s879r2Instance*,U32,U32,U32,U32,U32);

void f6(s879r2Instance*,U32);

void f7(s879r2Instance*,U32,U32,U32);

void f8(s879r2Instance*,U32,U32,U32);

void s879r2____wasm_call_ctors(s879r2Instance*i);

void s879r2____wasm_apply_data_relocs(s879r2Instance*i);

U32 s879r2_func_1(s879r2Instance*i);

void s879r2_call_cb(s879r2Instance*i,U32 l0);

void s879r2Instantiate(s879r2Instance* instance, void* resolve(const char* module, const char* name));

void s879r2FreeInstance(s879r2Instance* instance);

#endif /* s879r2_H */

