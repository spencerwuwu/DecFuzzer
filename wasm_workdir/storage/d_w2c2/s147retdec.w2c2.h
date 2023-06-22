#ifndef s147retdec_H
#define s147retdec_H

#include "w2c2_base.h"

typedef struct s147retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s147retdecInstance;

void f0(s147retdecInstance*);

void f1(s147retdecInstance*);

U32 f2(s147retdecInstance*);

void f3(s147retdecInstance*,U32);

U32 f4(s147retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s147retdecInstance*,U32,U32,U32,U32,U32);

void f6(s147retdecInstance*,U32);

void f7(s147retdecInstance*,U32,U32,U32);

void f8(s147retdecInstance*,U32,U32,U32);

void s147retdec____wasm_call_ctors(s147retdecInstance*i);

void s147retdec____wasm_apply_data_relocs(s147retdecInstance*i);

U32 s147retdec_func_1(s147retdecInstance*i);

void s147retdec_call_cb(s147retdecInstance*i,U32 l0);

void s147retdecInstantiate(s147retdecInstance* instance, void* resolve(const char* module, const char* name));

void s147retdecFreeInstance(s147retdecInstance* instance);

#endif /* s147retdec_H */

