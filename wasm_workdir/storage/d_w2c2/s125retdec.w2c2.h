#ifndef s125retdec_H
#define s125retdec_H

#include "w2c2_base.h"

typedef struct s125retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s125retdecInstance;

void f0(s125retdecInstance*);

void f1(s125retdecInstance*);

U32 f2(s125retdecInstance*);

void f3(s125retdecInstance*,U32);

U32 f4(s125retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s125retdecInstance*,U32,U32,U32,U32,U32);

void f6(s125retdecInstance*,U32);

void f7(s125retdecInstance*,U32,U32,U32);

void f8(s125retdecInstance*,U32,U32,U32);

void s125retdec____wasm_call_ctors(s125retdecInstance*i);

void s125retdec____wasm_apply_data_relocs(s125retdecInstance*i);

U32 s125retdec_func_1(s125retdecInstance*i);

void s125retdec_call_cb(s125retdecInstance*i,U32 l0);

void s125retdecInstantiate(s125retdecInstance* instance, void* resolve(const char* module, const char* name));

void s125retdecFreeInstance(s125retdecInstance* instance);

#endif /* s125retdec_H */

