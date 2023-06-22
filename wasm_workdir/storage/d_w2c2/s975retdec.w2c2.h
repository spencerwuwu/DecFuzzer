#ifndef s975retdec_H
#define s975retdec_H

#include "w2c2_base.h"

typedef struct s975retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s975retdecInstance;

void f0(s975retdecInstance*);

void f1(s975retdecInstance*);

U32 f2(s975retdecInstance*);

void f3(s975retdecInstance*,U32);

U32 f4(s975retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s975retdecInstance*,U32,U32,U32,U32,U32);

void f6(s975retdecInstance*,U32);

void f7(s975retdecInstance*,U32,U32,U32);

void f8(s975retdecInstance*,U32,U32,U32);

void s975retdec____wasm_call_ctors(s975retdecInstance*i);

void s975retdec____wasm_apply_data_relocs(s975retdecInstance*i);

U32 s975retdec_func_1(s975retdecInstance*i);

void s975retdec_call_cb(s975retdecInstance*i,U32 l0);

void s975retdecInstantiate(s975retdecInstance* instance, void* resolve(const char* module, const char* name));

void s975retdecFreeInstance(s975retdecInstance* instance);

#endif /* s975retdec_H */

