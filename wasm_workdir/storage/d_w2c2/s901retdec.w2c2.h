#ifndef s901retdec_H
#define s901retdec_H

#include "w2c2_base.h"

typedef struct s901retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s901retdecInstance;

void f0(s901retdecInstance*);

void f1(s901retdecInstance*);

U32 f2(s901retdecInstance*);

void f3(s901retdecInstance*,U32);

U32 f4(s901retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s901retdecInstance*,U32,U32,U32,U32,U32);

void f6(s901retdecInstance*,U32);

void f7(s901retdecInstance*,U32,U32,U32);

void f8(s901retdecInstance*,U32,U32,U32);

void s901retdec____wasm_call_ctors(s901retdecInstance*i);

void s901retdec____wasm_apply_data_relocs(s901retdecInstance*i);

U32 s901retdec_func_1(s901retdecInstance*i);

void s901retdec_call_cb(s901retdecInstance*i,U32 l0);

void s901retdecInstantiate(s901retdecInstance* instance, void* resolve(const char* module, const char* name));

void s901retdecFreeInstance(s901retdecInstance* instance);

#endif /* s901retdec_H */

