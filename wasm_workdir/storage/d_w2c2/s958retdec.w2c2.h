#ifndef s958retdec_H
#define s958retdec_H

#include "w2c2_base.h"

typedef struct s958retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s958retdecInstance;

void f0(s958retdecInstance*);

void f1(s958retdecInstance*);

U32 f2(s958retdecInstance*);

void f3(s958retdecInstance*,U32);

U32 f4(s958retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s958retdecInstance*,U32,U32,U32,U32,U32);

void f6(s958retdecInstance*,U32);

void f7(s958retdecInstance*,U32,U32,U32);

void f8(s958retdecInstance*,U32,U32,U32);

void s958retdec____wasm_call_ctors(s958retdecInstance*i);

void s958retdec____wasm_apply_data_relocs(s958retdecInstance*i);

U32 s958retdec_func_1(s958retdecInstance*i);

void s958retdec_call_cb(s958retdecInstance*i,U32 l0);

void s958retdecInstantiate(s958retdecInstance* instance, void* resolve(const char* module, const char* name));

void s958retdecFreeInstance(s958retdecInstance* instance);

#endif /* s958retdec_H */

