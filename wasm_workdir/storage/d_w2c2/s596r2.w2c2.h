#ifndef s596r2_H
#define s596r2_H

#include "w2c2_base.h"

typedef struct s596r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s596r2Instance;

void f0(s596r2Instance*);

void f1(s596r2Instance*);

U32 f2(s596r2Instance*);

void f3(s596r2Instance*,U32);

U32 f4(s596r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s596r2Instance*,U32,U32,U32,U32,U32);

void f6(s596r2Instance*,U32);

void f7(s596r2Instance*,U32,U32,U32);

void f8(s596r2Instance*,U32,U32,U32);

void s596r2____wasm_call_ctors(s596r2Instance*i);

void s596r2____wasm_apply_data_relocs(s596r2Instance*i);

U32 s596r2_func_1(s596r2Instance*i);

void s596r2_call_cb(s596r2Instance*i,U32 l0);

void s596r2Instantiate(s596r2Instance* instance, void* resolve(const char* module, const char* name));

void s596r2FreeInstance(s596r2Instance* instance);

#endif /* s596r2_H */

