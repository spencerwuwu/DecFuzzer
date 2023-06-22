#ifndef s519retdec_H
#define s519retdec_H

#include "w2c2_base.h"

typedef struct s519retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s519retdecInstance;

void f0(s519retdecInstance*);

void f1(s519retdecInstance*);

U32 f2(s519retdecInstance*);

void f3(s519retdecInstance*,U32);

U32 f4(s519retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s519retdecInstance*,U32,U32,U32,U32,U32);

void f6(s519retdecInstance*,U32);

void f7(s519retdecInstance*,U32,U32,U32);

void f8(s519retdecInstance*,U32,U32,U32);

void s519retdec____wasm_call_ctors(s519retdecInstance*i);

void s519retdec____wasm_apply_data_relocs(s519retdecInstance*i);

U32 s519retdec_func_1(s519retdecInstance*i);

void s519retdec_call_cb(s519retdecInstance*i,U32 l0);

void s519retdecInstantiate(s519retdecInstance* instance, void* resolve(const char* module, const char* name));

void s519retdecFreeInstance(s519retdecInstance* instance);

#endif /* s519retdec_H */

