#ifndef s546r2_H
#define s546r2_H

#include "w2c2_base.h"

typedef struct s546r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s546r2Instance;

void f0(s546r2Instance*);

void f1(s546r2Instance*);

U32 f2(s546r2Instance*);

void f3(s546r2Instance*,U32);

U32 f4(s546r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s546r2Instance*,U32,U32,U32,U32,U32);

void f6(s546r2Instance*,U32);

void f7(s546r2Instance*,U32,U32,U32);

void f8(s546r2Instance*,U32,U32,U32);

void s546r2____wasm_call_ctors(s546r2Instance*i);

void s546r2____wasm_apply_data_relocs(s546r2Instance*i);

U32 s546r2_func_1(s546r2Instance*i);

void s546r2_call_cb(s546r2Instance*i,U32 l0);

void s546r2Instantiate(s546r2Instance* instance, void* resolve(const char* module, const char* name));

void s546r2FreeInstance(s546r2Instance* instance);

#endif /* s546r2_H */

