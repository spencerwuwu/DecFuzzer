#ifndef s861retdec_H
#define s861retdec_H

#include "w2c2_base.h"

typedef struct s861retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s861retdecInstance;

void f0(s861retdecInstance*);

void f1(s861retdecInstance*);

U32 f2(s861retdecInstance*);

void f3(s861retdecInstance*,U32);

U32 f4(s861retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s861retdecInstance*,U32,U32,U32,U32,U32);

void f6(s861retdecInstance*,U32);

void f7(s861retdecInstance*,U32,U32,U32);

void f8(s861retdecInstance*,U32,U32,U32);

void s861retdec____wasm_call_ctors(s861retdecInstance*i);

void s861retdec____wasm_apply_data_relocs(s861retdecInstance*i);

U32 s861retdec_func_1(s861retdecInstance*i);

void s861retdec_call_cb(s861retdecInstance*i,U32 l0);

void s861retdecInstantiate(s861retdecInstance* instance, void* resolve(const char* module, const char* name));

void s861retdecFreeInstance(s861retdecInstance* instance);

#endif /* s861retdec_H */

