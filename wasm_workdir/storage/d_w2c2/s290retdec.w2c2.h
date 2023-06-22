#ifndef s290retdec_H
#define s290retdec_H

#include "w2c2_base.h"

typedef struct s290retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s290retdecInstance;

void f0(s290retdecInstance*);

void f1(s290retdecInstance*);

U32 f2(s290retdecInstance*);

void f3(s290retdecInstance*,U32);

U32 f4(s290retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s290retdecInstance*,U32,U32,U32,U32,U32);

void f6(s290retdecInstance*,U32);

void f7(s290retdecInstance*,U32,U32,U32);

void f8(s290retdecInstance*,U32,U32,U32);

void s290retdec____wasm_call_ctors(s290retdecInstance*i);

void s290retdec____wasm_apply_data_relocs(s290retdecInstance*i);

U32 s290retdec_func_1(s290retdecInstance*i);

void s290retdec_call_cb(s290retdecInstance*i,U32 l0);

void s290retdecInstantiate(s290retdecInstance* instance, void* resolve(const char* module, const char* name));

void s290retdecFreeInstance(s290retdecInstance* instance);

#endif /* s290retdec_H */

