#ifndef s581retdec_H
#define s581retdec_H

#include "w2c2_base.h"

typedef struct s581retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s581retdecInstance;

void f0(s581retdecInstance*);

void f1(s581retdecInstance*);

U32 f2(s581retdecInstance*);

void f3(s581retdecInstance*,U32);

U32 f4(s581retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s581retdecInstance*,U32,U32,U32,U32,U32);

void f6(s581retdecInstance*,U32);

void f7(s581retdecInstance*,U32,U32,U32);

void f8(s581retdecInstance*,U32,U32,U32);

void s581retdec____wasm_call_ctors(s581retdecInstance*i);

void s581retdec____wasm_apply_data_relocs(s581retdecInstance*i);

U32 s581retdec_func_1(s581retdecInstance*i);

void s581retdec_call_cb(s581retdecInstance*i,U32 l0);

void s581retdecInstantiate(s581retdecInstance* instance, void* resolve(const char* module, const char* name));

void s581retdecFreeInstance(s581retdecInstance* instance);

#endif /* s581retdec_H */

