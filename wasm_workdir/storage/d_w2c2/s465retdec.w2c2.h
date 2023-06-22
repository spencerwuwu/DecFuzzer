#ifndef s465retdec_H
#define s465retdec_H

#include "w2c2_base.h"

typedef struct s465retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s465retdecInstance;

void f0(s465retdecInstance*);

void f1(s465retdecInstance*);

U32 f2(s465retdecInstance*);

void f3(s465retdecInstance*,U32);

U32 f4(s465retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s465retdecInstance*,U32,U32,U32,U32,U32);

void f6(s465retdecInstance*,U32);

void f7(s465retdecInstance*,U32,U32,U32);

void f8(s465retdecInstance*,U32,U32,U32);

void s465retdec____wasm_call_ctors(s465retdecInstance*i);

void s465retdec____wasm_apply_data_relocs(s465retdecInstance*i);

U32 s465retdec_func_1(s465retdecInstance*i);

void s465retdec_call_cb(s465retdecInstance*i,U32 l0);

void s465retdecInstantiate(s465retdecInstance* instance, void* resolve(const char* module, const char* name));

void s465retdecFreeInstance(s465retdecInstance* instance);

#endif /* s465retdec_H */

