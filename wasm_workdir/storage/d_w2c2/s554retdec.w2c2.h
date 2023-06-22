#ifndef s554retdec_H
#define s554retdec_H

#include "w2c2_base.h"

typedef struct s554retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s554retdecInstance;

void f0(s554retdecInstance*);

void f1(s554retdecInstance*);

U32 f2(s554retdecInstance*);

void f3(s554retdecInstance*,U32);

U32 f4(s554retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s554retdecInstance*,U32,U32,U32,U32,U32);

void f6(s554retdecInstance*,U32);

void f7(s554retdecInstance*,U32,U32,U32);

void f8(s554retdecInstance*,U32,U32,U32);

void s554retdec____wasm_call_ctors(s554retdecInstance*i);

void s554retdec____wasm_apply_data_relocs(s554retdecInstance*i);

U32 s554retdec_func_1(s554retdecInstance*i);

void s554retdec_call_cb(s554retdecInstance*i,U32 l0);

void s554retdecInstantiate(s554retdecInstance* instance, void* resolve(const char* module, const char* name));

void s554retdecFreeInstance(s554retdecInstance* instance);

#endif /* s554retdec_H */

