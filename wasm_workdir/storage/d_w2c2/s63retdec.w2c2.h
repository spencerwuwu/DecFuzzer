#ifndef s63retdec_H
#define s63retdec_H

#include "w2c2_base.h"

typedef struct s63retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s63retdecInstance;

void f0(s63retdecInstance*);

void f1(s63retdecInstance*);

U32 f2(s63retdecInstance*);

void f3(s63retdecInstance*,U32);

U32 f4(s63retdecInstance*,U32,U32,U32);

void f5(s63retdecInstance*,U32,U32,U32,U32,U32);

void f6(s63retdecInstance*,U32);

void f7(s63retdecInstance*,U32,U32,U32);

void f8(s63retdecInstance*,U32,U32,U32);

void s63retdec____wasm_call_ctors(s63retdecInstance*i);

void s63retdec____wasm_apply_data_relocs(s63retdecInstance*i);

U32 s63retdec_func_1(s63retdecInstance*i);

void s63retdec_call_cb(s63retdecInstance*i,U32 l0);

void s63retdecInstantiate(s63retdecInstance* instance, void* resolve(const char* module, const char* name));

void s63retdecFreeInstance(s63retdecInstance* instance);

#endif /* s63retdec_H */

