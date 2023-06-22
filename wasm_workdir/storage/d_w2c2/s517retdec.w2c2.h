#ifndef s517retdec_H
#define s517retdec_H

#include "w2c2_base.h"

typedef struct s517retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s517retdecInstance;

void f0(s517retdecInstance*);

void f1(s517retdecInstance*);

U32 f2(s517retdecInstance*);

void f3(s517retdecInstance*,U32);

U32 f4(s517retdecInstance*,U32,U32,U32);

void f5(s517retdecInstance*,U32,U32,U32,U32,U32);

void f6(s517retdecInstance*,U32);

void f7(s517retdecInstance*,U32,U32,U32);

void f8(s517retdecInstance*,U32,U32,U32);

void s517retdec____wasm_call_ctors(s517retdecInstance*i);

void s517retdec____wasm_apply_data_relocs(s517retdecInstance*i);

U32 s517retdec_func_1(s517retdecInstance*i);

void s517retdec_call_cb(s517retdecInstance*i,U32 l0);

void s517retdecInstantiate(s517retdecInstance* instance, void* resolve(const char* module, const char* name));

void s517retdecFreeInstance(s517retdecInstance* instance);

#endif /* s517retdec_H */

