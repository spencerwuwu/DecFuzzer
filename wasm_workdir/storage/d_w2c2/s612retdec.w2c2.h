#ifndef s612retdec_H
#define s612retdec_H

#include "w2c2_base.h"

typedef struct s612retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s612retdecInstance;

void f0(s612retdecInstance*);

void f1(s612retdecInstance*);

U32 f2(s612retdecInstance*);

void f3(s612retdecInstance*,U32);

U32 f4(s612retdecInstance*,U32,U32,U32);

void f5(s612retdecInstance*,U32,U32,U32,U32,U32);

void f6(s612retdecInstance*,U32);

void f7(s612retdecInstance*,U32,U32,U32);

void f8(s612retdecInstance*,U32,U32,U32);

void s612retdec____wasm_call_ctors(s612retdecInstance*i);

void s612retdec____wasm_apply_data_relocs(s612retdecInstance*i);

U32 s612retdec_func_1(s612retdecInstance*i);

void s612retdec_call_cb(s612retdecInstance*i,U32 l0);

void s612retdecInstantiate(s612retdecInstance* instance, void* resolve(const char* module, const char* name));

void s612retdecFreeInstance(s612retdecInstance* instance);

#endif /* s612retdec_H */

