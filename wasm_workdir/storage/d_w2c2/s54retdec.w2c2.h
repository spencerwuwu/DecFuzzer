#ifndef s54retdec_H
#define s54retdec_H

#include "w2c2_base.h"

typedef struct s54retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s54retdecInstance;

void f0(s54retdecInstance*);

void f1(s54retdecInstance*);

U32 f2(s54retdecInstance*);

void f3(s54retdecInstance*,U32);

U32 f4(s54retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s54retdecInstance*,U32,U32,U32,U32,U32);

void f6(s54retdecInstance*,U32);

void f7(s54retdecInstance*,U32,U32,U32);

void f8(s54retdecInstance*,U32,U32,U32);

void s54retdec____wasm_call_ctors(s54retdecInstance*i);

void s54retdec____wasm_apply_data_relocs(s54retdecInstance*i);

U32 s54retdec_func_1(s54retdecInstance*i);

void s54retdec_call_cb(s54retdecInstance*i,U32 l0);

void s54retdecInstantiate(s54retdecInstance* instance, void* resolve(const char* module, const char* name));

void s54retdecFreeInstance(s54retdecInstance* instance);

#endif /* s54retdec_H */

