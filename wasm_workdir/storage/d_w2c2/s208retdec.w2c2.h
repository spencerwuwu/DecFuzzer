#ifndef s208retdec_H
#define s208retdec_H

#include "w2c2_base.h"

typedef struct s208retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s208retdecInstance;

void f0(s208retdecInstance*);

void f1(s208retdecInstance*);

U32 f2(s208retdecInstance*);

void f3(s208retdecInstance*,U32);

U32 f4(s208retdecInstance*,U32,U32,U32);

void f5(s208retdecInstance*,U32,U32,U32,U32,U32);

void f6(s208retdecInstance*,U32);

void f7(s208retdecInstance*,U32,U32,U32);

void f8(s208retdecInstance*,U32,U32,U32);

void s208retdec____wasm_call_ctors(s208retdecInstance*i);

void s208retdec____wasm_apply_data_relocs(s208retdecInstance*i);

U32 s208retdec_func_1(s208retdecInstance*i);

void s208retdec_call_cb(s208retdecInstance*i,U32 l0);

void s208retdecInstantiate(s208retdecInstance* instance, void* resolve(const char* module, const char* name));

void s208retdecFreeInstance(s208retdecInstance* instance);

#endif /* s208retdec_H */

