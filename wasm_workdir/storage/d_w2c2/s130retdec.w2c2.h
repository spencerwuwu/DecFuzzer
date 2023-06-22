#ifndef s130retdec_H
#define s130retdec_H

#include "w2c2_base.h"

typedef struct s130retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s130retdecInstance;

void f0(s130retdecInstance*);

void f1(s130retdecInstance*);

U32 f2(s130retdecInstance*);

void f3(s130retdecInstance*,U32);

U32 f4(s130retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s130retdecInstance*,U32,U32,U32,U32,U32);

void f6(s130retdecInstance*,U32);

void f7(s130retdecInstance*,U32,U32,U32);

void f8(s130retdecInstance*,U32,U32,U32);

void s130retdec____wasm_call_ctors(s130retdecInstance*i);

void s130retdec____wasm_apply_data_relocs(s130retdecInstance*i);

U32 s130retdec_func_1(s130retdecInstance*i);

void s130retdec_call_cb(s130retdecInstance*i,U32 l0);

void s130retdecInstantiate(s130retdecInstance* instance, void* resolve(const char* module, const char* name));

void s130retdecFreeInstance(s130retdecInstance* instance);

#endif /* s130retdec_H */

