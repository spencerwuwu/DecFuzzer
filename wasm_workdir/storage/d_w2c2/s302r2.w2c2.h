#ifndef s302r2_H
#define s302r2_H

#include "w2c2_base.h"

typedef struct s302r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s302r2Instance;

void f0(s302r2Instance*);

void f1(s302r2Instance*);

U32 f2(s302r2Instance*);

void f3(s302r2Instance*,U32);

U32 f4(s302r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s302r2Instance*,U32,U32,U32,U32,U32);

void f6(s302r2Instance*,U32);

void f7(s302r2Instance*,U32,U32,U32);

void f8(s302r2Instance*,U32,U32,U32);

void s302r2____wasm_call_ctors(s302r2Instance*i);

void s302r2____wasm_apply_data_relocs(s302r2Instance*i);

U32 s302r2_func_1(s302r2Instance*i);

void s302r2_call_cb(s302r2Instance*i,U32 l0);

void s302r2Instantiate(s302r2Instance* instance, void* resolve(const char* module, const char* name));

void s302r2FreeInstance(s302r2Instance* instance);

#endif /* s302r2_H */

