#ifndef s994retdec_H
#define s994retdec_H

#include "w2c2_base.h"

typedef struct s994retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s994retdecInstance;

void f0(s994retdecInstance*);

void f1(s994retdecInstance*);

U32 f2(s994retdecInstance*);

void f3(s994retdecInstance*,U32);

U32 f4(s994retdecInstance*,U32,U32,U32,U32);

void f5(s994retdecInstance*,U32,U32,U32,U32,U32);

void f6(s994retdecInstance*,U32);

void f7(s994retdecInstance*,U32,U32,U32);

void f8(s994retdecInstance*,U32,U32,U32);

void s994retdec____wasm_call_ctors(s994retdecInstance*i);

void s994retdec____wasm_apply_data_relocs(s994retdecInstance*i);

U32 s994retdec_func_1(s994retdecInstance*i);

void s994retdec_call_cb(s994retdecInstance*i,U32 l0);

void s994retdecInstantiate(s994retdecInstance* instance, void* resolve(const char* module, const char* name));

void s994retdecFreeInstance(s994retdecInstance* instance);

#endif /* s994retdec_H */

