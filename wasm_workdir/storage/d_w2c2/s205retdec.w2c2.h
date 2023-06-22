#ifndef s205retdec_H
#define s205retdec_H

#include "w2c2_base.h"

typedef struct s205retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s205retdecInstance;

void f0(s205retdecInstance*);

void f1(s205retdecInstance*);

U32 f2(s205retdecInstance*);

void f3(s205retdecInstance*,U32);

U32 f4(s205retdecInstance*,U32,U32,U32,U32);

void f5(s205retdecInstance*,U32,U32,U32,U32,U32);

void f6(s205retdecInstance*,U32);

void f7(s205retdecInstance*,U32,U32,U32);

void f8(s205retdecInstance*,U32,U32,U32);

void s205retdec____wasm_call_ctors(s205retdecInstance*i);

void s205retdec____wasm_apply_data_relocs(s205retdecInstance*i);

U32 s205retdec_func_1(s205retdecInstance*i);

void s205retdec_call_cb(s205retdecInstance*i,U32 l0);

void s205retdecInstantiate(s205retdecInstance* instance, void* resolve(const char* module, const char* name));

void s205retdecFreeInstance(s205retdecInstance* instance);

#endif /* s205retdec_H */

