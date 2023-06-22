#ifndef s471retdec_H
#define s471retdec_H

#include "w2c2_base.h"

typedef struct s471retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s471retdecInstance;

void f0(s471retdecInstance*);

void f1(s471retdecInstance*);

U32 f2(s471retdecInstance*);

void f3(s471retdecInstance*,U32);

U32 f4(s471retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s471retdecInstance*,U32,U32,U32,U32,U32);

void f6(s471retdecInstance*,U32);

void f7(s471retdecInstance*,U32,U32,U32);

void f8(s471retdecInstance*,U32,U32,U32);

void s471retdec____wasm_call_ctors(s471retdecInstance*i);

void s471retdec____wasm_apply_data_relocs(s471retdecInstance*i);

U32 s471retdec_func_1(s471retdecInstance*i);

void s471retdec_call_cb(s471retdecInstance*i,U32 l0);

void s471retdecInstantiate(s471retdecInstance* instance, void* resolve(const char* module, const char* name));

void s471retdecFreeInstance(s471retdecInstance* instance);

#endif /* s471retdec_H */

