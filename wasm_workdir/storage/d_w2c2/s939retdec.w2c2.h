#ifndef s939retdec_H
#define s939retdec_H

#include "w2c2_base.h"

typedef struct s939retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s939retdecInstance;

void f0(s939retdecInstance*);

void f1(s939retdecInstance*);

U32 f2(s939retdecInstance*);

void f3(s939retdecInstance*,U32);

U32 f4(s939retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s939retdecInstance*,U32,U32,U32,U32,U32);

void f6(s939retdecInstance*,U32);

void f7(s939retdecInstance*,U32,U32,U32);

void f8(s939retdecInstance*,U32,U32,U32);

void s939retdec____wasm_call_ctors(s939retdecInstance*i);

void s939retdec____wasm_apply_data_relocs(s939retdecInstance*i);

U32 s939retdec_func_1(s939retdecInstance*i);

void s939retdec_call_cb(s939retdecInstance*i,U32 l0);

void s939retdecInstantiate(s939retdecInstance* instance, void* resolve(const char* module, const char* name));

void s939retdecFreeInstance(s939retdecInstance* instance);

#endif /* s939retdec_H */

