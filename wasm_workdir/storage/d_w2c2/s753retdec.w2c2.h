#ifndef s753retdec_H
#define s753retdec_H

#include "w2c2_base.h"

typedef struct s753retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s753retdecInstance;

void f0(s753retdecInstance*);

void f1(s753retdecInstance*);

U32 f2(s753retdecInstance*);

void f3(s753retdecInstance*,U32);

U32 f4(s753retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s753retdecInstance*,U32,U32,U32,U32,U32);

void f6(s753retdecInstance*,U32);

void f7(s753retdecInstance*,U32,U32,U32);

void f8(s753retdecInstance*,U32,U32,U32);

void s753retdec____wasm_call_ctors(s753retdecInstance*i);

void s753retdec____wasm_apply_data_relocs(s753retdecInstance*i);

U32 s753retdec_func_1(s753retdecInstance*i);

void s753retdec_call_cb(s753retdecInstance*i,U32 l0);

void s753retdecInstantiate(s753retdecInstance* instance, void* resolve(const char* module, const char* name));

void s753retdecFreeInstance(s753retdecInstance* instance);

#endif /* s753retdec_H */

