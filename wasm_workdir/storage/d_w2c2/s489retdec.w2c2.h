#ifndef s489retdec_H
#define s489retdec_H

#include "w2c2_base.h"

typedef struct s489retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s489retdecInstance;

void f0(s489retdecInstance*);

void f1(s489retdecInstance*);

U32 f2(s489retdecInstance*);

void f3(s489retdecInstance*,U32);

U32 f4(s489retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s489retdecInstance*,U32,U32,U32,U32,U32);

void f6(s489retdecInstance*,U32);

void f7(s489retdecInstance*,U32,U32,U32);

void f8(s489retdecInstance*,U32,U32,U32);

void s489retdec____wasm_call_ctors(s489retdecInstance*i);

void s489retdec____wasm_apply_data_relocs(s489retdecInstance*i);

U32 s489retdec_func_1(s489retdecInstance*i);

void s489retdec_call_cb(s489retdecInstance*i,U32 l0);

void s489retdecInstantiate(s489retdecInstance* instance, void* resolve(const char* module, const char* name));

void s489retdecFreeInstance(s489retdecInstance* instance);

#endif /* s489retdec_H */

