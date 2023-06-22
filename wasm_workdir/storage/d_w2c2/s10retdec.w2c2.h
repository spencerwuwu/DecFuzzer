#ifndef s10retdec_H
#define s10retdec_H

#include "w2c2_base.h"

typedef struct s10retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s10retdecInstance;

void f0(s10retdecInstance*);

void f1(s10retdecInstance*);

U32 f2(s10retdecInstance*);

void f3(s10retdecInstance*,U32);

U32 f4(s10retdecInstance*,U32,U32,U32,U32,U32);

void f5(s10retdecInstance*,U32,U32,U32,U32,U32);

void f6(s10retdecInstance*,U32);

void f7(s10retdecInstance*,U32,U32,U32);

void f8(s10retdecInstance*,U32,U32,U32);

void s10retdec____wasm_call_ctors(s10retdecInstance*i);

void s10retdec____wasm_apply_data_relocs(s10retdecInstance*i);

U32 s10retdec_func_1(s10retdecInstance*i);

void s10retdec_call_cb(s10retdecInstance*i,U32 l0);

void s10retdecInstantiate(s10retdecInstance* instance, void* resolve(const char* module, const char* name));

void s10retdecFreeInstance(s10retdecInstance* instance);

#endif /* s10retdec_H */

