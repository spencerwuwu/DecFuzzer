#ifndef s316retdec_H
#define s316retdec_H

#include "w2c2_base.h"

typedef struct s316retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s316retdecInstance;

void f0(s316retdecInstance*);

void f1(s316retdecInstance*);

U32 f2(s316retdecInstance*);

void f3(s316retdecInstance*,U32);

U32 f4(s316retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s316retdecInstance*,U32,U32,U32,U32,U32);

void f6(s316retdecInstance*,U32);

void f7(s316retdecInstance*,U32,U32,U32);

void f8(s316retdecInstance*,U32,U32,U32);

void s316retdec____wasm_call_ctors(s316retdecInstance*i);

void s316retdec____wasm_apply_data_relocs(s316retdecInstance*i);

U32 s316retdec_func_1(s316retdecInstance*i);

void s316retdec_call_cb(s316retdecInstance*i,U32 l0);

void s316retdecInstantiate(s316retdecInstance* instance, void* resolve(const char* module, const char* name));

void s316retdecFreeInstance(s316retdecInstance* instance);

#endif /* s316retdec_H */

