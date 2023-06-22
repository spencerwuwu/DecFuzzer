#ifndef s810retdec_H
#define s810retdec_H

#include "w2c2_base.h"

typedef struct s810retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s810retdecInstance;

void f0(s810retdecInstance*);

void f1(s810retdecInstance*);

U32 f2(s810retdecInstance*);

void f3(s810retdecInstance*,U32);

U32 f4(s810retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s810retdecInstance*,U32,U32,U32,U32,U32);

void f6(s810retdecInstance*,U32);

void f7(s810retdecInstance*,U32,U32,U32);

void f8(s810retdecInstance*,U32,U32,U32);

void s810retdec____wasm_call_ctors(s810retdecInstance*i);

void s810retdec____wasm_apply_data_relocs(s810retdecInstance*i);

U32 s810retdec_func_1(s810retdecInstance*i);

void s810retdec_call_cb(s810retdecInstance*i,U32 l0);

void s810retdecInstantiate(s810retdecInstance* instance, void* resolve(const char* module, const char* name));

void s810retdecFreeInstance(s810retdecInstance* instance);

#endif /* s810retdec_H */

