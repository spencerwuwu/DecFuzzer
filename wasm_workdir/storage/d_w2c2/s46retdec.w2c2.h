#ifndef s46retdec_H
#define s46retdec_H

#include "w2c2_base.h"

typedef struct s46retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s46retdecInstance;

void f0(s46retdecInstance*);

void f1(s46retdecInstance*);

U32 f2(s46retdecInstance*);

void f3(s46retdecInstance*,U32);

U32 f4(s46retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s46retdecInstance*,U32,U32,U32,U32,U32);

void f6(s46retdecInstance*,U32);

void f7(s46retdecInstance*,U32,U32,U32);

void f8(s46retdecInstance*,U32,U32,U32);

void s46retdec____wasm_call_ctors(s46retdecInstance*i);

void s46retdec____wasm_apply_data_relocs(s46retdecInstance*i);

U32 s46retdec_func_1(s46retdecInstance*i);

void s46retdec_call_cb(s46retdecInstance*i,U32 l0);

void s46retdecInstantiate(s46retdecInstance* instance, void* resolve(const char* module, const char* name));

void s46retdecFreeInstance(s46retdecInstance* instance);

#endif /* s46retdec_H */

