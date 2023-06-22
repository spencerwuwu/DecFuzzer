#ifndef s436retdec_H
#define s436retdec_H

#include "w2c2_base.h"

typedef struct s436retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s436retdecInstance;

void f0(s436retdecInstance*);

void f1(s436retdecInstance*);

U32 f2(s436retdecInstance*);

void f3(s436retdecInstance*,U32);

U32 f4(s436retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s436retdecInstance*,U32,U32,U32,U32,U32);

void f6(s436retdecInstance*,U32);

void f7(s436retdecInstance*,U32,U32,U32);

void f8(s436retdecInstance*,U32,U32,U32);

void s436retdec____wasm_call_ctors(s436retdecInstance*i);

void s436retdec____wasm_apply_data_relocs(s436retdecInstance*i);

U32 s436retdec_func_1(s436retdecInstance*i);

void s436retdec_call_cb(s436retdecInstance*i,U32 l0);

void s436retdecInstantiate(s436retdecInstance* instance, void* resolve(const char* module, const char* name));

void s436retdecFreeInstance(s436retdecInstance* instance);

#endif /* s436retdec_H */

