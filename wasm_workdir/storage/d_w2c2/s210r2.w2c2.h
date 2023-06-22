#ifndef s210r2_H
#define s210r2_H

#include "w2c2_base.h"

typedef struct s210r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s210r2Instance;

void f0(s210r2Instance*);

void f1(s210r2Instance*);

U32 f2(s210r2Instance*);

void f3(s210r2Instance*,U32);

U32 f4(s210r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s210r2Instance*,U32,U32,U32,U32,U32);

void f6(s210r2Instance*,U32);

void f7(s210r2Instance*,U32,U32,U32);

void f8(s210r2Instance*,U32,U32,U32);

void s210r2____wasm_call_ctors(s210r2Instance*i);

void s210r2____wasm_apply_data_relocs(s210r2Instance*i);

U32 s210r2_func_1(s210r2Instance*i);

void s210r2_call_cb(s210r2Instance*i,U32 l0);

void s210r2Instantiate(s210r2Instance* instance, void* resolve(const char* module, const char* name));

void s210r2FreeInstance(s210r2Instance* instance);

#endif /* s210r2_H */

