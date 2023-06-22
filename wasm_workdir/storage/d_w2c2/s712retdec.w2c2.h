#ifndef s712retdec_H
#define s712retdec_H

#include "w2c2_base.h"

typedef struct s712retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s712retdecInstance;

void f0(s712retdecInstance*);

void f1(s712retdecInstance*);

U32 f2(s712retdecInstance*);

void f3(s712retdecInstance*,U32);

U32 f4(s712retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s712retdecInstance*,U32,U32,U32,U32,U32);

void f6(s712retdecInstance*,U32);

void f7(s712retdecInstance*,U32,U32,U32);

void f8(s712retdecInstance*,U32,U32,U32);

void s712retdec____wasm_call_ctors(s712retdecInstance*i);

void s712retdec____wasm_apply_data_relocs(s712retdecInstance*i);

U32 s712retdec_func_1(s712retdecInstance*i);

void s712retdec_call_cb(s712retdecInstance*i,U32 l0);

void s712retdecInstantiate(s712retdecInstance* instance, void* resolve(const char* module, const char* name));

void s712retdecFreeInstance(s712retdecInstance* instance);

#endif /* s712retdec_H */

