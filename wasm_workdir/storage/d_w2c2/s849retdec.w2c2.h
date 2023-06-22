#ifndef s849retdec_H
#define s849retdec_H

#include "w2c2_base.h"

typedef struct s849retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s849retdecInstance;

void f0(s849retdecInstance*);

void f1(s849retdecInstance*);

U32 f2(s849retdecInstance*);

void f3(s849retdecInstance*,U32);

U32 f4(s849retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s849retdecInstance*,U32,U32,U32,U32,U32);

void f6(s849retdecInstance*,U32);

void f7(s849retdecInstance*,U32,U32,U32);

void f8(s849retdecInstance*,U32,U32,U32);

void s849retdec____wasm_call_ctors(s849retdecInstance*i);

void s849retdec____wasm_apply_data_relocs(s849retdecInstance*i);

U32 s849retdec_func_1(s849retdecInstance*i);

void s849retdec_call_cb(s849retdecInstance*i,U32 l0);

void s849retdecInstantiate(s849retdecInstance* instance, void* resolve(const char* module, const char* name));

void s849retdecFreeInstance(s849retdecInstance* instance);

#endif /* s849retdec_H */

