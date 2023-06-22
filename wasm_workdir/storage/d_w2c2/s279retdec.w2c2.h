#ifndef s279retdec_H
#define s279retdec_H

#include "w2c2_base.h"

typedef struct s279retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s279retdecInstance;

void f0(s279retdecInstance*);

void f1(s279retdecInstance*);

U32 f2(s279retdecInstance*);

void f3(s279retdecInstance*,U32);

U32 f4(s279retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s279retdecInstance*,U32,U32,U32,U32,U32);

void f6(s279retdecInstance*,U32);

void f7(s279retdecInstance*,U32,U32,U32);

void f8(s279retdecInstance*,U32,U32,U32);

void s279retdec____wasm_call_ctors(s279retdecInstance*i);

void s279retdec____wasm_apply_data_relocs(s279retdecInstance*i);

U32 s279retdec_func_1(s279retdecInstance*i);

void s279retdec_call_cb(s279retdecInstance*i,U32 l0);

void s279retdecInstantiate(s279retdecInstance* instance, void* resolve(const char* module, const char* name));

void s279retdecFreeInstance(s279retdecInstance* instance);

#endif /* s279retdec_H */

