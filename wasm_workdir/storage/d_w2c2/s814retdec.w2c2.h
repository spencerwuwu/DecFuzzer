#ifndef s814retdec_H
#define s814retdec_H

#include "w2c2_base.h"

typedef struct s814retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s814retdecInstance;

void f0(s814retdecInstance*);

void f1(s814retdecInstance*);

U32 f2(s814retdecInstance*);

void f3(s814retdecInstance*,U32);

U32 f4(s814retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s814retdecInstance*,U32,U32,U32,U32,U32);

void f6(s814retdecInstance*,U32);

void f7(s814retdecInstance*,U32,U32,U32);

void f8(s814retdecInstance*,U32,U32,U32);

void s814retdec____wasm_call_ctors(s814retdecInstance*i);

void s814retdec____wasm_apply_data_relocs(s814retdecInstance*i);

U32 s814retdec_func_1(s814retdecInstance*i);

void s814retdec_call_cb(s814retdecInstance*i,U32 l0);

void s814retdecInstantiate(s814retdecInstance* instance, void* resolve(const char* module, const char* name));

void s814retdecFreeInstance(s814retdecInstance* instance);

#endif /* s814retdec_H */

