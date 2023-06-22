#ifndef s875r2_H
#define s875r2_H

#include "w2c2_base.h"

typedef struct s875r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s875r2Instance;

void f0(s875r2Instance*);

void f1(s875r2Instance*);

U32 f2(s875r2Instance*);

void f3(s875r2Instance*,U32);

U32 f4(s875r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s875r2Instance*,U32,U32,U32,U32,U32);

void f6(s875r2Instance*,U32);

void f7(s875r2Instance*,U32,U32,U32);

void f8(s875r2Instance*,U32,U32,U32);

void s875r2____wasm_call_ctors(s875r2Instance*i);

void s875r2____wasm_apply_data_relocs(s875r2Instance*i);

U32 s875r2_func_1(s875r2Instance*i);

void s875r2_call_cb(s875r2Instance*i,U32 l0);

void s875r2Instantiate(s875r2Instance* instance, void* resolve(const char* module, const char* name));

void s875r2FreeInstance(s875r2Instance* instance);

#endif /* s875r2_H */

