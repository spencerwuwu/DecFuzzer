#ifndef s653retdec_H
#define s653retdec_H

#include "w2c2_base.h"

typedef struct s653retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s653retdecInstance;

void f0(s653retdecInstance*);

void f1(s653retdecInstance*);

U32 f2(s653retdecInstance*);

void f3(s653retdecInstance*,U32);

U32 f4(s653retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s653retdecInstance*,U32,U32,U32,U32,U32);

void f6(s653retdecInstance*,U32);

void f7(s653retdecInstance*,U32,U32,U32);

void f8(s653retdecInstance*,U32,U32,U32);

void s653retdec____wasm_call_ctors(s653retdecInstance*i);

void s653retdec____wasm_apply_data_relocs(s653retdecInstance*i);

U32 s653retdec_func_1(s653retdecInstance*i);

void s653retdec_call_cb(s653retdecInstance*i,U32 l0);

void s653retdecInstantiate(s653retdecInstance* instance, void* resolve(const char* module, const char* name));

void s653retdecFreeInstance(s653retdecInstance* instance);

#endif /* s653retdec_H */

