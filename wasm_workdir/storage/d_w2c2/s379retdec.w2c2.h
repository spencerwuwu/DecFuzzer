#ifndef s379retdec_H
#define s379retdec_H

#include "w2c2_base.h"

typedef struct s379retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s379retdecInstance;

void f0(s379retdecInstance*);

void f1(s379retdecInstance*);

U32 f2(s379retdecInstance*);

void f3(s379retdecInstance*,U32);

U32 f4(s379retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s379retdecInstance*,U32,U32,U32,U32,U32);

void f6(s379retdecInstance*,U32);

void f7(s379retdecInstance*,U32,U32,U32);

void f8(s379retdecInstance*,U32,U32,U32);

void s379retdec____wasm_call_ctors(s379retdecInstance*i);

void s379retdec____wasm_apply_data_relocs(s379retdecInstance*i);

U32 s379retdec_func_1(s379retdecInstance*i);

void s379retdec_call_cb(s379retdecInstance*i,U32 l0);

void s379retdecInstantiate(s379retdecInstance* instance, void* resolve(const char* module, const char* name));

void s379retdecFreeInstance(s379retdecInstance* instance);

#endif /* s379retdec_H */

