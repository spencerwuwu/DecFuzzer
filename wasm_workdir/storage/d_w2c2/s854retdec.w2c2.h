#ifndef s854retdec_H
#define s854retdec_H

#include "w2c2_base.h"

typedef struct s854retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s854retdecInstance;

void f0(s854retdecInstance*);

void f1(s854retdecInstance*);

U32 f2(s854retdecInstance*);

void f3(s854retdecInstance*,U32);

U32 f4(s854retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s854retdecInstance*,U32,U32,U32,U32,U32);

void f6(s854retdecInstance*,U32);

void f7(s854retdecInstance*,U32,U32,U32);

void f8(s854retdecInstance*,U32,U32,U32);

void s854retdec____wasm_call_ctors(s854retdecInstance*i);

void s854retdec____wasm_apply_data_relocs(s854retdecInstance*i);

U32 s854retdec_func_1(s854retdecInstance*i);

void s854retdec_call_cb(s854retdecInstance*i,U32 l0);

void s854retdecInstantiate(s854retdecInstance* instance, void* resolve(const char* module, const char* name));

void s854retdecFreeInstance(s854retdecInstance* instance);

#endif /* s854retdec_H */

