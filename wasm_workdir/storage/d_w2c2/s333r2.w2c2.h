#ifndef s333r2_H
#define s333r2_H

#include "w2c2_base.h"

typedef struct s333r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s333r2Instance;

void f0(s333r2Instance*);

void f1(s333r2Instance*);

U32 f2(s333r2Instance*);

void f3(s333r2Instance*,U32);

U32 f4(s333r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s333r2Instance*,U32,U32,U32,U32,U32);

void f6(s333r2Instance*,U32);

void f7(s333r2Instance*,U32,U32,U32);

void f8(s333r2Instance*,U32,U32,U32);

void s333r2____wasm_call_ctors(s333r2Instance*i);

void s333r2____wasm_apply_data_relocs(s333r2Instance*i);

U32 s333r2_func_1(s333r2Instance*i);

void s333r2_call_cb(s333r2Instance*i,U32 l0);

void s333r2Instantiate(s333r2Instance* instance, void* resolve(const char* module, const char* name));

void s333r2FreeInstance(s333r2Instance* instance);

#endif /* s333r2_H */

