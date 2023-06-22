#ifndef s871r2_H
#define s871r2_H

#include "w2c2_base.h"

typedef struct s871r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s871r2Instance;

void f0(s871r2Instance*);

void f1(s871r2Instance*);

U32 f2(s871r2Instance*);

void f3(s871r2Instance*,U32);

U32 f4(s871r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s871r2Instance*,U32,U32,U32,U32,U32);

void f6(s871r2Instance*,U32);

void f7(s871r2Instance*,U32,U32,U32);

void f8(s871r2Instance*,U32,U32,U32);

void s871r2____wasm_call_ctors(s871r2Instance*i);

void s871r2____wasm_apply_data_relocs(s871r2Instance*i);

U32 s871r2_func_1(s871r2Instance*i);

void s871r2_call_cb(s871r2Instance*i,U32 l0);

void s871r2Instantiate(s871r2Instance* instance, void* resolve(const char* module, const char* name));

void s871r2FreeInstance(s871r2Instance* instance);

#endif /* s871r2_H */

