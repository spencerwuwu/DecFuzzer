#ifndef s49retdec_H
#define s49retdec_H

#include "w2c2_base.h"

typedef struct s49retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s49retdecInstance;

void f0(s49retdecInstance*);

void f1(s49retdecInstance*);

U32 f2(s49retdecInstance*);

void f3(s49retdecInstance*,U32);

void f4(s49retdecInstance*,U32);

void s49retdec____wasm_call_ctors(s49retdecInstance*i);

void s49retdec____wasm_apply_data_relocs(s49retdecInstance*i);

U32 s49retdec_func_1(s49retdecInstance*i);

void s49retdec_call_cb(s49retdecInstance*i,U32 l0);

void s49retdecInstantiate(s49retdecInstance* instance, void* resolve(const char* module, const char* name));

void s49retdecFreeInstance(s49retdecInstance* instance);

#endif /* s49retdec_H */

