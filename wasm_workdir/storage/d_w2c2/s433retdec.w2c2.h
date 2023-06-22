#ifndef s433retdec_H
#define s433retdec_H

#include "w2c2_base.h"

typedef struct s433retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s433retdecInstance;

void f0(s433retdecInstance*);

void f1(s433retdecInstance*);

U32 f2(s433retdecInstance*);

void f3(s433retdecInstance*,U32);

U32 f4(s433retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s433retdecInstance*,U32,U32,U32,U32,U32);

void f6(s433retdecInstance*,U32);

void f7(s433retdecInstance*,U32,U32,U32);

void f8(s433retdecInstance*,U32,U32,U32);

void s433retdec____wasm_call_ctors(s433retdecInstance*i);

void s433retdec____wasm_apply_data_relocs(s433retdecInstance*i);

U32 s433retdec_func_1(s433retdecInstance*i);

void s433retdec_call_cb(s433retdecInstance*i,U32 l0);

void s433retdecInstantiate(s433retdecInstance* instance, void* resolve(const char* module, const char* name));

void s433retdecFreeInstance(s433retdecInstance* instance);

#endif /* s433retdec_H */

