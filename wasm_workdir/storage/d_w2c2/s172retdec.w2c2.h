#ifndef s172retdec_H
#define s172retdec_H

#include "w2c2_base.h"

typedef struct s172retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s172retdecInstance;

void f0(s172retdecInstance*);

void f1(s172retdecInstance*);

U32 f2(s172retdecInstance*);

void f3(s172retdecInstance*,U32);

U32 f4(s172retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s172retdecInstance*,U32,U32,U32,U32,U32);

void f6(s172retdecInstance*,U32);

void f7(s172retdecInstance*,U32,U32,U32);

void f8(s172retdecInstance*,U32,U32,U32);

void s172retdec____wasm_call_ctors(s172retdecInstance*i);

void s172retdec____wasm_apply_data_relocs(s172retdecInstance*i);

U32 s172retdec_func_1(s172retdecInstance*i);

void s172retdec_call_cb(s172retdecInstance*i,U32 l0);

void s172retdecInstantiate(s172retdecInstance* instance, void* resolve(const char* module, const char* name));

void s172retdecFreeInstance(s172retdecInstance* instance);

#endif /* s172retdec_H */

