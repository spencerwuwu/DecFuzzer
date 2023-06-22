#ifndef s325retdec_H
#define s325retdec_H

#include "w2c2_base.h"

typedef struct s325retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s325retdecInstance;

void f0(s325retdecInstance*);

void f1(s325retdecInstance*);

U32 f2(s325retdecInstance*);

void f3(s325retdecInstance*,U32);

U32 f4(s325retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s325retdecInstance*,U32,U32,U32,U32,U32);

void f6(s325retdecInstance*,U32);

void f7(s325retdecInstance*,U32,U32,U32);

void f8(s325retdecInstance*,U32,U32,U32);

void s325retdec____wasm_call_ctors(s325retdecInstance*i);

void s325retdec____wasm_apply_data_relocs(s325retdecInstance*i);

U32 s325retdec_func_1(s325retdecInstance*i);

void s325retdec_call_cb(s325retdecInstance*i,U32 l0);

void s325retdecInstantiate(s325retdecInstance* instance, void* resolve(const char* module, const char* name));

void s325retdecFreeInstance(s325retdecInstance* instance);

#endif /* s325retdec_H */

