#ifndef s948retdec_H
#define s948retdec_H

#include "w2c2_base.h"

typedef struct s948retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s948retdecInstance;

void f0(s948retdecInstance*);

void f1(s948retdecInstance*);

U32 f2(s948retdecInstance*);

void f3(s948retdecInstance*,U32);

U32 f4(s948retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s948retdecInstance*,U32,U32,U32,U32,U32);

void f6(s948retdecInstance*,U32);

void f7(s948retdecInstance*,U32,U32,U32);

void f8(s948retdecInstance*,U32,U32,U32);

void s948retdec____wasm_call_ctors(s948retdecInstance*i);

void s948retdec____wasm_apply_data_relocs(s948retdecInstance*i);

U32 s948retdec_func_1(s948retdecInstance*i);

void s948retdec_call_cb(s948retdecInstance*i,U32 l0);

void s948retdecInstantiate(s948retdecInstance* instance, void* resolve(const char* module, const char* name));

void s948retdecFreeInstance(s948retdecInstance* instance);

#endif /* s948retdec_H */

