#ifndef s768retdec_H
#define s768retdec_H

#include "w2c2_base.h"

typedef struct s768retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s768retdecInstance;

void f0(s768retdecInstance*);

void f1(s768retdecInstance*);

U32 f2(s768retdecInstance*);

void f3(s768retdecInstance*,U32);

U32 f4(s768retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s768retdecInstance*,U32,U32,U32,U32,U32);

void f6(s768retdecInstance*,U32);

void f7(s768retdecInstance*,U32,U32,U32);

void f8(s768retdecInstance*,U32,U32,U32);

void s768retdec____wasm_call_ctors(s768retdecInstance*i);

void s768retdec____wasm_apply_data_relocs(s768retdecInstance*i);

U32 s768retdec_func_1(s768retdecInstance*i);

void s768retdec_call_cb(s768retdecInstance*i,U32 l0);

void s768retdecInstantiate(s768retdecInstance* instance, void* resolve(const char* module, const char* name));

void s768retdecFreeInstance(s768retdecInstance* instance);

#endif /* s768retdec_H */

