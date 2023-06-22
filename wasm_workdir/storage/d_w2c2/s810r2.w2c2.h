#ifndef s810r2_H
#define s810r2_H

#include "w2c2_base.h"

typedef struct s810r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s810r2Instance;

void f0(s810r2Instance*);

void f1(s810r2Instance*);

U32 f2(s810r2Instance*);

void f3(s810r2Instance*,U32);

U32 f4(s810r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s810r2Instance*,U32,U32,U32,U32,U32);

void f6(s810r2Instance*,U32);

void f7(s810r2Instance*,U32,U32,U32);

void f8(s810r2Instance*,U32,U32,U32);

void s810r2____wasm_call_ctors(s810r2Instance*i);

void s810r2____wasm_apply_data_relocs(s810r2Instance*i);

U32 s810r2_func_1(s810r2Instance*i);

void s810r2_call_cb(s810r2Instance*i,U32 l0);

void s810r2Instantiate(s810r2Instance* instance, void* resolve(const char* module, const char* name));

void s810r2FreeInstance(s810r2Instance* instance);

#endif /* s810r2_H */

