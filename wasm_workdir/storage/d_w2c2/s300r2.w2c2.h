#ifndef s300r2_H
#define s300r2_H

#include "w2c2_base.h"

typedef struct s300r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s300r2Instance;

void f0(s300r2Instance*);

void f1(s300r2Instance*);

U32 f2(s300r2Instance*);

void f3(s300r2Instance*,U32);

U32 f4(s300r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s300r2Instance*,U32,U32,U32,U32,U32);

void f6(s300r2Instance*,U32);

void f7(s300r2Instance*,U32,U32,U32);

void f8(s300r2Instance*,U32,U32,U32);

void s300r2____wasm_call_ctors(s300r2Instance*i);

void s300r2____wasm_apply_data_relocs(s300r2Instance*i);

U32 s300r2_func_1(s300r2Instance*i);

void s300r2_call_cb(s300r2Instance*i,U32 l0);

void s300r2Instantiate(s300r2Instance* instance, void* resolve(const char* module, const char* name));

void s300r2FreeInstance(s300r2Instance* instance);

#endif /* s300r2_H */

