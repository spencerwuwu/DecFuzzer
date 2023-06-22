#ifndef s872r2_H
#define s872r2_H

#include "w2c2_base.h"

typedef struct s872r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s872r2Instance;

void f0(s872r2Instance*);

void f1(s872r2Instance*);

U32 f2(s872r2Instance*);

void f3(s872r2Instance*,U32);

U32 f4(s872r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s872r2Instance*,U32,U32,U32,U32,U32);

void f6(s872r2Instance*,U32);

void f7(s872r2Instance*,U32,U32,U32);

void f8(s872r2Instance*,U32,U32,U32);

void s872r2____wasm_call_ctors(s872r2Instance*i);

void s872r2____wasm_apply_data_relocs(s872r2Instance*i);

U32 s872r2_func_1(s872r2Instance*i);

void s872r2_call_cb(s872r2Instance*i,U32 l0);

void s872r2Instantiate(s872r2Instance* instance, void* resolve(const char* module, const char* name));

void s872r2FreeInstance(s872r2Instance* instance);

#endif /* s872r2_H */

