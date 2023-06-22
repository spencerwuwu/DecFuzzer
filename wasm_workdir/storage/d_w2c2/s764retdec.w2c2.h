#ifndef s764retdec_H
#define s764retdec_H

#include "w2c2_base.h"

typedef struct s764retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s764retdecInstance;

void f0(s764retdecInstance*);

void f1(s764retdecInstance*);

U32 f2(s764retdecInstance*);

void f3(s764retdecInstance*,U32);

U32 f4(s764retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s764retdecInstance*,U32,U32,U32,U32,U32);

void f6(s764retdecInstance*,U32);

void f7(s764retdecInstance*,U32,U32,U32);

void f8(s764retdecInstance*,U32,U32,U32);

void s764retdec____wasm_call_ctors(s764retdecInstance*i);

void s764retdec____wasm_apply_data_relocs(s764retdecInstance*i);

U32 s764retdec_func_1(s764retdecInstance*i);

void s764retdec_call_cb(s764retdecInstance*i,U32 l0);

void s764retdecInstantiate(s764retdecInstance* instance, void* resolve(const char* module, const char* name));

void s764retdecFreeInstance(s764retdecInstance* instance);

#endif /* s764retdec_H */

