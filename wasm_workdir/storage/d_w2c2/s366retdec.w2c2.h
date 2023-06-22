#ifndef s366retdec_H
#define s366retdec_H

#include "w2c2_base.h"

typedef struct s366retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s366retdecInstance;

void f0(s366retdecInstance*);

void f1(s366retdecInstance*);

U32 f2(s366retdecInstance*);

void f3(s366retdecInstance*,U32);

U32 f4(s366retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s366retdecInstance*,U32,U32,U32,U32,U32);

void f6(s366retdecInstance*,U32);

void f7(s366retdecInstance*,U32,U32,U32);

void f8(s366retdecInstance*,U32,U32,U32);

void s366retdec____wasm_call_ctors(s366retdecInstance*i);

void s366retdec____wasm_apply_data_relocs(s366retdecInstance*i);

U32 s366retdec_func_1(s366retdecInstance*i);

void s366retdec_call_cb(s366retdecInstance*i,U32 l0);

void s366retdecInstantiate(s366retdecInstance* instance, void* resolve(const char* module, const char* name));

void s366retdecFreeInstance(s366retdecInstance* instance);

#endif /* s366retdec_H */

