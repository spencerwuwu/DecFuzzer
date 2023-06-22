#ifndef s590retdec_H
#define s590retdec_H

#include "w2c2_base.h"

typedef struct s590retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s590retdecInstance;

void f0(s590retdecInstance*);

void f1(s590retdecInstance*);

U32 f2(s590retdecInstance*);

void f3(s590retdecInstance*,U32);

U32 f4(s590retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s590retdecInstance*,U32,U32,U32,U32,U32);

void f6(s590retdecInstance*,U32);

void f7(s590retdecInstance*,U32,U32,U32);

void f8(s590retdecInstance*,U32,U32,U32);

void s590retdec____wasm_call_ctors(s590retdecInstance*i);

void s590retdec____wasm_apply_data_relocs(s590retdecInstance*i);

U32 s590retdec_func_1(s590retdecInstance*i);

void s590retdec_call_cb(s590retdecInstance*i,U32 l0);

void s590retdecInstantiate(s590retdecInstance* instance, void* resolve(const char* module, const char* name));

void s590retdecFreeInstance(s590retdecInstance* instance);

#endif /* s590retdec_H */

