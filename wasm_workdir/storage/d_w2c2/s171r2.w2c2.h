#ifndef s171r2_H
#define s171r2_H

#include "w2c2_base.h"

typedef struct s171r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s171r2Instance;

void f0(s171r2Instance*);

void f1(s171r2Instance*);

U32 f2(s171r2Instance*);

void f3(s171r2Instance*,U32);

U32 f4(s171r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s171r2Instance*,U32,U32,U32,U32,U32);

void f6(s171r2Instance*,U32);

void f7(s171r2Instance*,U32,U32,U32);

void f8(s171r2Instance*,U32,U32,U32);

void s171r2____wasm_call_ctors(s171r2Instance*i);

void s171r2____wasm_apply_data_relocs(s171r2Instance*i);

U32 s171r2_func_1(s171r2Instance*i);

void s171r2_call_cb(s171r2Instance*i,U32 l0);

void s171r2Instantiate(s171r2Instance* instance, void* resolve(const char* module, const char* name));

void s171r2FreeInstance(s171r2Instance* instance);

#endif /* s171r2_H */

