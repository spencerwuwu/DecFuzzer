#ifndef s675r2_H
#define s675r2_H

#include "w2c2_base.h"

typedef struct s675r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s675r2Instance;

void f0(s675r2Instance*);

void f1(s675r2Instance*);

U32 f2(s675r2Instance*);

void f3(s675r2Instance*,U32);

U32 f4(s675r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s675r2Instance*,U32,U32,U32,U32,U32);

void f6(s675r2Instance*,U32);

void f7(s675r2Instance*,U32,U32,U32);

void f8(s675r2Instance*,U32,U32,U32);

void s675r2____wasm_call_ctors(s675r2Instance*i);

void s675r2____wasm_apply_data_relocs(s675r2Instance*i);

U32 s675r2_func_1(s675r2Instance*i);

void s675r2_call_cb(s675r2Instance*i,U32 l0);

void s675r2Instantiate(s675r2Instance* instance, void* resolve(const char* module, const char* name));

void s675r2FreeInstance(s675r2Instance* instance);

#endif /* s675r2_H */

