#ifndef s264r2_H
#define s264r2_H

#include "w2c2_base.h"

typedef struct s264r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s264r2Instance;

void f0(s264r2Instance*);

void f1(s264r2Instance*);

U32 f2(s264r2Instance*);

void f3(s264r2Instance*,U32);

U32 f4(s264r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s264r2Instance*,U32,U32,U32,U32,U32);

void f6(s264r2Instance*,U32);

void f7(s264r2Instance*,U32,U32,U32);

void f8(s264r2Instance*,U32,U32,U32);

void s264r2____wasm_call_ctors(s264r2Instance*i);

void s264r2____wasm_apply_data_relocs(s264r2Instance*i);

U32 s264r2_func_1(s264r2Instance*i);

void s264r2_call_cb(s264r2Instance*i,U32 l0);

void s264r2Instantiate(s264r2Instance* instance, void* resolve(const char* module, const char* name));

void s264r2FreeInstance(s264r2Instance* instance);

#endif /* s264r2_H */

