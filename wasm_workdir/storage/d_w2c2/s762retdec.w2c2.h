#ifndef s762retdec_H
#define s762retdec_H

#include "w2c2_base.h"

typedef struct s762retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s762retdecInstance;

void f0(s762retdecInstance*);

void f1(s762retdecInstance*);

U32 f2(s762retdecInstance*);

void f3(s762retdecInstance*,U32);

U32 f4(s762retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s762retdecInstance*,U32,U32,U32,U32,U32);

void f6(s762retdecInstance*,U32);

void f7(s762retdecInstance*,U32,U32,U32);

void f8(s762retdecInstance*,U32,U32,U32);

void s762retdec____wasm_call_ctors(s762retdecInstance*i);

void s762retdec____wasm_apply_data_relocs(s762retdecInstance*i);

U32 s762retdec_func_1(s762retdecInstance*i);

void s762retdec_call_cb(s762retdecInstance*i,U32 l0);

void s762retdecInstantiate(s762retdecInstance* instance, void* resolve(const char* module, const char* name));

void s762retdecFreeInstance(s762retdecInstance* instance);

#endif /* s762retdec_H */

