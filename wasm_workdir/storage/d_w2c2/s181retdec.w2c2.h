#ifndef s181retdec_H
#define s181retdec_H

#include "w2c2_base.h"

typedef struct s181retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s181retdecInstance;

void f0(s181retdecInstance*);

void f1(s181retdecInstance*);

U32 f2(s181retdecInstance*);

void f3(s181retdecInstance*,U32);

U32 f4(s181retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s181retdecInstance*,U32,U32,U32,U32,U32);

void f6(s181retdecInstance*,U32);

void f7(s181retdecInstance*,U32,U32,U32);

void f8(s181retdecInstance*,U32,U32,U32);

void s181retdec____wasm_call_ctors(s181retdecInstance*i);

void s181retdec____wasm_apply_data_relocs(s181retdecInstance*i);

U32 s181retdec_func_1(s181retdecInstance*i);

void s181retdec_call_cb(s181retdecInstance*i,U32 l0);

void s181retdecInstantiate(s181retdecInstance* instance, void* resolve(const char* module, const char* name));

void s181retdecFreeInstance(s181retdecInstance* instance);

#endif /* s181retdec_H */

