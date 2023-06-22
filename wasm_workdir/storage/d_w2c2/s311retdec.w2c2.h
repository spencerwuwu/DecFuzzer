#ifndef s311retdec_H
#define s311retdec_H

#include "w2c2_base.h"

typedef struct s311retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s311retdecInstance;

void f0(s311retdecInstance*);

void f1(s311retdecInstance*);

U32 f2(s311retdecInstance*);

void f3(s311retdecInstance*,U32);

U32 f4(s311retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s311retdecInstance*,U32,U32,U32,U32,U32);

void f6(s311retdecInstance*,U32);

void f7(s311retdecInstance*,U32,U32,U32);

void f8(s311retdecInstance*,U32,U32,U32);

void s311retdec____wasm_call_ctors(s311retdecInstance*i);

void s311retdec____wasm_apply_data_relocs(s311retdecInstance*i);

U32 s311retdec_func_1(s311retdecInstance*i);

void s311retdec_call_cb(s311retdecInstance*i,U32 l0);

void s311retdecInstantiate(s311retdecInstance* instance, void* resolve(const char* module, const char* name));

void s311retdecFreeInstance(s311retdecInstance* instance);

#endif /* s311retdec_H */

