#ifndef s333retdec_H
#define s333retdec_H

#include "w2c2_base.h"

typedef struct s333retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s333retdecInstance;

void f0(s333retdecInstance*);

void f1(s333retdecInstance*);

U32 f2(s333retdecInstance*);

void f3(s333retdecInstance*,U32);

U32 f4(s333retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s333retdecInstance*,U32,U32,U32,U32,U32);

void f6(s333retdecInstance*,U32);

void f7(s333retdecInstance*,U32,U32,U32);

void f8(s333retdecInstance*,U32,U32,U32);

void s333retdec____wasm_call_ctors(s333retdecInstance*i);

void s333retdec____wasm_apply_data_relocs(s333retdecInstance*i);

U32 s333retdec_func_1(s333retdecInstance*i);

void s333retdec_call_cb(s333retdecInstance*i,U32 l0);

void s333retdecInstantiate(s333retdecInstance* instance, void* resolve(const char* module, const char* name));

void s333retdecFreeInstance(s333retdecInstance* instance);

#endif /* s333retdec_H */

