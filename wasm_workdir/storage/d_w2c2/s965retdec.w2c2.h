#ifndef s965retdec_H
#define s965retdec_H

#include "w2c2_base.h"

typedef struct s965retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s965retdecInstance;

void f0(s965retdecInstance*);

void f1(s965retdecInstance*);

U32 f2(s965retdecInstance*);

void f3(s965retdecInstance*,U32);

U32 f4(s965retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s965retdecInstance*,U32,U32,U32,U32,U32);

void f6(s965retdecInstance*,U32);

void f7(s965retdecInstance*,U32,U32,U32);

void f8(s965retdecInstance*,U32,U32,U32);

void s965retdec____wasm_call_ctors(s965retdecInstance*i);

void s965retdec____wasm_apply_data_relocs(s965retdecInstance*i);

U32 s965retdec_func_1(s965retdecInstance*i);

void s965retdec_call_cb(s965retdecInstance*i,U32 l0);

void s965retdecInstantiate(s965retdecInstance* instance, void* resolve(const char* module, const char* name));

void s965retdecFreeInstance(s965retdecInstance* instance);

#endif /* s965retdec_H */

