#ifndef s815retdec_H
#define s815retdec_H

#include "w2c2_base.h"

typedef struct s815retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s815retdecInstance;

void f0(s815retdecInstance*);

void f1(s815retdecInstance*);

U32 f2(s815retdecInstance*);

void f3(s815retdecInstance*,U32);

U32 f4(s815retdecInstance*,U32,U32,U32);

void f5(s815retdecInstance*,U32,U32,U32,U32,U32);

void f6(s815retdecInstance*,U32);

void f7(s815retdecInstance*,U32,U32,U32);

void f8(s815retdecInstance*,U32,U32,U32);

void s815retdec____wasm_call_ctors(s815retdecInstance*i);

void s815retdec____wasm_apply_data_relocs(s815retdecInstance*i);

U32 s815retdec_func_1(s815retdecInstance*i);

void s815retdec_call_cb(s815retdecInstance*i,U32 l0);

void s815retdecInstantiate(s815retdecInstance* instance, void* resolve(const char* module, const char* name));

void s815retdecFreeInstance(s815retdecInstance* instance);

#endif /* s815retdec_H */

