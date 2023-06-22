#ifndef s867retdec_H
#define s867retdec_H

#include "w2c2_base.h"

typedef struct s867retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s867retdecInstance;

void f0(s867retdecInstance*);

void f1(s867retdecInstance*);

U32 f2(s867retdecInstance*);

void f3(s867retdecInstance*,U32);

U32 f4(s867retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s867retdecInstance*,U32,U32,U32,U32,U32);

void f6(s867retdecInstance*,U32);

void f7(s867retdecInstance*,U32,U32,U32);

void f8(s867retdecInstance*,U32,U32,U32);

void s867retdec____wasm_call_ctors(s867retdecInstance*i);

void s867retdec____wasm_apply_data_relocs(s867retdecInstance*i);

U32 s867retdec_func_1(s867retdecInstance*i);

void s867retdec_call_cb(s867retdecInstance*i,U32 l0);

void s867retdecInstantiate(s867retdecInstance* instance, void* resolve(const char* module, const char* name));

void s867retdecFreeInstance(s867retdecInstance* instance);

#endif /* s867retdec_H */

