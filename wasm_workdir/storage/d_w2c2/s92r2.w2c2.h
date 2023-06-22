#ifndef s92r2_H
#define s92r2_H

#include "w2c2_base.h"

typedef struct s92r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s92r2Instance;

void f0(s92r2Instance*);

void f1(s92r2Instance*);

U32 f2(s92r2Instance*);

void f3(s92r2Instance*,U32);

U32 f4(s92r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s92r2Instance*,U32,U32,U32,U32,U32);

void f6(s92r2Instance*,U32);

void f7(s92r2Instance*,U32,U32,U32);

void f8(s92r2Instance*,U32,U32,U32);

void s92r2____wasm_call_ctors(s92r2Instance*i);

void s92r2____wasm_apply_data_relocs(s92r2Instance*i);

U32 s92r2_func_1(s92r2Instance*i);

void s92r2_call_cb(s92r2Instance*i,U32 l0);

void s92r2Instantiate(s92r2Instance* instance, void* resolve(const char* module, const char* name));

void s92r2FreeInstance(s92r2Instance* instance);

#endif /* s92r2_H */

