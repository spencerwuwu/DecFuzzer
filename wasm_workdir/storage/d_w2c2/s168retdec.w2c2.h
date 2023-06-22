#ifndef s168retdec_H
#define s168retdec_H

#include "w2c2_base.h"

typedef struct s168retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s168retdecInstance;

void f0(s168retdecInstance*);

void f1(s168retdecInstance*);

U32 f2(s168retdecInstance*);

void f3(s168retdecInstance*,U32);

U32 f4(s168retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s168retdecInstance*,U32,U32,U32,U32,U32);

void f6(s168retdecInstance*,U32);

void f7(s168retdecInstance*,U32,U32,U32);

void f8(s168retdecInstance*,U32,U32,U32);

void s168retdec____wasm_call_ctors(s168retdecInstance*i);

void s168retdec____wasm_apply_data_relocs(s168retdecInstance*i);

U32 s168retdec_func_1(s168retdecInstance*i);

void s168retdec_call_cb(s168retdecInstance*i,U32 l0);

void s168retdecInstantiate(s168retdecInstance* instance, void* resolve(const char* module, const char* name));

void s168retdecFreeInstance(s168retdecInstance* instance);

#endif /* s168retdec_H */

