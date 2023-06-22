#ifndef s30retdec_H
#define s30retdec_H

#include "w2c2_base.h"

typedef struct s30retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s30retdecInstance;

void f0(s30retdecInstance*);

void f1(s30retdecInstance*);

U32 f2(s30retdecInstance*);

void f3(s30retdecInstance*,U32);

U32 f4(s30retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s30retdecInstance*,U32,U32,U32,U32,U32);

void f6(s30retdecInstance*,U32);

void f7(s30retdecInstance*,U32,U32,U32);

void f8(s30retdecInstance*,U32,U32,U32);

void s30retdec____wasm_call_ctors(s30retdecInstance*i);

void s30retdec____wasm_apply_data_relocs(s30retdecInstance*i);

U32 s30retdec_func_1(s30retdecInstance*i);

void s30retdec_call_cb(s30retdecInstance*i,U32 l0);

void s30retdecInstantiate(s30retdecInstance* instance, void* resolve(const char* module, const char* name));

void s30retdecFreeInstance(s30retdecInstance* instance);

#endif /* s30retdec_H */

