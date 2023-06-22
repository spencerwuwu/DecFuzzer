#ifndef s264retdec_H
#define s264retdec_H

#include "w2c2_base.h"

typedef struct s264retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s264retdecInstance;

void f0(s264retdecInstance*);

void f1(s264retdecInstance*);

U32 f2(s264retdecInstance*);

void f3(s264retdecInstance*,U32);

U32 f4(s264retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s264retdecInstance*,U32,U32,U32,U32,U32);

void f6(s264retdecInstance*,U32);

void f7(s264retdecInstance*,U32,U32,U32);

void f8(s264retdecInstance*,U32,U32,U32);

void s264retdec____wasm_call_ctors(s264retdecInstance*i);

void s264retdec____wasm_apply_data_relocs(s264retdecInstance*i);

U32 s264retdec_func_1(s264retdecInstance*i);

void s264retdec_call_cb(s264retdecInstance*i,U32 l0);

void s264retdecInstantiate(s264retdecInstance* instance, void* resolve(const char* module, const char* name));

void s264retdecFreeInstance(s264retdecInstance* instance);

#endif /* s264retdec_H */

