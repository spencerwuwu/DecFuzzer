#ifndef s562retdec_H
#define s562retdec_H

#include "w2c2_base.h"

typedef struct s562retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s562retdecInstance;

void f0(s562retdecInstance*);

void f1(s562retdecInstance*);

U32 f2(s562retdecInstance*);

void f3(s562retdecInstance*,U32);

U32 f4(s562retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s562retdecInstance*,U32,U32,U32,U32,U32);

void f6(s562retdecInstance*,U32);

void f7(s562retdecInstance*,U32,U32,U32);

void f8(s562retdecInstance*,U32,U32,U32);

void s562retdec____wasm_call_ctors(s562retdecInstance*i);

void s562retdec____wasm_apply_data_relocs(s562retdecInstance*i);

U32 s562retdec_func_1(s562retdecInstance*i);

void s562retdec_call_cb(s562retdecInstance*i,U32 l0);

void s562retdecInstantiate(s562retdecInstance* instance, void* resolve(const char* module, const char* name));

void s562retdecFreeInstance(s562retdecInstance* instance);

#endif /* s562retdec_H */

