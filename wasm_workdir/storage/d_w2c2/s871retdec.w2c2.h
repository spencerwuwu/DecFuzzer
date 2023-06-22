#ifndef s871retdec_H
#define s871retdec_H

#include "w2c2_base.h"

typedef struct s871retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s871retdecInstance;

void f0(s871retdecInstance*);

void f1(s871retdecInstance*);

U32 f2(s871retdecInstance*);

void f3(s871retdecInstance*,U32);

U32 f4(s871retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s871retdecInstance*,U32,U32,U32,U32,U32);

void f6(s871retdecInstance*,U32);

void f7(s871retdecInstance*,U32,U32,U32);

void f8(s871retdecInstance*,U32,U32,U32);

void s871retdec____wasm_call_ctors(s871retdecInstance*i);

void s871retdec____wasm_apply_data_relocs(s871retdecInstance*i);

U32 s871retdec_func_1(s871retdecInstance*i);

void s871retdec_call_cb(s871retdecInstance*i,U32 l0);

void s871retdecInstantiate(s871retdecInstance* instance, void* resolve(const char* module, const char* name));

void s871retdecFreeInstance(s871retdecInstance* instance);

#endif /* s871retdec_H */

