#ifndef s581r2_H
#define s581r2_H

#include "w2c2_base.h"

typedef struct s581r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s581r2Instance;

void f0(s581r2Instance*);

void f1(s581r2Instance*);

U32 f2(s581r2Instance*);

void f3(s581r2Instance*,U32);

U32 f4(s581r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s581r2Instance*,U32,U32,U32,U32,U32);

void f6(s581r2Instance*,U32);

void f7(s581r2Instance*,U32,U32,U32);

void f8(s581r2Instance*,U32,U32,U32);

void s581r2____wasm_call_ctors(s581r2Instance*i);

void s581r2____wasm_apply_data_relocs(s581r2Instance*i);

U32 s581r2_func_1(s581r2Instance*i);

void s581r2_call_cb(s581r2Instance*i,U32 l0);

void s581r2Instantiate(s581r2Instance* instance, void* resolve(const char* module, const char* name));

void s581r2FreeInstance(s581r2Instance* instance);

#endif /* s581r2_H */

