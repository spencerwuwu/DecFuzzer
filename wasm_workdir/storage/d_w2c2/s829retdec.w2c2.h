#ifndef s829retdec_H
#define s829retdec_H

#include "w2c2_base.h"

typedef struct s829retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s829retdecInstance;

void f0(s829retdecInstance*);

void f1(s829retdecInstance*);

U32 f2(s829retdecInstance*);

void f3(s829retdecInstance*,U32);

U32 f4(s829retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s829retdecInstance*,U32,U32,U32,U32,U32);

void f6(s829retdecInstance*,U32);

void f7(s829retdecInstance*,U32,U32,U32);

void f8(s829retdecInstance*,U32,U32,U32);

void s829retdec____wasm_call_ctors(s829retdecInstance*i);

void s829retdec____wasm_apply_data_relocs(s829retdecInstance*i);

U32 s829retdec_func_1(s829retdecInstance*i);

void s829retdec_call_cb(s829retdecInstance*i,U32 l0);

void s829retdecInstantiate(s829retdecInstance* instance, void* resolve(const char* module, const char* name));

void s829retdecFreeInstance(s829retdecInstance* instance);

#endif /* s829retdec_H */

