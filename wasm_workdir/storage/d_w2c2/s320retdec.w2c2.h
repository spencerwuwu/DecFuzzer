#ifndef s320retdec_H
#define s320retdec_H

#include "w2c2_base.h"

typedef struct s320retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s320retdecInstance;

void f0(s320retdecInstance*);

void f1(s320retdecInstance*);

U32 f2(s320retdecInstance*);

void f3(s320retdecInstance*,U32);

U32 f4(s320retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s320retdecInstance*,U32,U32,U32,U32,U32);

void f6(s320retdecInstance*,U32);

void f7(s320retdecInstance*,U32,U32,U32);

void f8(s320retdecInstance*,U32,U32,U32);

void s320retdec____wasm_call_ctors(s320retdecInstance*i);

void s320retdec____wasm_apply_data_relocs(s320retdecInstance*i);

U32 s320retdec_func_1(s320retdecInstance*i);

void s320retdec_call_cb(s320retdecInstance*i,U32 l0);

void s320retdecInstantiate(s320retdecInstance* instance, void* resolve(const char* module, const char* name));

void s320retdecFreeInstance(s320retdecInstance* instance);

#endif /* s320retdec_H */

