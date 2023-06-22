#ifndef s353retdec_H
#define s353retdec_H

#include "w2c2_base.h"

typedef struct s353retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s353retdecInstance;

void f0(s353retdecInstance*);

void f1(s353retdecInstance*);

U32 f2(s353retdecInstance*);

void f3(s353retdecInstance*,U32);

U32 f4(s353retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s353retdecInstance*,U32,U32,U32,U32,U32);

void f6(s353retdecInstance*,U32);

void f7(s353retdecInstance*,U32,U32,U32);

void f8(s353retdecInstance*,U32,U32,U32);

void s353retdec____wasm_call_ctors(s353retdecInstance*i);

void s353retdec____wasm_apply_data_relocs(s353retdecInstance*i);

U32 s353retdec_func_1(s353retdecInstance*i);

void s353retdec_call_cb(s353retdecInstance*i,U32 l0);

void s353retdecInstantiate(s353retdecInstance* instance, void* resolve(const char* module, const char* name));

void s353retdecFreeInstance(s353retdecInstance* instance);

#endif /* s353retdec_H */

