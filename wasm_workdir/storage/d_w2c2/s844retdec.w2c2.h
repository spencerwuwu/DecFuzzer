#ifndef s844retdec_H
#define s844retdec_H

#include "w2c2_base.h"

typedef struct s844retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s844retdecInstance;

void f0(s844retdecInstance*);

void f1(s844retdecInstance*);

U32 f2(s844retdecInstance*);

void f3(s844retdecInstance*,U32);

U32 f4(s844retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s844retdecInstance*,U32,U32,U32,U32,U32);

void f6(s844retdecInstance*,U32);

void f7(s844retdecInstance*,U32,U32,U32);

void f8(s844retdecInstance*,U32,U32,U32);

void s844retdec____wasm_call_ctors(s844retdecInstance*i);

void s844retdec____wasm_apply_data_relocs(s844retdecInstance*i);

U32 s844retdec_func_1(s844retdecInstance*i);

void s844retdec_call_cb(s844retdecInstance*i,U32 l0);

void s844retdecInstantiate(s844retdecInstance* instance, void* resolve(const char* module, const char* name));

void s844retdecFreeInstance(s844retdecInstance* instance);

#endif /* s844retdec_H */

