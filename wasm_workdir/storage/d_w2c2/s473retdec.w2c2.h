#ifndef s473retdec_H
#define s473retdec_H

#include "w2c2_base.h"

typedef struct s473retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s473retdecInstance;

void f0(s473retdecInstance*);

void f1(s473retdecInstance*);

U32 f2(s473retdecInstance*);

void f3(s473retdecInstance*,U32);

U32 f4(s473retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s473retdecInstance*,U32,U32,U32,U32,U32);

void f6(s473retdecInstance*,U32);

void f7(s473retdecInstance*,U32,U32,U32);

void f8(s473retdecInstance*,U32,U32,U32);

void s473retdec____wasm_call_ctors(s473retdecInstance*i);

void s473retdec____wasm_apply_data_relocs(s473retdecInstance*i);

U32 s473retdec_func_1(s473retdecInstance*i);

void s473retdec_call_cb(s473retdecInstance*i,U32 l0);

void s473retdecInstantiate(s473retdecInstance* instance, void* resolve(const char* module, const char* name));

void s473retdecFreeInstance(s473retdecInstance* instance);

#endif /* s473retdec_H */

