#ifndef s610retdec_H
#define s610retdec_H

#include "w2c2_base.h"

typedef struct s610retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s610retdecInstance;

void f0(s610retdecInstance*);

void f1(s610retdecInstance*);

U32 f2(s610retdecInstance*);

void f3(s610retdecInstance*,U32);

U32 f4(s610retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s610retdecInstance*,U32,U32,U32,U32,U32);

void f6(s610retdecInstance*,U32);

void f7(s610retdecInstance*,U32,U32,U32);

void f8(s610retdecInstance*,U32,U32,U32);

void s610retdec____wasm_call_ctors(s610retdecInstance*i);

void s610retdec____wasm_apply_data_relocs(s610retdecInstance*i);

U32 s610retdec_func_1(s610retdecInstance*i);

void s610retdec_call_cb(s610retdecInstance*i,U32 l0);

void s610retdecInstantiate(s610retdecInstance* instance, void* resolve(const char* module, const char* name));

void s610retdecFreeInstance(s610retdecInstance* instance);

#endif /* s610retdec_H */

