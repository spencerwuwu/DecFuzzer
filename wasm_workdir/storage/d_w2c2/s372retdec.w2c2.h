#ifndef s372retdec_H
#define s372retdec_H

#include "w2c2_base.h"

typedef struct s372retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s372retdecInstance;

void f0(s372retdecInstance*);

void f1(s372retdecInstance*);

U32 f2(s372retdecInstance*);

void f3(s372retdecInstance*,U32);

U32 f4(s372retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s372retdecInstance*,U32,U32,U32,U32,U32);

void f6(s372retdecInstance*,U32);

void f7(s372retdecInstance*,U32,U32,U32);

void f8(s372retdecInstance*,U32,U32,U32);

void s372retdec____wasm_call_ctors(s372retdecInstance*i);

void s372retdec____wasm_apply_data_relocs(s372retdecInstance*i);

U32 s372retdec_func_1(s372retdecInstance*i);

void s372retdec_call_cb(s372retdecInstance*i,U32 l0);

void s372retdecInstantiate(s372retdecInstance* instance, void* resolve(const char* module, const char* name));

void s372retdecFreeInstance(s372retdecInstance* instance);

#endif /* s372retdec_H */

