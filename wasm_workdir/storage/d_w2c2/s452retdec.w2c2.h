#ifndef s452retdec_H
#define s452retdec_H

#include "w2c2_base.h"

typedef struct s452retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s452retdecInstance;

void f0(s452retdecInstance*);

void f1(s452retdecInstance*);

U32 f2(s452retdecInstance*);

void f3(s452retdecInstance*,U32);

U32 f4(s452retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s452retdecInstance*,U32,U32,U32,U32,U32);

void f6(s452retdecInstance*,U32);

void f7(s452retdecInstance*,U32,U32,U32);

void f8(s452retdecInstance*,U32,U32,U32);

void s452retdec____wasm_call_ctors(s452retdecInstance*i);

void s452retdec____wasm_apply_data_relocs(s452retdecInstance*i);

U32 s452retdec_func_1(s452retdecInstance*i);

void s452retdec_call_cb(s452retdecInstance*i,U32 l0);

void s452retdecInstantiate(s452retdecInstance* instance, void* resolve(const char* module, const char* name));

void s452retdecFreeInstance(s452retdecInstance* instance);

#endif /* s452retdec_H */

