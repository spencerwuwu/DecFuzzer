#ifndef s954retdec_H
#define s954retdec_H

#include "w2c2_base.h"

typedef struct s954retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s954retdecInstance;

void f0(s954retdecInstance*);

void f1(s954retdecInstance*);

U32 f2(s954retdecInstance*);

void f3(s954retdecInstance*,U32);

U32 f4(s954retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s954retdecInstance*,U32,U32,U32,U32,U32);

void f6(s954retdecInstance*,U32);

void f7(s954retdecInstance*,U32,U32,U32);

void f8(s954retdecInstance*,U32,U32,U32);

void s954retdec____wasm_call_ctors(s954retdecInstance*i);

void s954retdec____wasm_apply_data_relocs(s954retdecInstance*i);

U32 s954retdec_func_1(s954retdecInstance*i);

void s954retdec_call_cb(s954retdecInstance*i,U32 l0);

void s954retdecInstantiate(s954retdecInstance* instance, void* resolve(const char* module, const char* name));

void s954retdecFreeInstance(s954retdecInstance* instance);

#endif /* s954retdec_H */

