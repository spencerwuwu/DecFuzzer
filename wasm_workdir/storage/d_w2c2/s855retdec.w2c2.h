#ifndef s855retdec_H
#define s855retdec_H

#include "w2c2_base.h"

typedef struct s855retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s855retdecInstance;

void f0(s855retdecInstance*);

void f1(s855retdecInstance*);

U32 f2(s855retdecInstance*);

void f3(s855retdecInstance*,U32);

U32 f4(s855retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s855retdecInstance*,U32,U32,U32,U32,U32);

void f6(s855retdecInstance*,U32);

void f7(s855retdecInstance*,U32,U32,U32);

void f8(s855retdecInstance*,U32,U32,U32);

void s855retdec____wasm_call_ctors(s855retdecInstance*i);

void s855retdec____wasm_apply_data_relocs(s855retdecInstance*i);

U32 s855retdec_func_1(s855retdecInstance*i);

void s855retdec_call_cb(s855retdecInstance*i,U32 l0);

void s855retdecInstantiate(s855retdecInstance* instance, void* resolve(const char* module, const char* name));

void s855retdecFreeInstance(s855retdecInstance* instance);

#endif /* s855retdec_H */

