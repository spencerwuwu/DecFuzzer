#ifndef s874retdec_H
#define s874retdec_H

#include "w2c2_base.h"

typedef struct s874retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s874retdecInstance;

void f0(s874retdecInstance*);

void f1(s874retdecInstance*);

U32 f2(s874retdecInstance*);

void f3(s874retdecInstance*,U32);

U32 f4(s874retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s874retdecInstance*,U32,U32,U32,U32,U32);

void f6(s874retdecInstance*,U32);

void f7(s874retdecInstance*,U32,U32,U32);

void f8(s874retdecInstance*,U32,U32,U32);

void s874retdec____wasm_call_ctors(s874retdecInstance*i);

void s874retdec____wasm_apply_data_relocs(s874retdecInstance*i);

U32 s874retdec_func_1(s874retdecInstance*i);

void s874retdec_call_cb(s874retdecInstance*i,U32 l0);

void s874retdecInstantiate(s874retdecInstance* instance, void* resolve(const char* module, const char* name));

void s874retdecFreeInstance(s874retdecInstance* instance);

#endif /* s874retdec_H */

