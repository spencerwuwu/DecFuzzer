#ifndef s696retdec_H
#define s696retdec_H

#include "w2c2_base.h"

typedef struct s696retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s696retdecInstance;

void f0(s696retdecInstance*);

void f1(s696retdecInstance*);

U32 f2(s696retdecInstance*);

void f3(s696retdecInstance*,U32);

U32 f4(s696retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s696retdecInstance*,U32,U32,U32,U32,U32);

void f6(s696retdecInstance*,U32);

void f7(s696retdecInstance*,U32,U32,U32);

void f8(s696retdecInstance*,U32,U32,U32);

void s696retdec____wasm_call_ctors(s696retdecInstance*i);

void s696retdec____wasm_apply_data_relocs(s696retdecInstance*i);

U32 s696retdec_func_1(s696retdecInstance*i);

void s696retdec_call_cb(s696retdecInstance*i,U32 l0);

void s696retdecInstantiate(s696retdecInstance* instance, void* resolve(const char* module, const char* name));

void s696retdecFreeInstance(s696retdecInstance* instance);

#endif /* s696retdec_H */

