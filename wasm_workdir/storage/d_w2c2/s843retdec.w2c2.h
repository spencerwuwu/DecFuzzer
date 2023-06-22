#ifndef s843retdec_H
#define s843retdec_H

#include "w2c2_base.h"

typedef struct s843retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s843retdecInstance;

void f0(s843retdecInstance*);

void f1(s843retdecInstance*);

U32 f2(s843retdecInstance*);

void f3(s843retdecInstance*,U32);

U32 f4(s843retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s843retdecInstance*,U32,U32,U32,U32,U32);

void f6(s843retdecInstance*,U32);

void f7(s843retdecInstance*,U32,U32,U32);

void f8(s843retdecInstance*,U32,U32,U32);

void s843retdec____wasm_call_ctors(s843retdecInstance*i);

void s843retdec____wasm_apply_data_relocs(s843retdecInstance*i);

U32 s843retdec_func_1(s843retdecInstance*i);

void s843retdec_call_cb(s843retdecInstance*i,U32 l0);

void s843retdecInstantiate(s843retdecInstance* instance, void* resolve(const char* module, const char* name));

void s843retdecFreeInstance(s843retdecInstance* instance);

#endif /* s843retdec_H */

