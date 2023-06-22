#ifndef s142retdec_H
#define s142retdec_H

#include "w2c2_base.h"

typedef struct s142retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s142retdecInstance;

void f0(s142retdecInstance*);

void f1(s142retdecInstance*);

U32 f2(s142retdecInstance*);

void f3(s142retdecInstance*,U32);

void f4(s142retdecInstance*,U32);

void s142retdec____wasm_call_ctors(s142retdecInstance*i);

void s142retdec____wasm_apply_data_relocs(s142retdecInstance*i);

U32 s142retdec_func_1(s142retdecInstance*i);

void s142retdec_call_cb(s142retdecInstance*i,U32 l0);

void s142retdecInstantiate(s142retdecInstance* instance, void* resolve(const char* module, const char* name));

void s142retdecFreeInstance(s142retdecInstance* instance);

#endif /* s142retdec_H */

