#ifndef s99retdec_H
#define s99retdec_H

#include "w2c2_base.h"

typedef struct s99retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s99retdecInstance;

void f0(s99retdecInstance*);

void f1(s99retdecInstance*);

U32 f2(s99retdecInstance*);

void f3(s99retdecInstance*,U32);

U32 f4(s99retdecInstance*,U32,U32,U32,U32);

void f5(s99retdecInstance*,U32,U32,U32,U32,U32);

void f6(s99retdecInstance*,U32);

void f7(s99retdecInstance*,U32,U32,U32);

void f8(s99retdecInstance*,U32,U32,U32);

void s99retdec____wasm_call_ctors(s99retdecInstance*i);

void s99retdec____wasm_apply_data_relocs(s99retdecInstance*i);

U32 s99retdec_func_1(s99retdecInstance*i);

void s99retdec_call_cb(s99retdecInstance*i,U32 l0);

void s99retdecInstantiate(s99retdecInstance* instance, void* resolve(const char* module, const char* name));

void s99retdecFreeInstance(s99retdecInstance* instance);

#endif /* s99retdec_H */

