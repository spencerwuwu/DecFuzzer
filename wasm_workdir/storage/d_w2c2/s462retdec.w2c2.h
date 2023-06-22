#ifndef s462retdec_H
#define s462retdec_H

#include "w2c2_base.h"

typedef struct s462retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s462retdecInstance;

void f0(s462retdecInstance*);

void f1(s462retdecInstance*);

U32 f2(s462retdecInstance*);

void f3(s462retdecInstance*,U32);

U32 f4(s462retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s462retdecInstance*,U32,U32,U32,U32,U32);

void f6(s462retdecInstance*,U32);

void f7(s462retdecInstance*,U32,U32,U32);

void f8(s462retdecInstance*,U32,U32,U32);

void s462retdec____wasm_call_ctors(s462retdecInstance*i);

void s462retdec____wasm_apply_data_relocs(s462retdecInstance*i);

U32 s462retdec_func_1(s462retdecInstance*i);

void s462retdec_call_cb(s462retdecInstance*i,U32 l0);

void s462retdecInstantiate(s462retdecInstance* instance, void* resolve(const char* module, const char* name));

void s462retdecFreeInstance(s462retdecInstance* instance);

#endif /* s462retdec_H */

