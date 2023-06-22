#ifndef s151r2_H
#define s151r2_H

#include "w2c2_base.h"

typedef struct s151r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s151r2Instance;

void f0(s151r2Instance*);

void f1(s151r2Instance*);

U32 f2(s151r2Instance*);

void f3(s151r2Instance*,U32);

U32 f4(s151r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s151r2Instance*,U32,U32,U32,U32,U32);

void f6(s151r2Instance*,U32);

void f7(s151r2Instance*,U32,U32,U32);

void f8(s151r2Instance*,U32,U32,U32);

void s151r2____wasm_call_ctors(s151r2Instance*i);

void s151r2____wasm_apply_data_relocs(s151r2Instance*i);

U32 s151r2_func_1(s151r2Instance*i);

void s151r2_call_cb(s151r2Instance*i,U32 l0);

void s151r2Instantiate(s151r2Instance* instance, void* resolve(const char* module, const char* name));

void s151r2FreeInstance(s151r2Instance* instance);

#endif /* s151r2_H */

