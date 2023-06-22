#ifndef s947retdec_H
#define s947retdec_H

#include "w2c2_base.h"

typedef struct s947retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s947retdecInstance;

void f0(s947retdecInstance*);

void f1(s947retdecInstance*);

U32 f2(s947retdecInstance*);

void f3(s947retdecInstance*,U32);

U32 f4(s947retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s947retdecInstance*,U32,U32,U32,U32,U32);

void f6(s947retdecInstance*,U32);

void f7(s947retdecInstance*,U32,U32,U32);

void f8(s947retdecInstance*,U32,U32,U32);

void s947retdec____wasm_call_ctors(s947retdecInstance*i);

void s947retdec____wasm_apply_data_relocs(s947retdecInstance*i);

U32 s947retdec_func_1(s947retdecInstance*i);

void s947retdec_call_cb(s947retdecInstance*i,U32 l0);

void s947retdecInstantiate(s947retdecInstance* instance, void* resolve(const char* module, const char* name));

void s947retdecFreeInstance(s947retdecInstance* instance);

#endif /* s947retdec_H */

