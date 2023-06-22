#ifndef s839retdec_H
#define s839retdec_H

#include "w2c2_base.h"

typedef struct s839retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s839retdecInstance;

void f0(s839retdecInstance*);

void f1(s839retdecInstance*);

U32 f2(s839retdecInstance*);

void f3(s839retdecInstance*,U32);

U32 f4(s839retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s839retdecInstance*,U32,U32,U32,U32,U32);

void f6(s839retdecInstance*,U32);

void f7(s839retdecInstance*,U32,U32,U32);

void f8(s839retdecInstance*,U32,U32,U32);

void s839retdec____wasm_call_ctors(s839retdecInstance*i);

void s839retdec____wasm_apply_data_relocs(s839retdecInstance*i);

U32 s839retdec_func_1(s839retdecInstance*i);

void s839retdec_call_cb(s839retdecInstance*i,U32 l0);

void s839retdecInstantiate(s839retdecInstance* instance, void* resolve(const char* module, const char* name));

void s839retdecFreeInstance(s839retdecInstance* instance);

#endif /* s839retdec_H */

