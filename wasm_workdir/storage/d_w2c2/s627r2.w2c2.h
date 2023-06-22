#ifndef s627r2_H
#define s627r2_H

#include "w2c2_base.h"

typedef struct s627r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s627r2Instance;

void f0(s627r2Instance*);

void f1(s627r2Instance*);

U32 f2(s627r2Instance*);

void f3(s627r2Instance*,U32);

U32 f4(s627r2Instance*,U32,U32,U32,U32);

void f5(s627r2Instance*,U32,U32,U32,U32,U32);

void f6(s627r2Instance*,U32);

void f7(s627r2Instance*,U32,U32,U32);

void f8(s627r2Instance*,U32,U32,U32);

void s627r2____wasm_call_ctors(s627r2Instance*i);

void s627r2____wasm_apply_data_relocs(s627r2Instance*i);

U32 s627r2_func_1(s627r2Instance*i);

void s627r2_call_cb(s627r2Instance*i,U32 l0);

void s627r2Instantiate(s627r2Instance* instance, void* resolve(const char* module, const char* name));

void s627r2FreeInstance(s627r2Instance* instance);

#endif /* s627r2_H */

