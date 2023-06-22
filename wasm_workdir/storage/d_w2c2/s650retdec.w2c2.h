#ifndef s650retdec_H
#define s650retdec_H

#include "w2c2_base.h"

typedef struct s650retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s650retdecInstance;

void f0(s650retdecInstance*);

void f1(s650retdecInstance*);

U32 f2(s650retdecInstance*);

void f3(s650retdecInstance*,U32);

U32 f4(s650retdecInstance*,U32,U32,U32);

void f5(s650retdecInstance*,U32,U32,U32,U32,U32);

void f6(s650retdecInstance*,U32);

void f7(s650retdecInstance*,U32,U32,U32);

void f8(s650retdecInstance*,U32,U32,U32);

void s650retdec____wasm_call_ctors(s650retdecInstance*i);

void s650retdec____wasm_apply_data_relocs(s650retdecInstance*i);

U32 s650retdec_func_1(s650retdecInstance*i);

void s650retdec_call_cb(s650retdecInstance*i,U32 l0);

void s650retdecInstantiate(s650retdecInstance* instance, void* resolve(const char* module, const char* name));

void s650retdecFreeInstance(s650retdecInstance* instance);

#endif /* s650retdec_H */

