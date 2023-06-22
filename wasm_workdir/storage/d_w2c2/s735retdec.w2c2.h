#ifndef s735retdec_H
#define s735retdec_H

#include "w2c2_base.h"

typedef struct s735retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s735retdecInstance;

void f0(s735retdecInstance*);

void f1(s735retdecInstance*);

U32 f2(s735retdecInstance*);

void f3(s735retdecInstance*,U32);

U32 f4(s735retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s735retdecInstance*,U32,U32,U32,U32,U32);

void f6(s735retdecInstance*,U32);

void f7(s735retdecInstance*,U32,U32,U32);

void f8(s735retdecInstance*,U32,U32,U32);

void s735retdec____wasm_call_ctors(s735retdecInstance*i);

void s735retdec____wasm_apply_data_relocs(s735retdecInstance*i);

U32 s735retdec_func_1(s735retdecInstance*i);

void s735retdec_call_cb(s735retdecInstance*i,U32 l0);

void s735retdecInstantiate(s735retdecInstance* instance, void* resolve(const char* module, const char* name));

void s735retdecFreeInstance(s735retdecInstance* instance);

#endif /* s735retdec_H */

