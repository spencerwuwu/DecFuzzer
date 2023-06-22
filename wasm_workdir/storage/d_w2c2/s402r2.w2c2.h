#ifndef s402r2_H
#define s402r2_H

#include "w2c2_base.h"

typedef struct s402r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s402r2Instance;

void f0(s402r2Instance*);

void f1(s402r2Instance*);

U32 f2(s402r2Instance*);

void f3(s402r2Instance*,U32);

U32 f4(s402r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s402r2Instance*,U32,U32,U32,U32,U32);

void f6(s402r2Instance*,U32);

void f7(s402r2Instance*,U32,U32,U32);

void f8(s402r2Instance*,U32,U32,U32);

void s402r2____wasm_call_ctors(s402r2Instance*i);

void s402r2____wasm_apply_data_relocs(s402r2Instance*i);

U32 s402r2_func_1(s402r2Instance*i);

void s402r2_call_cb(s402r2Instance*i,U32 l0);

void s402r2Instantiate(s402r2Instance* instance, void* resolve(const char* module, const char* name));

void s402r2FreeInstance(s402r2Instance* instance);

#endif /* s402r2_H */

