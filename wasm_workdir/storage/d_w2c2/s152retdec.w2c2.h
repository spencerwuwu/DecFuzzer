#ifndef s152retdec_H
#define s152retdec_H

#include "w2c2_base.h"

typedef struct s152retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s152retdecInstance;

void f0(s152retdecInstance*);

void f1(s152retdecInstance*);

U32 f2(s152retdecInstance*);

void f3(s152retdecInstance*,U32);

U32 f4(s152retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s152retdecInstance*,U32,U32,U32,U32,U32);

void f6(s152retdecInstance*,U32);

void f7(s152retdecInstance*,U32,U32,U32);

void f8(s152retdecInstance*,U32,U32,U32);

void s152retdec____wasm_call_ctors(s152retdecInstance*i);

void s152retdec____wasm_apply_data_relocs(s152retdecInstance*i);

U32 s152retdec_func_1(s152retdecInstance*i);

void s152retdec_call_cb(s152retdecInstance*i,U32 l0);

void s152retdecInstantiate(s152retdecInstance* instance, void* resolve(const char* module, const char* name));

void s152retdecFreeInstance(s152retdecInstance* instance);

#endif /* s152retdec_H */

