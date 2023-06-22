#ifndef s482r2_H
#define s482r2_H

#include "w2c2_base.h"

typedef struct s482r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s482r2Instance;

void f0(s482r2Instance*);

void f1(s482r2Instance*);

U32 f2(s482r2Instance*);

void f3(s482r2Instance*,U32);

U32 f4(s482r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s482r2Instance*,U32,U32,U32,U32,U32);

void f6(s482r2Instance*,U32);

void f7(s482r2Instance*,U32,U32,U32);

void f8(s482r2Instance*,U32,U32,U32);

void s482r2____wasm_call_ctors(s482r2Instance*i);

void s482r2____wasm_apply_data_relocs(s482r2Instance*i);

U32 s482r2_func_1(s482r2Instance*i);

void s482r2_call_cb(s482r2Instance*i,U32 l0);

void s482r2Instantiate(s482r2Instance* instance, void* resolve(const char* module, const char* name));

void s482r2FreeInstance(s482r2Instance* instance);

#endif /* s482r2_H */

