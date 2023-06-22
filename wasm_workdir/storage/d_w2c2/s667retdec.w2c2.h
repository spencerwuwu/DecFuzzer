#ifndef s667retdec_H
#define s667retdec_H

#include "w2c2_base.h"

typedef struct s667retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s667retdecInstance;

void f0(s667retdecInstance*);

void f1(s667retdecInstance*);

U32 f2(s667retdecInstance*);

void f3(s667retdecInstance*,U32);

U32 f4(s667retdecInstance*,U32,U32,U32);

void f5(s667retdecInstance*,U32,U32,U32,U32,U32);

void f6(s667retdecInstance*,U32);

void f7(s667retdecInstance*,U32,U32,U32);

void f8(s667retdecInstance*,U32,U32,U32);

void s667retdec____wasm_call_ctors(s667retdecInstance*i);

void s667retdec____wasm_apply_data_relocs(s667retdecInstance*i);

U32 s667retdec_func_1(s667retdecInstance*i);

void s667retdec_call_cb(s667retdecInstance*i,U32 l0);

void s667retdecInstantiate(s667retdecInstance* instance, void* resolve(const char* module, const char* name));

void s667retdecFreeInstance(s667retdecInstance* instance);

#endif /* s667retdec_H */

