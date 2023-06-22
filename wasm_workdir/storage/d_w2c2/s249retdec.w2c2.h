#ifndef s249retdec_H
#define s249retdec_H

#include "w2c2_base.h"

typedef struct s249retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s249retdecInstance;

void f0(s249retdecInstance*);

void f1(s249retdecInstance*);

U32 f2(s249retdecInstance*);

void f3(s249retdecInstance*,U32);

U32 f4(s249retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s249retdecInstance*,U32,U32,U32,U32,U32);

void f6(s249retdecInstance*,U32);

void f7(s249retdecInstance*,U32,U32,U32);

void f8(s249retdecInstance*,U32,U32,U32);

void s249retdec____wasm_call_ctors(s249retdecInstance*i);

void s249retdec____wasm_apply_data_relocs(s249retdecInstance*i);

U32 s249retdec_func_1(s249retdecInstance*i);

void s249retdec_call_cb(s249retdecInstance*i,U32 l0);

void s249retdecInstantiate(s249retdecInstance* instance, void* resolve(const char* module, const char* name));

void s249retdecFreeInstance(s249retdecInstance* instance);

#endif /* s249retdec_H */

