#ifndef s767retdec_H
#define s767retdec_H

#include "w2c2_base.h"

typedef struct s767retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s767retdecInstance;

void f0(s767retdecInstance*);

void f1(s767retdecInstance*);

U32 f2(s767retdecInstance*);

void f3(s767retdecInstance*,U32);

U32 f4(s767retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s767retdecInstance*,U32,U32,U32,U32,U32);

void f6(s767retdecInstance*,U32);

void f7(s767retdecInstance*,U32,U32,U32);

void f8(s767retdecInstance*,U32,U32,U32);

void s767retdec____wasm_call_ctors(s767retdecInstance*i);

void s767retdec____wasm_apply_data_relocs(s767retdecInstance*i);

U32 s767retdec_func_1(s767retdecInstance*i);

void s767retdec_call_cb(s767retdecInstance*i,U32 l0);

void s767retdecInstantiate(s767retdecInstance* instance, void* resolve(const char* module, const char* name));

void s767retdecFreeInstance(s767retdecInstance* instance);

#endif /* s767retdec_H */

