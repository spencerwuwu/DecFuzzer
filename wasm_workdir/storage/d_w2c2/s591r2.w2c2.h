#ifndef s591r2_H
#define s591r2_H

#include "w2c2_base.h"

typedef struct s591r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s591r2Instance;

void f0(s591r2Instance*);

void f1(s591r2Instance*);

U32 f2(s591r2Instance*);

void f3(s591r2Instance*,U32);

U32 f4(s591r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s591r2Instance*,U32,U32,U32,U32,U32);

void f6(s591r2Instance*,U32);

void f7(s591r2Instance*,U32,U32,U32);

void f8(s591r2Instance*,U32,U32,U32);

void s591r2____wasm_call_ctors(s591r2Instance*i);

void s591r2____wasm_apply_data_relocs(s591r2Instance*i);

U32 s591r2_func_1(s591r2Instance*i);

void s591r2_call_cb(s591r2Instance*i,U32 l0);

void s591r2Instantiate(s591r2Instance* instance, void* resolve(const char* module, const char* name));

void s591r2FreeInstance(s591r2Instance* instance);

#endif /* s591r2_H */

