#ifndef s637retdec_H
#define s637retdec_H

#include "w2c2_base.h"

typedef struct s637retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s637retdecInstance;

void f0(s637retdecInstance*);

void f1(s637retdecInstance*);

U32 f2(s637retdecInstance*);

void f3(s637retdecInstance*,U32);

U32 f4(s637retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s637retdecInstance*,U32,U32,U32,U32,U32);

void f6(s637retdecInstance*,U32);

void f7(s637retdecInstance*,U32,U32,U32);

void f8(s637retdecInstance*,U32,U32,U32);

void s637retdec____wasm_call_ctors(s637retdecInstance*i);

void s637retdec____wasm_apply_data_relocs(s637retdecInstance*i);

U32 s637retdec_func_1(s637retdecInstance*i);

void s637retdec_call_cb(s637retdecInstance*i,U32 l0);

void s637retdecInstantiate(s637retdecInstance* instance, void* resolve(const char* module, const char* name));

void s637retdecFreeInstance(s637retdecInstance* instance);

#endif /* s637retdec_H */

