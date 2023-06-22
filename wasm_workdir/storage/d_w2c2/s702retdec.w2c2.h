#ifndef s702retdec_H
#define s702retdec_H

#include "w2c2_base.h"

typedef struct s702retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s702retdecInstance;

void f0(s702retdecInstance*);

void f1(s702retdecInstance*);

U32 f2(s702retdecInstance*);

void f3(s702retdecInstance*,U32);

U32 f4(s702retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s702retdecInstance*,U32,U32,U32,U32,U32);

void f6(s702retdecInstance*,U32);

void f7(s702retdecInstance*,U32,U32,U32);

void f8(s702retdecInstance*,U32,U32,U32);

void s702retdec____wasm_call_ctors(s702retdecInstance*i);

void s702retdec____wasm_apply_data_relocs(s702retdecInstance*i);

U32 s702retdec_func_1(s702retdecInstance*i);

void s702retdec_call_cb(s702retdecInstance*i,U32 l0);

void s702retdecInstantiate(s702retdecInstance* instance, void* resolve(const char* module, const char* name));

void s702retdecFreeInstance(s702retdecInstance* instance);

#endif /* s702retdec_H */

