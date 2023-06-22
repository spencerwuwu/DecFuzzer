#ifndef s429retdec_H
#define s429retdec_H

#include "w2c2_base.h"

typedef struct s429retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s429retdecInstance;

void f0(s429retdecInstance*);

void f1(s429retdecInstance*);

U32 f2(s429retdecInstance*);

void f3(s429retdecInstance*,U32);

U32 f4(s429retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s429retdecInstance*,U32,U32,U32,U32,U32);

void f6(s429retdecInstance*,U32);

void f7(s429retdecInstance*,U32,U32,U32);

void f8(s429retdecInstance*,U32,U32,U32);

void s429retdec____wasm_call_ctors(s429retdecInstance*i);

void s429retdec____wasm_apply_data_relocs(s429retdecInstance*i);

U32 s429retdec_func_1(s429retdecInstance*i);

void s429retdec_call_cb(s429retdecInstance*i,U32 l0);

void s429retdecInstantiate(s429retdecInstance* instance, void* resolve(const char* module, const char* name));

void s429retdecFreeInstance(s429retdecInstance* instance);

#endif /* s429retdec_H */

