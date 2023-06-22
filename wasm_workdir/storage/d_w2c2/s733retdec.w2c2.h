#ifndef s733retdec_H
#define s733retdec_H

#include "w2c2_base.h"

typedef struct s733retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s733retdecInstance;

void f0(s733retdecInstance*);

void f1(s733retdecInstance*);

U32 f2(s733retdecInstance*);

void f3(s733retdecInstance*,U32);

U32 f4(s733retdecInstance*,U32,U32,U32);

void f5(s733retdecInstance*,U32,U32,U32,U32,U32);

void f6(s733retdecInstance*,U32);

void f7(s733retdecInstance*,U32,U32,U32);

void f8(s733retdecInstance*,U32,U32,U32);

void s733retdec____wasm_call_ctors(s733retdecInstance*i);

void s733retdec____wasm_apply_data_relocs(s733retdecInstance*i);

U32 s733retdec_func_1(s733retdecInstance*i);

void s733retdec_call_cb(s733retdecInstance*i,U32 l0);

void s733retdecInstantiate(s733retdecInstance* instance, void* resolve(const char* module, const char* name));

void s733retdecFreeInstance(s733retdecInstance* instance);

#endif /* s733retdec_H */

