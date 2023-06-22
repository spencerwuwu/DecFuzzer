#ifndef s414retdec_H
#define s414retdec_H

#include "w2c2_base.h"

typedef struct s414retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s414retdecInstance;

void f0(s414retdecInstance*);

void f1(s414retdecInstance*);

U32 f2(s414retdecInstance*);

void f3(s414retdecInstance*,U32);

U32 f4(s414retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s414retdecInstance*,U32,U32,U32,U32,U32);

void f6(s414retdecInstance*,U32);

void f7(s414retdecInstance*,U32,U32,U32);

void f8(s414retdecInstance*,U32,U32,U32);

void s414retdec____wasm_call_ctors(s414retdecInstance*i);

void s414retdec____wasm_apply_data_relocs(s414retdecInstance*i);

U32 s414retdec_func_1(s414retdecInstance*i);

void s414retdec_call_cb(s414retdecInstance*i,U32 l0);

void s414retdecInstantiate(s414retdecInstance* instance, void* resolve(const char* module, const char* name));

void s414retdecFreeInstance(s414retdecInstance* instance);

#endif /* s414retdec_H */

