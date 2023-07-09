#ifndef s77r2_H
#define s77r2_H

#include "w2c2_base.h"

typedef struct s77r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s77r2Instance;

void f0(s77r2Instance*);

void f1(s77r2Instance*);

U32 f2(s77r2Instance*);

void f3(s77r2Instance*,U32);

U32 f4(s77r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s77r2Instance*,U32,U32,U32,U32,U32);

void f6(s77r2Instance*,U32);

void f7(s77r2Instance*,U32,U32,U32);

void f8(s77r2Instance*,U32,U32,U32);

void s77r2____wasm_call_ctors(s77r2Instance*i);

void s77r2____wasm_apply_data_relocs(s77r2Instance*i);

U32 s77r2_func_1(s77r2Instance*i);

void s77r2_call_cb(s77r2Instance*i,U32 l0);

void s77r2Instantiate(s77r2Instance* instance, void* resolve(const char* module, const char* name));

void s77r2FreeInstance(s77r2Instance* instance);

#endif /* s77r2_H */
