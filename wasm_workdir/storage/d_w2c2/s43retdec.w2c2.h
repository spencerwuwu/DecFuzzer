#ifndef s43retdec_H
#define s43retdec_H

#include "w2c2_base.h"

typedef struct s43retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s43retdecInstance;

void f0(s43retdecInstance*);

void f1(s43retdecInstance*);

U32 f2(s43retdecInstance*);

void f3(s43retdecInstance*,U32);

U32 f4(s43retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s43retdecInstance*,U32,U32,U32,U32,U32);

void f6(s43retdecInstance*,U32);

void f7(s43retdecInstance*,U32,U32,U32);

void f8(s43retdecInstance*,U32,U32,U32);

void s43retdec____wasm_call_ctors(s43retdecInstance*i);

void s43retdec____wasm_apply_data_relocs(s43retdecInstance*i);

U32 s43retdec_func_1(s43retdecInstance*i);

void s43retdec_call_cb(s43retdecInstance*i,U32 l0);

void s43retdecInstantiate(s43retdecInstance* instance, void* resolve(const char* module, const char* name));

void s43retdecFreeInstance(s43retdecInstance* instance);

#endif /* s43retdec_H */

