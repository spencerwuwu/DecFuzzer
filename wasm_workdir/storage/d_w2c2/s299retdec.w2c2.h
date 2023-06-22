#ifndef s299retdec_H
#define s299retdec_H

#include "w2c2_base.h"

typedef struct s299retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s299retdecInstance;

void f0(s299retdecInstance*);

void f1(s299retdecInstance*);

U32 f2(s299retdecInstance*);

void f3(s299retdecInstance*,U32);

U32 f4(s299retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s299retdecInstance*,U32,U32,U32,U32,U32);

void f6(s299retdecInstance*,U32);

void f7(s299retdecInstance*,U32,U32,U32);

void f8(s299retdecInstance*,U32,U32,U32);

void s299retdec____wasm_call_ctors(s299retdecInstance*i);

void s299retdec____wasm_apply_data_relocs(s299retdecInstance*i);

U32 s299retdec_func_1(s299retdecInstance*i);

void s299retdec_call_cb(s299retdecInstance*i,U32 l0);

void s299retdecInstantiate(s299retdecInstance* instance, void* resolve(const char* module, const char* name));

void s299retdecFreeInstance(s299retdecInstance* instance);

#endif /* s299retdec_H */

