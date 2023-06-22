#ifndef s743retdec_H
#define s743retdec_H

#include "w2c2_base.h"

typedef struct s743retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s743retdecInstance;

void f0(s743retdecInstance*);

void f1(s743retdecInstance*);

U32 f2(s743retdecInstance*);

void f3(s743retdecInstance*,U32);

U32 f4(s743retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s743retdecInstance*,U32,U32,U32,U32,U32);

void f6(s743retdecInstance*,U32);

void f7(s743retdecInstance*,U32,U32,U32);

void f8(s743retdecInstance*,U32,U32,U32);

void s743retdec____wasm_call_ctors(s743retdecInstance*i);

void s743retdec____wasm_apply_data_relocs(s743retdecInstance*i);

U32 s743retdec_func_1(s743retdecInstance*i);

void s743retdec_call_cb(s743retdecInstance*i,U32 l0);

void s743retdecInstantiate(s743retdecInstance* instance, void* resolve(const char* module, const char* name));

void s743retdecFreeInstance(s743retdecInstance* instance);

#endif /* s743retdec_H */

