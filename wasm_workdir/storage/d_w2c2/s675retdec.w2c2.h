#ifndef s675retdec_H
#define s675retdec_H

#include "w2c2_base.h"

typedef struct s675retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s675retdecInstance;

void f0(s675retdecInstance*);

void f1(s675retdecInstance*);

U32 f2(s675retdecInstance*);

void f3(s675retdecInstance*,U32);

U32 f4(s675retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s675retdecInstance*,U32,U32,U32,U32,U32);

void f6(s675retdecInstance*,U32);

void f7(s675retdecInstance*,U32,U32,U32);

void f8(s675retdecInstance*,U32,U32,U32);

void s675retdec____wasm_call_ctors(s675retdecInstance*i);

void s675retdec____wasm_apply_data_relocs(s675retdecInstance*i);

U32 s675retdec_func_1(s675retdecInstance*i);

void s675retdec_call_cb(s675retdecInstance*i,U32 l0);

void s675retdecInstantiate(s675retdecInstance* instance, void* resolve(const char* module, const char* name));

void s675retdecFreeInstance(s675retdecInstance* instance);

#endif /* s675retdec_H */

