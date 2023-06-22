#ifndef s659retdec_H
#define s659retdec_H

#include "w2c2_base.h"

typedef struct s659retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s659retdecInstance;

void f0(s659retdecInstance*);

void f1(s659retdecInstance*);

U32 f2(s659retdecInstance*);

void f3(s659retdecInstance*,U32);

void f4(s659retdecInstance*,U32);

void s659retdec____wasm_call_ctors(s659retdecInstance*i);

void s659retdec____wasm_apply_data_relocs(s659retdecInstance*i);

U32 s659retdec_func_1(s659retdecInstance*i);

void s659retdec_call_cb(s659retdecInstance*i,U32 l0);

void s659retdecInstantiate(s659retdecInstance* instance, void* resolve(const char* module, const char* name));

void s659retdecFreeInstance(s659retdecInstance* instance);

#endif /* s659retdec_H */

