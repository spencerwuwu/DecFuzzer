#ifndef s154retdec_H
#define s154retdec_H

#include "w2c2_base.h"

typedef struct s154retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s154retdecInstance;

void f0(s154retdecInstance*);

void f1(s154retdecInstance*);

U32 f2(s154retdecInstance*);

void f3(s154retdecInstance*,U32);

U32 f4(s154retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s154retdecInstance*,U32,U32,U32,U32,U32);

void f6(s154retdecInstance*,U32);

void f7(s154retdecInstance*,U32,U32,U32);

void f8(s154retdecInstance*,U32,U32,U32);

void s154retdec____wasm_call_ctors(s154retdecInstance*i);

void s154retdec____wasm_apply_data_relocs(s154retdecInstance*i);

U32 s154retdec_func_1(s154retdecInstance*i);

void s154retdec_call_cb(s154retdecInstance*i,U32 l0);

void s154retdecInstantiate(s154retdecInstance* instance, void* resolve(const char* module, const char* name));

void s154retdecFreeInstance(s154retdecInstance* instance);

#endif /* s154retdec_H */

