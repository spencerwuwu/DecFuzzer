#ifndef s626r2_H
#define s626r2_H

#include "w2c2_base.h"

typedef struct s626r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s626r2Instance;

void f0(s626r2Instance*);

void f1(s626r2Instance*);

U32 f2(s626r2Instance*);

void f3(s626r2Instance*,U32);

U32 f4(s626r2Instance*,U32,U32,U32);

void f5(s626r2Instance*,U32,U32,U32,U32,U32);

void f6(s626r2Instance*,U32);

void f7(s626r2Instance*,U32,U32,U32);

void f8(s626r2Instance*,U32,U32,U32);

void s626r2____wasm_call_ctors(s626r2Instance*i);

void s626r2____wasm_apply_data_relocs(s626r2Instance*i);

U32 s626r2_func_1(s626r2Instance*i);

void s626r2_call_cb(s626r2Instance*i,U32 l0);

void s626r2Instantiate(s626r2Instance* instance, void* resolve(const char* module, const char* name));

void s626r2FreeInstance(s626r2Instance* instance);

#endif /* s626r2_H */

