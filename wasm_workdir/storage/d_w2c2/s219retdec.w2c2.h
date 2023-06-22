#ifndef s219retdec_H
#define s219retdec_H

#include "w2c2_base.h"

typedef struct s219retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s219retdecInstance;

void f0(s219retdecInstance*);

void f1(s219retdecInstance*);

U32 f2(s219retdecInstance*);

void f3(s219retdecInstance*,U32);

U32 f4(s219retdecInstance*,U32,U32,U32,U32,U32);

void f5(s219retdecInstance*,U32,U32,U32,U32,U32);

void f6(s219retdecInstance*,U32);

void f7(s219retdecInstance*,U32,U32,U32);

void f8(s219retdecInstance*,U32,U32,U32);

void s219retdec____wasm_call_ctors(s219retdecInstance*i);

void s219retdec____wasm_apply_data_relocs(s219retdecInstance*i);

U32 s219retdec_func_1(s219retdecInstance*i);

void s219retdec_call_cb(s219retdecInstance*i,U32 l0);

void s219retdecInstantiate(s219retdecInstance* instance, void* resolve(const char* module, const char* name));

void s219retdecFreeInstance(s219retdecInstance* instance);

#endif /* s219retdec_H */

