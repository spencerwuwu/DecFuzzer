#ifndef s314retdec_H
#define s314retdec_H

#include "w2c2_base.h"

typedef struct s314retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s314retdecInstance;

void f0(s314retdecInstance*);

void f1(s314retdecInstance*);

U32 f2(s314retdecInstance*);

void f3(s314retdecInstance*,U32);

U32 f4(s314retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s314retdecInstance*,U32,U32,U32,U32,U32);

void f6(s314retdecInstance*,U32);

void f7(s314retdecInstance*,U32,U32,U32);

void f8(s314retdecInstance*,U32,U32,U32);

void s314retdec____wasm_call_ctors(s314retdecInstance*i);

void s314retdec____wasm_apply_data_relocs(s314retdecInstance*i);

U32 s314retdec_func_1(s314retdecInstance*i);

void s314retdec_call_cb(s314retdecInstance*i,U32 l0);

void s314retdecInstantiate(s314retdecInstance* instance, void* resolve(const char* module, const char* name));

void s314retdecFreeInstance(s314retdecInstance* instance);

#endif /* s314retdec_H */

