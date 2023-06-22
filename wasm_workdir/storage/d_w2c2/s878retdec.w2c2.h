#ifndef s878retdec_H
#define s878retdec_H

#include "w2c2_base.h"

typedef struct s878retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s878retdecInstance;

void f0(s878retdecInstance*);

void f1(s878retdecInstance*);

U32 f2(s878retdecInstance*);

void f3(s878retdecInstance*,U32);

U32 f4(s878retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s878retdecInstance*,U32,U32,U32,U32,U32);

void f6(s878retdecInstance*,U32);

void f7(s878retdecInstance*,U32,U32,U32);

void f8(s878retdecInstance*,U32,U32,U32);

void s878retdec____wasm_call_ctors(s878retdecInstance*i);

void s878retdec____wasm_apply_data_relocs(s878retdecInstance*i);

U32 s878retdec_func_1(s878retdecInstance*i);

void s878retdec_call_cb(s878retdecInstance*i,U32 l0);

void s878retdecInstantiate(s878retdecInstance* instance, void* resolve(const char* module, const char* name));

void s878retdecFreeInstance(s878retdecInstance* instance);

#endif /* s878retdec_H */

