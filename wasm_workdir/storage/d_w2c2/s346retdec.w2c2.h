#ifndef s346retdec_H
#define s346retdec_H

#include "w2c2_base.h"

typedef struct s346retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s346retdecInstance;

void f0(s346retdecInstance*);

void f1(s346retdecInstance*);

U32 f2(s346retdecInstance*);

void f3(s346retdecInstance*,U32);

U32 f4(s346retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s346retdecInstance*,U32,U32,U32,U32,U32);

void f6(s346retdecInstance*,U32);

void f7(s346retdecInstance*,U32,U32,U32);

void f8(s346retdecInstance*,U32,U32,U32);

void s346retdec____wasm_call_ctors(s346retdecInstance*i);

void s346retdec____wasm_apply_data_relocs(s346retdecInstance*i);

U32 s346retdec_func_1(s346retdecInstance*i);

void s346retdec_call_cb(s346retdecInstance*i,U32 l0);

void s346retdecInstantiate(s346retdecInstance* instance, void* resolve(const char* module, const char* name));

void s346retdecFreeInstance(s346retdecInstance* instance);

#endif /* s346retdec_H */

