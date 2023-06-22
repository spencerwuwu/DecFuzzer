#ifndef s168r2_H
#define s168r2_H

#include "w2c2_base.h"

typedef struct s168r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s168r2Instance;

void f0(s168r2Instance*);

void f1(s168r2Instance*);

U32 f2(s168r2Instance*);

void f3(s168r2Instance*,U32);

U32 f4(s168r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s168r2Instance*,U32,U32,U32,U32,U32);

void f6(s168r2Instance*,U32);

void f7(s168r2Instance*,U32,U32,U32);

void f8(s168r2Instance*,U32,U32,U32);

void s168r2____wasm_call_ctors(s168r2Instance*i);

void s168r2____wasm_apply_data_relocs(s168r2Instance*i);

U32 s168r2_func_1(s168r2Instance*i);

void s168r2_call_cb(s168r2Instance*i,U32 l0);

void s168r2Instantiate(s168r2Instance* instance, void* resolve(const char* module, const char* name));

void s168r2FreeInstance(s168r2Instance* instance);

#endif /* s168r2_H */

