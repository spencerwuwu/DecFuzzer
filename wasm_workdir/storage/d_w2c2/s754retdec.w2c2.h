#ifndef s754retdec_H
#define s754retdec_H

#include "w2c2_base.h"

typedef struct s754retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s754retdecInstance;

void f0(s754retdecInstance*);

void f1(s754retdecInstance*);

U32 f2(s754retdecInstance*);

void f3(s754retdecInstance*,U32);

U32 f4(s754retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s754retdecInstance*,U32,U32,U32,U32,U32);

void f6(s754retdecInstance*,U32);

void f7(s754retdecInstance*,U32,U32,U32);

void f8(s754retdecInstance*,U32,U32,U32);

void s754retdec____wasm_call_ctors(s754retdecInstance*i);

void s754retdec____wasm_apply_data_relocs(s754retdecInstance*i);

U32 s754retdec_func_1(s754retdecInstance*i);

void s754retdec_call_cb(s754retdecInstance*i,U32 l0);

void s754retdecInstantiate(s754retdecInstance* instance, void* resolve(const char* module, const char* name));

void s754retdecFreeInstance(s754retdecInstance* instance);

#endif /* s754retdec_H */

