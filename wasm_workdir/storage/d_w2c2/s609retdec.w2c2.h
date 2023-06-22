#ifndef s609retdec_H
#define s609retdec_H

#include "w2c2_base.h"

typedef struct s609retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s609retdecInstance;

void f0(s609retdecInstance*);

void f1(s609retdecInstance*);

U32 f2(s609retdecInstance*);

void f3(s609retdecInstance*,U32);

U32 f4(s609retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s609retdecInstance*,U32,U32,U32,U32,U32);

void f6(s609retdecInstance*,U32);

void f7(s609retdecInstance*,U32,U32,U32);

void f8(s609retdecInstance*,U32,U32,U32);

void s609retdec____wasm_call_ctors(s609retdecInstance*i);

void s609retdec____wasm_apply_data_relocs(s609retdecInstance*i);

U32 s609retdec_func_1(s609retdecInstance*i);

void s609retdec_call_cb(s609retdecInstance*i,U32 l0);

void s609retdecInstantiate(s609retdecInstance* instance, void* resolve(const char* module, const char* name));

void s609retdecFreeInstance(s609retdecInstance* instance);

#endif /* s609retdec_H */

