#ifndef s545retdec_H
#define s545retdec_H

#include "w2c2_base.h"

typedef struct s545retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s545retdecInstance;

void f0(s545retdecInstance*);

void f1(s545retdecInstance*);

U32 f2(s545retdecInstance*);

void f3(s545retdecInstance*,U32);

U32 f4(s545retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s545retdecInstance*,U32,U32,U32,U32,U32);

void f6(s545retdecInstance*,U32);

void f7(s545retdecInstance*,U32,U32,U32);

void f8(s545retdecInstance*,U32,U32,U32);

void s545retdec____wasm_call_ctors(s545retdecInstance*i);

void s545retdec____wasm_apply_data_relocs(s545retdecInstance*i);

U32 s545retdec_func_1(s545retdecInstance*i);

void s545retdec_call_cb(s545retdecInstance*i,U32 l0);

void s545retdecInstantiate(s545retdecInstance* instance, void* resolve(const char* module, const char* name));

void s545retdecFreeInstance(s545retdecInstance* instance);

#endif /* s545retdec_H */

