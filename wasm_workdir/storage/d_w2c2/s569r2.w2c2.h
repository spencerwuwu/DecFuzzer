#ifndef s569r2_H
#define s569r2_H

#include "w2c2_base.h"

typedef struct s569r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s569r2Instance;

void f0(s569r2Instance*);

void f1(s569r2Instance*);

U32 f2(s569r2Instance*);

void f3(s569r2Instance*,U32);

U32 f4(s569r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s569r2Instance*,U32,U32,U32,U32,U32);

void f6(s569r2Instance*,U32);

void f7(s569r2Instance*,U32,U32,U32);

void f8(s569r2Instance*,U32,U32,U32);

void s569r2____wasm_call_ctors(s569r2Instance*i);

void s569r2____wasm_apply_data_relocs(s569r2Instance*i);

U32 s569r2_func_1(s569r2Instance*i);

void s569r2_call_cb(s569r2Instance*i,U32 l0);

void s569r2Instantiate(s569r2Instance* instance, void* resolve(const char* module, const char* name));

void s569r2FreeInstance(s569r2Instance* instance);

#endif /* s569r2_H */

