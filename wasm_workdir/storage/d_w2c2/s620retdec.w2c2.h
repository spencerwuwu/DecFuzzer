#ifndef s620retdec_H
#define s620retdec_H

#include "w2c2_base.h"

typedef struct s620retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s620retdecInstance;

void f0(s620retdecInstance*);

void f1(s620retdecInstance*);

U32 f2(s620retdecInstance*);

void f3(s620retdecInstance*,U32);

U32 f4(s620retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s620retdecInstance*,U32,U32,U32,U32,U32);

void f6(s620retdecInstance*,U32);

void f7(s620retdecInstance*,U32,U32,U32);

void f8(s620retdecInstance*,U32,U32,U32);

void s620retdec____wasm_call_ctors(s620retdecInstance*i);

void s620retdec____wasm_apply_data_relocs(s620retdecInstance*i);

U32 s620retdec_func_1(s620retdecInstance*i);

void s620retdec_call_cb(s620retdecInstance*i,U32 l0);

void s620retdecInstantiate(s620retdecInstance* instance, void* resolve(const char* module, const char* name));

void s620retdecFreeInstance(s620retdecInstance* instance);

#endif /* s620retdec_H */

