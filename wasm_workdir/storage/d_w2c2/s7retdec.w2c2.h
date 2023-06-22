#ifndef s7retdec_H
#define s7retdec_H

#include "w2c2_base.h"

typedef struct s7retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s7retdecInstance;

void f0(s7retdecInstance*);

void f1(s7retdecInstance*);

U32 f2(s7retdecInstance*);

void f3(s7retdecInstance*,U32);

U32 f4(s7retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s7retdecInstance*,U32,U32,U32,U32,U32);

void f6(s7retdecInstance*,U32);

void f7(s7retdecInstance*,U32,U32,U32);

void f8(s7retdecInstance*,U32,U32,U32);

void s7retdec____wasm_call_ctors(s7retdecInstance*i);

void s7retdec____wasm_apply_data_relocs(s7retdecInstance*i);

U32 s7retdec_func_1(s7retdecInstance*i);

void s7retdec_call_cb(s7retdecInstance*i,U32 l0);

void s7retdecInstantiate(s7retdecInstance* instance, void* resolve(const char* module, const char* name));

void s7retdecFreeInstance(s7retdecInstance* instance);

#endif /* s7retdec_H */

