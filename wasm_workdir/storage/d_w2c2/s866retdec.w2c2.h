#ifndef s866retdec_H
#define s866retdec_H

#include "w2c2_base.h"

typedef struct s866retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s866retdecInstance;

void f0(s866retdecInstance*);

void f1(s866retdecInstance*);

U32 f2(s866retdecInstance*);

void f3(s866retdecInstance*,U32);

U32 f4(s866retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s866retdecInstance*,U32,U32,U32,U32,U32);

void f6(s866retdecInstance*,U32);

void f7(s866retdecInstance*,U32,U32,U32);

void f8(s866retdecInstance*,U32,U32,U32);

void s866retdec____wasm_call_ctors(s866retdecInstance*i);

void s866retdec____wasm_apply_data_relocs(s866retdecInstance*i);

U32 s866retdec_func_1(s866retdecInstance*i);

void s866retdec_call_cb(s866retdecInstance*i,U32 l0);

void s866retdecInstantiate(s866retdecInstance* instance, void* resolve(const char* module, const char* name));

void s866retdecFreeInstance(s866retdecInstance* instance);

#endif /* s866retdec_H */

