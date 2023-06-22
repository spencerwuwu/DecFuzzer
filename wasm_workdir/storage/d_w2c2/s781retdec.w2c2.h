#ifndef s781retdec_H
#define s781retdec_H

#include "w2c2_base.h"

typedef struct s781retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s781retdecInstance;

void f0(s781retdecInstance*);

void f1(s781retdecInstance*);

U32 f2(s781retdecInstance*);

void f3(s781retdecInstance*,U32);

U32 f4(s781retdecInstance*,U32,U32,U32,U32,U32);

void f5(s781retdecInstance*,U32,U32,U32,U32,U32);

void f6(s781retdecInstance*,U32);

void f7(s781retdecInstance*,U32,U32,U32);

void f8(s781retdecInstance*,U32,U32,U32);

void s781retdec____wasm_call_ctors(s781retdecInstance*i);

void s781retdec____wasm_apply_data_relocs(s781retdecInstance*i);

U32 s781retdec_func_1(s781retdecInstance*i);

void s781retdec_call_cb(s781retdecInstance*i,U32 l0);

void s781retdecInstantiate(s781retdecInstance* instance, void* resolve(const char* module, const char* name));

void s781retdecFreeInstance(s781retdecInstance* instance);

#endif /* s781retdec_H */

