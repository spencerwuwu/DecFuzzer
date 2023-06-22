#ifndef s528r2_H
#define s528r2_H

#include "w2c2_base.h"

typedef struct s528r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s528r2Instance;

void f0(s528r2Instance*);

void f1(s528r2Instance*);

U32 f2(s528r2Instance*);

void f3(s528r2Instance*,U32);

U32 f4(s528r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s528r2Instance*,U32,U32,U32,U32,U32);

void f6(s528r2Instance*,U32);

void f7(s528r2Instance*,U32,U32,U32);

void f8(s528r2Instance*,U32,U32,U32);

void s528r2____wasm_call_ctors(s528r2Instance*i);

void s528r2____wasm_apply_data_relocs(s528r2Instance*i);

U32 s528r2_func_1(s528r2Instance*i);

void s528r2_call_cb(s528r2Instance*i,U32 l0);

void s528r2Instantiate(s528r2Instance* instance, void* resolve(const char* module, const char* name));

void s528r2FreeInstance(s528r2Instance* instance);

#endif /* s528r2_H */

