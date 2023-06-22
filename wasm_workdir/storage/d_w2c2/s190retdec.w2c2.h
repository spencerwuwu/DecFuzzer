#ifndef s190retdec_H
#define s190retdec_H

#include "w2c2_base.h"

typedef struct s190retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s190retdecInstance;

void f0(s190retdecInstance*);

void f1(s190retdecInstance*);

U32 f2(s190retdecInstance*);

void f3(s190retdecInstance*,U32);

U32 f4(s190retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s190retdecInstance*,U32,U32,U32,U32,U32);

void f6(s190retdecInstance*,U32);

void f7(s190retdecInstance*,U32,U32,U32);

void f8(s190retdecInstance*,U32,U32,U32);

void s190retdec____wasm_call_ctors(s190retdecInstance*i);

void s190retdec____wasm_apply_data_relocs(s190retdecInstance*i);

U32 s190retdec_func_1(s190retdecInstance*i);

void s190retdec_call_cb(s190retdecInstance*i,U32 l0);

void s190retdecInstantiate(s190retdecInstance* instance, void* resolve(const char* module, const char* name));

void s190retdecFreeInstance(s190retdecInstance* instance);

#endif /* s190retdec_H */

