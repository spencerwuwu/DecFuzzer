#ifndef s488retdec_H
#define s488retdec_H

#include "w2c2_base.h"

typedef struct s488retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s488retdecInstance;

void f0(s488retdecInstance*);

void f1(s488retdecInstance*);

U32 f2(s488retdecInstance*);

void f3(s488retdecInstance*,U32);

U32 f4(s488retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s488retdecInstance*,U32,U32,U32,U32,U32);

void f6(s488retdecInstance*,U32);

void f7(s488retdecInstance*,U32,U32,U32);

void f8(s488retdecInstance*,U32,U32,U32);

void s488retdec____wasm_call_ctors(s488retdecInstance*i);

void s488retdec____wasm_apply_data_relocs(s488retdecInstance*i);

U32 s488retdec_func_1(s488retdecInstance*i);

void s488retdec_call_cb(s488retdecInstance*i,U32 l0);

void s488retdecInstantiate(s488retdecInstance* instance, void* resolve(const char* module, const char* name));

void s488retdecFreeInstance(s488retdecInstance* instance);

#endif /* s488retdec_H */

