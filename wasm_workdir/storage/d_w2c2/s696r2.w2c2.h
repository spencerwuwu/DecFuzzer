#ifndef s696r2_H
#define s696r2_H

#include "w2c2_base.h"

typedef struct s696r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s696r2Instance;

void f0(s696r2Instance*);

void f1(s696r2Instance*);

U32 f2(s696r2Instance*);

void f3(s696r2Instance*,U32);

U32 f4(s696r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s696r2Instance*,U32,U32,U32,U32,U32);

void f6(s696r2Instance*,U32);

void f7(s696r2Instance*,U32,U32,U32);

void f8(s696r2Instance*,U32,U32,U32);

void s696r2____wasm_call_ctors(s696r2Instance*i);

void s696r2____wasm_apply_data_relocs(s696r2Instance*i);

U32 s696r2_func_1(s696r2Instance*i);

void s696r2_call_cb(s696r2Instance*i,U32 l0);

void s696r2Instantiate(s696r2Instance* instance, void* resolve(const char* module, const char* name));

void s696r2FreeInstance(s696r2Instance* instance);

#endif /* s696r2_H */

