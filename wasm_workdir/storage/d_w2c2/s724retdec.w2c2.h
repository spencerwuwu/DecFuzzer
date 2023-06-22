#ifndef s724retdec_H
#define s724retdec_H

#include "w2c2_base.h"

typedef struct s724retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s724retdecInstance;

void f0(s724retdecInstance*);

void f1(s724retdecInstance*);

U32 f2(s724retdecInstance*);

void f3(s724retdecInstance*,U32);

void f4(s724retdecInstance*,U32);

void s724retdec____wasm_call_ctors(s724retdecInstance*i);

void s724retdec____wasm_apply_data_relocs(s724retdecInstance*i);

U32 s724retdec_func_1(s724retdecInstance*i);

void s724retdec_call_cb(s724retdecInstance*i,U32 l0);

void s724retdecInstantiate(s724retdecInstance* instance, void* resolve(const char* module, const char* name));

void s724retdecFreeInstance(s724retdecInstance* instance);

#endif /* s724retdec_H */

