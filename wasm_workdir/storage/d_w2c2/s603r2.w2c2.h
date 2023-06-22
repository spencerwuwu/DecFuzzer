#ifndef s603r2_H
#define s603r2_H

#include "w2c2_base.h"

typedef struct s603r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s603r2Instance;

void f0(s603r2Instance*);

void f1(s603r2Instance*);

U32 f2(s603r2Instance*);

void f3(s603r2Instance*,U32);

U32 f4(s603r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s603r2Instance*,U32,U32,U32,U32,U32);

void f6(s603r2Instance*,U32);

void f7(s603r2Instance*,U32,U32,U32);

void f8(s603r2Instance*,U32,U32,U32);

void s603r2____wasm_call_ctors(s603r2Instance*i);

void s603r2____wasm_apply_data_relocs(s603r2Instance*i);

U32 s603r2_func_1(s603r2Instance*i);

void s603r2_call_cb(s603r2Instance*i,U32 l0);

void s603r2Instantiate(s603r2Instance* instance, void* resolve(const char* module, const char* name));

void s603r2FreeInstance(s603r2Instance* instance);

#endif /* s603r2_H */

