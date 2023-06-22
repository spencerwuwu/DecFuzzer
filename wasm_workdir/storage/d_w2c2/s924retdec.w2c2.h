#ifndef s924retdec_H
#define s924retdec_H

#include "w2c2_base.h"

typedef struct s924retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s924retdecInstance;

void f0(s924retdecInstance*);

void f1(s924retdecInstance*);

U32 f2(s924retdecInstance*);

void f3(s924retdecInstance*,U32);

U32 f4(s924retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s924retdecInstance*,U32,U32,U32,U32,U32);

void f6(s924retdecInstance*,U32);

void f7(s924retdecInstance*,U32,U32,U32);

void f8(s924retdecInstance*,U32,U32,U32);

void s924retdec____wasm_call_ctors(s924retdecInstance*i);

void s924retdec____wasm_apply_data_relocs(s924retdecInstance*i);

U32 s924retdec_func_1(s924retdecInstance*i);

void s924retdec_call_cb(s924retdecInstance*i,U32 l0);

void s924retdecInstantiate(s924retdecInstance* instance, void* resolve(const char* module, const char* name));

void s924retdecFreeInstance(s924retdecInstance* instance);

#endif /* s924retdec_H */

