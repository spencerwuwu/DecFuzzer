#ifndef s146retdec_H
#define s146retdec_H

#include "w2c2_base.h"

typedef struct s146retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s146retdecInstance;

void f0(s146retdecInstance*);

void f1(s146retdecInstance*);

U32 f2(s146retdecInstance*);

void f3(s146retdecInstance*,U32);

U32 f4(s146retdecInstance*,U32,U32,U32,U32);

void f5(s146retdecInstance*,U32,U32,U32,U32,U32);

void f6(s146retdecInstance*,U32);

void f7(s146retdecInstance*,U32,U32,U32);

void f8(s146retdecInstance*,U32,U32,U32);

void s146retdec____wasm_call_ctors(s146retdecInstance*i);

void s146retdec____wasm_apply_data_relocs(s146retdecInstance*i);

U32 s146retdec_func_1(s146retdecInstance*i);

void s146retdec_call_cb(s146retdecInstance*i,U32 l0);

void s146retdecInstantiate(s146retdecInstance* instance, void* resolve(const char* module, const char* name));

void s146retdecFreeInstance(s146retdecInstance* instance);

#endif /* s146retdec_H */

