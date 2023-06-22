#ifndef s5retdec_H
#define s5retdec_H

#include "w2c2_base.h"

typedef struct s5retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s5retdecInstance;

void f0(s5retdecInstance*);

void f1(s5retdecInstance*);

U32 f2(s5retdecInstance*);

void f3(s5retdecInstance*,U32);

U32 f4(s5retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s5retdecInstance*,U32,U32,U32,U32,U32);

void f6(s5retdecInstance*,U32);

void f7(s5retdecInstance*,U32,U32,U32);

void f8(s5retdecInstance*,U32,U32,U32);

void s5retdec____wasm_call_ctors(s5retdecInstance*i);

void s5retdec____wasm_apply_data_relocs(s5retdecInstance*i);

U32 s5retdec_func_1(s5retdecInstance*i);

void s5retdec_call_cb(s5retdecInstance*i,U32 l0);

void s5retdecInstantiate(s5retdecInstance* instance, void* resolve(const char* module, const char* name));

void s5retdecFreeInstance(s5retdecInstance* instance);

#endif /* s5retdec_H */

