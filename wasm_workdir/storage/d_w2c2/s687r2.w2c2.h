#ifndef s687r2_H
#define s687r2_H

#include "w2c2_base.h"

typedef struct s687r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s687r2Instance;

void f0(s687r2Instance*);

void f1(s687r2Instance*);

U32 f2(s687r2Instance*);

void f3(s687r2Instance*,U32);

U32 f4(s687r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s687r2Instance*,U32,U32,U32,U32,U32);

void f6(s687r2Instance*,U32);

void f7(s687r2Instance*,U32,U32,U32);

void f8(s687r2Instance*,U32,U32,U32);

void s687r2____wasm_call_ctors(s687r2Instance*i);

void s687r2____wasm_apply_data_relocs(s687r2Instance*i);

U32 s687r2_func_1(s687r2Instance*i);

void s687r2_call_cb(s687r2Instance*i,U32 l0);

void s687r2Instantiate(s687r2Instance* instance, void* resolve(const char* module, const char* name));

void s687r2FreeInstance(s687r2Instance* instance);

#endif /* s687r2_H */

