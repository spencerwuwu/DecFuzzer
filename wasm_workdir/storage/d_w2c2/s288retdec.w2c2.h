#ifndef s288retdec_H
#define s288retdec_H

#include "w2c2_base.h"

typedef struct s288retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s288retdecInstance;

void f0(s288retdecInstance*);

void f1(s288retdecInstance*);

U32 f2(s288retdecInstance*);

void f3(s288retdecInstance*,U32);

U32 f4(s288retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s288retdecInstance*,U32,U32,U32,U32,U32);

void f6(s288retdecInstance*,U32);

void f7(s288retdecInstance*,U32,U32,U32);

void f8(s288retdecInstance*,U32,U32,U32);

void s288retdec____wasm_call_ctors(s288retdecInstance*i);

void s288retdec____wasm_apply_data_relocs(s288retdecInstance*i);

U32 s288retdec_func_1(s288retdecInstance*i);

void s288retdec_call_cb(s288retdecInstance*i,U32 l0);

void s288retdecInstantiate(s288retdecInstance* instance, void* resolve(const char* module, const char* name));

void s288retdecFreeInstance(s288retdecInstance* instance);

#endif /* s288retdec_H */

