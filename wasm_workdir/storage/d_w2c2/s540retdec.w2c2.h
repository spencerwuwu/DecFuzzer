#ifndef s540retdec_H
#define s540retdec_H

#include "w2c2_base.h"

typedef struct s540retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s540retdecInstance;

void f0(s540retdecInstance*);

void f1(s540retdecInstance*);

U32 f2(s540retdecInstance*);

void f3(s540retdecInstance*,U32);

U32 f4(s540retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s540retdecInstance*,U32,U32,U32,U32,U32);

void f6(s540retdecInstance*,U32);

void f7(s540retdecInstance*,U32,U32,U32);

void f8(s540retdecInstance*,U32,U32,U32);

void s540retdec____wasm_call_ctors(s540retdecInstance*i);

void s540retdec____wasm_apply_data_relocs(s540retdecInstance*i);

U32 s540retdec_func_1(s540retdecInstance*i);

void s540retdec_call_cb(s540retdecInstance*i,U32 l0);

void s540retdecInstantiate(s540retdecInstance* instance, void* resolve(const char* module, const char* name));

void s540retdecFreeInstance(s540retdecInstance* instance);

#endif /* s540retdec_H */

