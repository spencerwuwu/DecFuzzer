#ifndef s128r2_H
#define s128r2_H

#include "w2c2_base.h"

typedef struct s128r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s128r2Instance;

void f0(s128r2Instance*);

void f1(s128r2Instance*);

U32 f2(s128r2Instance*);

void f3(s128r2Instance*,U32);

U32 f4(s128r2Instance*,U32,U32,U32,U32,U32);

void f5(s128r2Instance*,U32,U32,U32,U32,U32);

void f6(s128r2Instance*,U32);

void f7(s128r2Instance*,U32,U32,U32);

void f8(s128r2Instance*,U32,U32,U32);

void s128r2____wasm_call_ctors(s128r2Instance*i);

void s128r2____wasm_apply_data_relocs(s128r2Instance*i);

U32 s128r2_func_1(s128r2Instance*i);

void s128r2_call_cb(s128r2Instance*i,U32 l0);

void s128r2Instantiate(s128r2Instance* instance, void* resolve(const char* module, const char* name));

void s128r2FreeInstance(s128r2Instance* instance);

#endif /* s128r2_H */

