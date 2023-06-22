#ifndef s121retdec_H
#define s121retdec_H

#include "w2c2_base.h"

typedef struct s121retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s121retdecInstance;

void f0(s121retdecInstance*);

void f1(s121retdecInstance*);

U32 f2(s121retdecInstance*);

void f3(s121retdecInstance*,U32);

U32 f4(s121retdecInstance*,U32,U32,U32,U32);

void f5(s121retdecInstance*,U32,U32,U32,U32,U32);

void f6(s121retdecInstance*,U32);

void f7(s121retdecInstance*,U32,U32,U32);

void f8(s121retdecInstance*,U32,U32,U32);

void s121retdec____wasm_call_ctors(s121retdecInstance*i);

void s121retdec____wasm_apply_data_relocs(s121retdecInstance*i);

U32 s121retdec_func_1(s121retdecInstance*i);

void s121retdec_call_cb(s121retdecInstance*i,U32 l0);

void s121retdecInstantiate(s121retdecInstance* instance, void* resolve(const char* module, const char* name));

void s121retdecFreeInstance(s121retdecInstance* instance);

#endif /* s121retdec_H */

