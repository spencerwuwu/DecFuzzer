#ifndef s911retdec_H
#define s911retdec_H

#include "w2c2_base.h"

typedef struct s911retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s911retdecInstance;

void f0(s911retdecInstance*);

void f1(s911retdecInstance*);

U32 f2(s911retdecInstance*);

void f3(s911retdecInstance*,U32);

U32 f4(s911retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s911retdecInstance*,U32,U32,U32,U32,U32);

void f6(s911retdecInstance*,U32);

void f7(s911retdecInstance*,U32,U32,U32);

void f8(s911retdecInstance*,U32,U32,U32);

void s911retdec____wasm_call_ctors(s911retdecInstance*i);

void s911retdec____wasm_apply_data_relocs(s911retdecInstance*i);

U32 s911retdec_func_1(s911retdecInstance*i);

void s911retdec_call_cb(s911retdecInstance*i,U32 l0);

void s911retdecInstantiate(s911retdecInstance* instance, void* resolve(const char* module, const char* name));

void s911retdecFreeInstance(s911retdecInstance* instance);

#endif /* s911retdec_H */

