#ifndef s381retdec_H
#define s381retdec_H

#include "w2c2_base.h"

typedef struct s381retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s381retdecInstance;

void f0(s381retdecInstance*);

void f1(s381retdecInstance*);

U32 f2(s381retdecInstance*);

void f3(s381retdecInstance*,U32);

U32 f4(s381retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s381retdecInstance*,U32,U32,U32,U32,U32);

void f6(s381retdecInstance*,U32);

void f7(s381retdecInstance*,U32,U32,U32);

void f8(s381retdecInstance*,U32,U32,U32);

void s381retdec____wasm_call_ctors(s381retdecInstance*i);

void s381retdec____wasm_apply_data_relocs(s381retdecInstance*i);

U32 s381retdec_func_1(s381retdecInstance*i);

void s381retdec_call_cb(s381retdecInstance*i,U32 l0);

void s381retdecInstantiate(s381retdecInstance* instance, void* resolve(const char* module, const char* name));

void s381retdecFreeInstance(s381retdecInstance* instance);

#endif /* s381retdec_H */

