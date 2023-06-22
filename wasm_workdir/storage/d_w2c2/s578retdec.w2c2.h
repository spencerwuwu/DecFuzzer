#ifndef s578retdec_H
#define s578retdec_H

#include "w2c2_base.h"

typedef struct s578retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s578retdecInstance;

void f0(s578retdecInstance*);

void f1(s578retdecInstance*);

U32 f2(s578retdecInstance*);

void f3(s578retdecInstance*,U32);

U32 f4(s578retdecInstance*,U32,U32,U32,U32,U32);

void f5(s578retdecInstance*,U32,U32,U32,U32,U32);

void f6(s578retdecInstance*,U32);

void f7(s578retdecInstance*,U32,U32,U32);

void f8(s578retdecInstance*,U32,U32,U32);

void s578retdec____wasm_call_ctors(s578retdecInstance*i);

void s578retdec____wasm_apply_data_relocs(s578retdecInstance*i);

U32 s578retdec_func_1(s578retdecInstance*i);

void s578retdec_call_cb(s578retdecInstance*i,U32 l0);

void s578retdecInstantiate(s578retdecInstance* instance, void* resolve(const char* module, const char* name));

void s578retdecFreeInstance(s578retdecInstance* instance);

#endif /* s578retdec_H */

