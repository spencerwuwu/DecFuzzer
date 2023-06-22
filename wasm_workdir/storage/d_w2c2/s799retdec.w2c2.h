#ifndef s799retdec_H
#define s799retdec_H

#include "w2c2_base.h"

typedef struct s799retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s799retdecInstance;

void f0(s799retdecInstance*);

void f1(s799retdecInstance*);

U32 f2(s799retdecInstance*);

void f3(s799retdecInstance*,U32);

U32 f4(s799retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s799retdecInstance*,U32,U32,U32,U32,U32);

void f6(s799retdecInstance*,U32);

void f7(s799retdecInstance*,U32,U32,U32);

void f8(s799retdecInstance*,U32,U32,U32);

void s799retdec____wasm_call_ctors(s799retdecInstance*i);

void s799retdec____wasm_apply_data_relocs(s799retdecInstance*i);

U32 s799retdec_func_1(s799retdecInstance*i);

void s799retdec_call_cb(s799retdecInstance*i,U32 l0);

void s799retdecInstantiate(s799retdecInstance* instance, void* resolve(const char* module, const char* name));

void s799retdecFreeInstance(s799retdecInstance* instance);

#endif /* s799retdec_H */

