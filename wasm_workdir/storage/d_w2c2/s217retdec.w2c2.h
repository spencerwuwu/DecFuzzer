#ifndef s217retdec_H
#define s217retdec_H

#include "w2c2_base.h"

typedef struct s217retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s217retdecInstance;

void f0(s217retdecInstance*);

void f1(s217retdecInstance*);

U32 f2(s217retdecInstance*);

void f3(s217retdecInstance*,U32);

U32 f4(s217retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s217retdecInstance*,U32,U32,U32,U32,U32);

void f6(s217retdecInstance*,U32);

void f7(s217retdecInstance*,U32,U32,U32);

void f8(s217retdecInstance*,U32,U32,U32);

void s217retdec____wasm_call_ctors(s217retdecInstance*i);

void s217retdec____wasm_apply_data_relocs(s217retdecInstance*i);

U32 s217retdec_func_1(s217retdecInstance*i);

void s217retdec_call_cb(s217retdecInstance*i,U32 l0);

void s217retdecInstantiate(s217retdecInstance* instance, void* resolve(const char* module, const char* name));

void s217retdecFreeInstance(s217retdecInstance* instance);

#endif /* s217retdec_H */

