#ifndef s985retdec_H
#define s985retdec_H

#include "w2c2_base.h"

typedef struct s985retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s985retdecInstance;

void f0(s985retdecInstance*);

void f1(s985retdecInstance*);

U32 f2(s985retdecInstance*);

void f3(s985retdecInstance*,U32);

U32 f4(s985retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s985retdecInstance*,U32,U32,U32,U32,U32);

void f6(s985retdecInstance*,U32);

void f7(s985retdecInstance*,U32,U32,U32);

void f8(s985retdecInstance*,U32,U32,U32);

void s985retdec____wasm_call_ctors(s985retdecInstance*i);

void s985retdec____wasm_apply_data_relocs(s985retdecInstance*i);

U32 s985retdec_func_1(s985retdecInstance*i);

void s985retdec_call_cb(s985retdecInstance*i,U32 l0);

void s985retdecInstantiate(s985retdecInstance* instance, void* resolve(const char* module, const char* name));

void s985retdecFreeInstance(s985retdecInstance* instance);

#endif /* s985retdec_H */

