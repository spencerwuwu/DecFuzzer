#ifndef s97retdec_H
#define s97retdec_H

#include "w2c2_base.h"

typedef struct s97retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s97retdecInstance;

void f0(s97retdecInstance*);

void f1(s97retdecInstance*);

U32 f2(s97retdecInstance*);

void f3(s97retdecInstance*,U32);

U32 f4(s97retdecInstance*,U32,U32,U32,U32);

void f5(s97retdecInstance*,U32,U32,U32,U32,U32);

void f6(s97retdecInstance*,U32);

void f7(s97retdecInstance*,U32,U32,U32);

void f8(s97retdecInstance*,U32,U32,U32);

void s97retdec____wasm_call_ctors(s97retdecInstance*i);

void s97retdec____wasm_apply_data_relocs(s97retdecInstance*i);

U32 s97retdec_func_1(s97retdecInstance*i);

void s97retdec_call_cb(s97retdecInstance*i,U32 l0);

void s97retdecInstantiate(s97retdecInstance* instance, void* resolve(const char* module, const char* name));

void s97retdecFreeInstance(s97retdecInstance* instance);

#endif /* s97retdec_H */

