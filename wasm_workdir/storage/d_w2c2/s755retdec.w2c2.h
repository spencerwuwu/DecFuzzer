#ifndef s755retdec_H
#define s755retdec_H

#include "w2c2_base.h"

typedef struct s755retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s755retdecInstance;

void f0(s755retdecInstance*);

void f1(s755retdecInstance*);

U32 f2(s755retdecInstance*);

void f3(s755retdecInstance*,U32);

U32 f4(s755retdecInstance*,U32,U32,U32,U32);

void f5(s755retdecInstance*,U32,U32,U32,U32,U32);

void f6(s755retdecInstance*,U32);

void f7(s755retdecInstance*,U32,U32,U32);

void f8(s755retdecInstance*,U32,U32,U32);

void s755retdec____wasm_call_ctors(s755retdecInstance*i);

void s755retdec____wasm_apply_data_relocs(s755retdecInstance*i);

U32 s755retdec_func_1(s755retdecInstance*i);

void s755retdec_call_cb(s755retdecInstance*i,U32 l0);

void s755retdecInstantiate(s755retdecInstance* instance, void* resolve(const char* module, const char* name));

void s755retdecFreeInstance(s755retdecInstance* instance);

#endif /* s755retdec_H */

