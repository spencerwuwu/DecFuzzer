#ifndef s172r2_H
#define s172r2_H

#include "w2c2_base.h"

typedef struct s172r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s172r2Instance;

void f0(s172r2Instance*);

void f1(s172r2Instance*);

U32 f2(s172r2Instance*);

void f3(s172r2Instance*,U32);

U32 f4(s172r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s172r2Instance*,U32,U32,U32,U32,U32);

void f6(s172r2Instance*,U32);

void f7(s172r2Instance*,U32,U32,U32);

void f8(s172r2Instance*,U32,U32,U32);

void s172r2____wasm_call_ctors(s172r2Instance*i);

void s172r2____wasm_apply_data_relocs(s172r2Instance*i);

U32 s172r2_func_1(s172r2Instance*i);

void s172r2_call_cb(s172r2Instance*i,U32 l0);

void s172r2Instantiate(s172r2Instance* instance, void* resolve(const char* module, const char* name));

void s172r2FreeInstance(s172r2Instance* instance);

#endif /* s172r2_H */

