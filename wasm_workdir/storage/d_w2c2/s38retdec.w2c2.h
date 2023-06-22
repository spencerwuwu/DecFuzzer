#ifndef s38retdec_H
#define s38retdec_H

#include "w2c2_base.h"

typedef struct s38retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s38retdecInstance;

void f0(s38retdecInstance*);

void f1(s38retdecInstance*);

U32 f2(s38retdecInstance*);

void f3(s38retdecInstance*,U32);

U32 f4(s38retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s38retdecInstance*,U32,U32,U32,U32,U32);

void f6(s38retdecInstance*,U32);

void f7(s38retdecInstance*,U32,U32,U32);

void f8(s38retdecInstance*,U32,U32,U32);

void s38retdec____wasm_call_ctors(s38retdecInstance*i);

void s38retdec____wasm_apply_data_relocs(s38retdecInstance*i);

U32 s38retdec_func_1(s38retdecInstance*i);

void s38retdec_call_cb(s38retdecInstance*i,U32 l0);

void s38retdecInstantiate(s38retdecInstance* instance, void* resolve(const char* module, const char* name));

void s38retdecFreeInstance(s38retdecInstance* instance);

#endif /* s38retdec_H */

