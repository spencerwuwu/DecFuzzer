#ifndef s534retdec_H
#define s534retdec_H

#include "w2c2_base.h"

typedef struct s534retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s534retdecInstance;

void f0(s534retdecInstance*);

void f1(s534retdecInstance*);

U32 f2(s534retdecInstance*);

void f3(s534retdecInstance*,U32);

U32 f4(s534retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s534retdecInstance*,U32,U32,U32,U32,U32);

void f6(s534retdecInstance*,U32);

void f7(s534retdecInstance*,U32,U32,U32);

void f8(s534retdecInstance*,U32,U32,U32);

void s534retdec____wasm_call_ctors(s534retdecInstance*i);

void s534retdec____wasm_apply_data_relocs(s534retdecInstance*i);

U32 s534retdec_func_1(s534retdecInstance*i);

void s534retdec_call_cb(s534retdecInstance*i,U32 l0);

void s534retdecInstantiate(s534retdecInstance* instance, void* resolve(const char* module, const char* name));

void s534retdecFreeInstance(s534retdecInstance* instance);

#endif /* s534retdec_H */

