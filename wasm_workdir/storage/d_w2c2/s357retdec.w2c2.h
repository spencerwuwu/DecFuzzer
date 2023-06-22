#ifndef s357retdec_H
#define s357retdec_H

#include "w2c2_base.h"

typedef struct s357retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s357retdecInstance;

void f0(s357retdecInstance*);

void f1(s357retdecInstance*);

U32 f2(s357retdecInstance*);

void f3(s357retdecInstance*,U32);

U32 f4(s357retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s357retdecInstance*,U32,U32,U32,U32,U32);

void f6(s357retdecInstance*,U32);

void f7(s357retdecInstance*,U32,U32,U32);

void f8(s357retdecInstance*,U32,U32,U32);

void s357retdec____wasm_call_ctors(s357retdecInstance*i);

void s357retdec____wasm_apply_data_relocs(s357retdecInstance*i);

U32 s357retdec_func_1(s357retdecInstance*i);

void s357retdec_call_cb(s357retdecInstance*i,U32 l0);

void s357retdecInstantiate(s357retdecInstance* instance, void* resolve(const char* module, const char* name));

void s357retdecFreeInstance(s357retdecInstance* instance);

#endif /* s357retdec_H */

