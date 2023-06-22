#ifndef s587retdec_H
#define s587retdec_H

#include "w2c2_base.h"

typedef struct s587retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s587retdecInstance;

void f0(s587retdecInstance*);

void f1(s587retdecInstance*);

U32 f2(s587retdecInstance*);

void f3(s587retdecInstance*,U32);

U32 f4(s587retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s587retdecInstance*,U32,U32,U32,U32,U32);

void f6(s587retdecInstance*,U32);

void f7(s587retdecInstance*,U32,U32,U32);

void f8(s587retdecInstance*,U32,U32,U32);

void s587retdec____wasm_call_ctors(s587retdecInstance*i);

void s587retdec____wasm_apply_data_relocs(s587retdecInstance*i);

U32 s587retdec_func_1(s587retdecInstance*i);

void s587retdec_call_cb(s587retdecInstance*i,U32 l0);

void s587retdecInstantiate(s587retdecInstance* instance, void* resolve(const char* module, const char* name));

void s587retdecFreeInstance(s587retdecInstance* instance);

#endif /* s587retdec_H */

