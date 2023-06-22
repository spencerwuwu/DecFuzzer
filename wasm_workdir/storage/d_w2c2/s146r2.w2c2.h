#ifndef s146r2_H
#define s146r2_H

#include "w2c2_base.h"

typedef struct s146r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s146r2Instance;

void f0(s146r2Instance*);

void f1(s146r2Instance*);

U32 f2(s146r2Instance*);

void f3(s146r2Instance*,U32);

U32 f4(s146r2Instance*,U32,U32,U32,U32);

void f5(s146r2Instance*,U32,U32,U32,U32,U32);

void f6(s146r2Instance*,U32);

void f7(s146r2Instance*,U32,U32,U32);

void f8(s146r2Instance*,U32,U32,U32);

void s146r2____wasm_call_ctors(s146r2Instance*i);

void s146r2____wasm_apply_data_relocs(s146r2Instance*i);

U32 s146r2_func_1(s146r2Instance*i);

void s146r2_call_cb(s146r2Instance*i,U32 l0);

void s146r2Instantiate(s146r2Instance* instance, void* resolve(const char* module, const char* name));

void s146r2FreeInstance(s146r2Instance* instance);

#endif /* s146r2_H */

