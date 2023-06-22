#ifndef s805retdec_H
#define s805retdec_H

#include "w2c2_base.h"

typedef struct s805retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s805retdecInstance;

void f0(s805retdecInstance*);

void f1(s805retdecInstance*);

U32 f2(s805retdecInstance*);

void f3(s805retdecInstance*,U32);

U32 f4(s805retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s805retdecInstance*,U32,U32,U32,U32,U32);

void f6(s805retdecInstance*,U32);

void f7(s805retdecInstance*,U32,U32,U32);

void f8(s805retdecInstance*,U32,U32,U32);

void s805retdec____wasm_call_ctors(s805retdecInstance*i);

void s805retdec____wasm_apply_data_relocs(s805retdecInstance*i);

U32 s805retdec_func_1(s805retdecInstance*i);

void s805retdec_call_cb(s805retdecInstance*i,U32 l0);

void s805retdecInstantiate(s805retdecInstance* instance, void* resolve(const char* module, const char* name));

void s805retdecFreeInstance(s805retdecInstance* instance);

#endif /* s805retdec_H */

