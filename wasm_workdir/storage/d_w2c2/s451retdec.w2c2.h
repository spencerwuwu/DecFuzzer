#ifndef s451retdec_H
#define s451retdec_H

#include "w2c2_base.h"

typedef struct s451retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s451retdecInstance;

void f0(s451retdecInstance*);

void f1(s451retdecInstance*);

U32 f2(s451retdecInstance*);

void f3(s451retdecInstance*,U32);

U32 f4(s451retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s451retdecInstance*,U32,U32,U32,U32,U32);

void f6(s451retdecInstance*,U32);

void f7(s451retdecInstance*,U32,U32,U32);

void f8(s451retdecInstance*,U32,U32,U32);

void s451retdec____wasm_call_ctors(s451retdecInstance*i);

void s451retdec____wasm_apply_data_relocs(s451retdecInstance*i);

U32 s451retdec_func_1(s451retdecInstance*i);

void s451retdec_call_cb(s451retdecInstance*i,U32 l0);

void s451retdecInstantiate(s451retdecInstance* instance, void* resolve(const char* module, const char* name));

void s451retdecFreeInstance(s451retdecInstance* instance);

#endif /* s451retdec_H */

