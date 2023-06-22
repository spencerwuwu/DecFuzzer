#ifndef s63r2_H
#define s63r2_H

#include "w2c2_base.h"

typedef struct s63r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s63r2Instance;

void f0(s63r2Instance*);

void f1(s63r2Instance*);

U32 f2(s63r2Instance*);

void f3(s63r2Instance*,U32);

U32 f4(s63r2Instance*,U32,U32,U32);

void f5(s63r2Instance*,U32,U32,U32,U32,U32);

void f6(s63r2Instance*,U32);

void f7(s63r2Instance*,U32,U32,U32);

void f8(s63r2Instance*,U32,U32,U32);

void s63r2____wasm_call_ctors(s63r2Instance*i);

void s63r2____wasm_apply_data_relocs(s63r2Instance*i);

U32 s63r2_func_1(s63r2Instance*i);

void s63r2_call_cb(s63r2Instance*i,U32 l0);

void s63r2Instantiate(s63r2Instance* instance, void* resolve(const char* module, const char* name));

void s63r2FreeInstance(s63r2Instance* instance);

#endif /* s63r2_H */

