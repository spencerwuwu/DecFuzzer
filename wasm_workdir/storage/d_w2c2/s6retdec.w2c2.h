#ifndef s6retdec_H
#define s6retdec_H

#include "w2c2_base.h"

typedef struct s6retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s6retdecInstance;

void f0(s6retdecInstance*);

void f1(s6retdecInstance*);

U32 f2(s6retdecInstance*);

void f3(s6retdecInstance*,U32);

U32 f4(s6retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s6retdecInstance*,U32,U32,U32,U32,U32);

void f6(s6retdecInstance*,U32);

void f7(s6retdecInstance*,U32,U32,U32);

void f8(s6retdecInstance*,U32,U32,U32);

void s6retdec____wasm_call_ctors(s6retdecInstance*i);

void s6retdec____wasm_apply_data_relocs(s6retdecInstance*i);

U32 s6retdec_func_1(s6retdecInstance*i);

void s6retdec_call_cb(s6retdecInstance*i,U32 l0);

void s6retdecInstantiate(s6retdecInstance* instance, void* resolve(const char* module, const char* name));

void s6retdecFreeInstance(s6retdecInstance* instance);

#endif /* s6retdec_H */

