#ifndef s481retdec_H
#define s481retdec_H

#include "w2c2_base.h"

typedef struct s481retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s481retdecInstance;

void f0(s481retdecInstance*);

void f1(s481retdecInstance*);

U32 f2(s481retdecInstance*);

void f3(s481retdecInstance*,U32);

U32 f4(s481retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s481retdecInstance*,U32,U32,U32,U32,U32);

void f6(s481retdecInstance*,U32);

void f7(s481retdecInstance*,U32,U32,U32);

void f8(s481retdecInstance*,U32,U32,U32);

void s481retdec____wasm_call_ctors(s481retdecInstance*i);

void s481retdec____wasm_apply_data_relocs(s481retdecInstance*i);

U32 s481retdec_func_1(s481retdecInstance*i);

void s481retdec_call_cb(s481retdecInstance*i,U32 l0);

void s481retdecInstantiate(s481retdecInstance* instance, void* resolve(const char* module, const char* name));

void s481retdecFreeInstance(s481retdecInstance* instance);

#endif /* s481retdec_H */

