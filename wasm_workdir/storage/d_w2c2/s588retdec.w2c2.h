#ifndef s588retdec_H
#define s588retdec_H

#include "w2c2_base.h"

typedef struct s588retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s588retdecInstance;

void f0(s588retdecInstance*);

void f1(s588retdecInstance*);

U32 f2(s588retdecInstance*);

void f3(s588retdecInstance*,U32);

U32 f4(s588retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s588retdecInstance*,U32,U32,U32,U32,U32);

void f6(s588retdecInstance*,U32);

void f7(s588retdecInstance*,U32,U32,U32);

void f8(s588retdecInstance*,U32,U32,U32);

void s588retdec____wasm_call_ctors(s588retdecInstance*i);

void s588retdec____wasm_apply_data_relocs(s588retdecInstance*i);

U32 s588retdec_func_1(s588retdecInstance*i);

void s588retdec_call_cb(s588retdecInstance*i,U32 l0);

void s588retdecInstantiate(s588retdecInstance* instance, void* resolve(const char* module, const char* name));

void s588retdecFreeInstance(s588retdecInstance* instance);

#endif /* s588retdec_H */

