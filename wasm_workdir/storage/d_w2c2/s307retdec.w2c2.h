#ifndef s307retdec_H
#define s307retdec_H

#include "w2c2_base.h"

typedef struct s307retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s307retdecInstance;

void f0(s307retdecInstance*);

void f1(s307retdecInstance*);

U32 f2(s307retdecInstance*);

void f3(s307retdecInstance*,U32);

U32 f4(s307retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s307retdecInstance*,U32,U32,U32,U32,U32);

void f6(s307retdecInstance*,U32);

void f7(s307retdecInstance*,U32,U32,U32);

void f8(s307retdecInstance*,U32,U32,U32);

void s307retdec____wasm_call_ctors(s307retdecInstance*i);

void s307retdec____wasm_apply_data_relocs(s307retdecInstance*i);

U32 s307retdec_func_1(s307retdecInstance*i);

void s307retdec_call_cb(s307retdecInstance*i,U32 l0);

void s307retdecInstantiate(s307retdecInstance* instance, void* resolve(const char* module, const char* name));

void s307retdecFreeInstance(s307retdecInstance* instance);

#endif /* s307retdec_H */

