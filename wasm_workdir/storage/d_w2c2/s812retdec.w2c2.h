#ifndef s812retdec_H
#define s812retdec_H

#include "w2c2_base.h"

typedef struct s812retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s812retdecInstance;

void f0(s812retdecInstance*);

void f1(s812retdecInstance*);

U32 f2(s812retdecInstance*);

void f3(s812retdecInstance*,U32);

U32 f4(s812retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s812retdecInstance*,U32,U32,U32,U32,U32);

void f6(s812retdecInstance*,U32);

void f7(s812retdecInstance*,U32,U32,U32);

void f8(s812retdecInstance*,U32,U32,U32);

void s812retdec____wasm_call_ctors(s812retdecInstance*i);

void s812retdec____wasm_apply_data_relocs(s812retdecInstance*i);

U32 s812retdec_func_1(s812retdecInstance*i);

void s812retdec_call_cb(s812retdecInstance*i,U32 l0);

void s812retdecInstantiate(s812retdecInstance* instance, void* resolve(const char* module, const char* name));

void s812retdecFreeInstance(s812retdecInstance* instance);

#endif /* s812retdec_H */

