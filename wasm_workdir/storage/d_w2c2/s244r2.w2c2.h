#ifndef s244r2_H
#define s244r2_H

#include "w2c2_base.h"

typedef struct s244r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s244r2Instance;

void f0(s244r2Instance*);

void f1(s244r2Instance*);

U32 f2(s244r2Instance*);

void f3(s244r2Instance*,U32);

U32 f4(s244r2Instance*,U32,U32,U32,U32,U32);

void f5(s244r2Instance*,U32,U32,U32,U32,U32);

void f6(s244r2Instance*,U32);

void f7(s244r2Instance*,U32,U32,U32);

void f8(s244r2Instance*,U32,U32,U32);

void s244r2____wasm_call_ctors(s244r2Instance*i);

void s244r2____wasm_apply_data_relocs(s244r2Instance*i);

U32 s244r2_func_1(s244r2Instance*i);

void s244r2_call_cb(s244r2Instance*i,U32 l0);

void s244r2Instantiate(s244r2Instance* instance, void* resolve(const char* module, const char* name));

void s244r2FreeInstance(s244r2Instance* instance);

#endif /* s244r2_H */

