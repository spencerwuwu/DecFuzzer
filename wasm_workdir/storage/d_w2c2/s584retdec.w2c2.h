#ifndef s584retdec_H
#define s584retdec_H

#include "w2c2_base.h"

typedef struct s584retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s584retdecInstance;

void f0(s584retdecInstance*);

void f1(s584retdecInstance*);

U32 f2(s584retdecInstance*);

void f3(s584retdecInstance*,U32);

U32 f4(s584retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s584retdecInstance*,U32,U32,U32,U32,U32);

void f6(s584retdecInstance*,U32);

void f7(s584retdecInstance*,U32,U32,U32);

void f8(s584retdecInstance*,U32,U32,U32);

void s584retdec____wasm_call_ctors(s584retdecInstance*i);

void s584retdec____wasm_apply_data_relocs(s584retdecInstance*i);

U32 s584retdec_func_1(s584retdecInstance*i);

void s584retdec_call_cb(s584retdecInstance*i,U32 l0);

void s584retdecInstantiate(s584retdecInstance* instance, void* resolve(const char* module, const char* name));

void s584retdecFreeInstance(s584retdecInstance* instance);

#endif /* s584retdec_H */

