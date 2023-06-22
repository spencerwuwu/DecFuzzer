#ifndef s772retdec_H
#define s772retdec_H

#include "w2c2_base.h"

typedef struct s772retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s772retdecInstance;

void f0(s772retdecInstance*);

void f1(s772retdecInstance*);

U32 f2(s772retdecInstance*);

void f3(s772retdecInstance*,U32);

U32 f4(s772retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s772retdecInstance*,U32,U32,U32,U32,U32);

void f6(s772retdecInstance*,U32);

void f7(s772retdecInstance*,U32,U32,U32);

void f8(s772retdecInstance*,U32,U32,U32);

void s772retdec____wasm_call_ctors(s772retdecInstance*i);

void s772retdec____wasm_apply_data_relocs(s772retdecInstance*i);

U32 s772retdec_func_1(s772retdecInstance*i);

void s772retdec_call_cb(s772retdecInstance*i,U32 l0);

void s772retdecInstantiate(s772retdecInstance* instance, void* resolve(const char* module, const char* name));

void s772retdecFreeInstance(s772retdecInstance* instance);

#endif /* s772retdec_H */

