#ifndef s187retdec_H
#define s187retdec_H

#include "w2c2_base.h"

typedef struct s187retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s187retdecInstance;

void f0(s187retdecInstance*);

void f1(s187retdecInstance*);

U32 f2(s187retdecInstance*);

void f3(s187retdecInstance*,U32);

U32 f4(s187retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s187retdecInstance*,U32,U32,U32,U32,U32);

void f6(s187retdecInstance*,U32);

void f7(s187retdecInstance*,U32,U32,U32);

void f8(s187retdecInstance*,U32,U32,U32);

void s187retdec____wasm_call_ctors(s187retdecInstance*i);

void s187retdec____wasm_apply_data_relocs(s187retdecInstance*i);

U32 s187retdec_func_1(s187retdecInstance*i);

void s187retdec_call_cb(s187retdecInstance*i,U32 l0);

void s187retdecInstantiate(s187retdecInstance* instance, void* resolve(const char* module, const char* name));

void s187retdecFreeInstance(s187retdecInstance* instance);

#endif /* s187retdec_H */

