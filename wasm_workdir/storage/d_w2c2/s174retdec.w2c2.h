#ifndef s174retdec_H
#define s174retdec_H

#include "w2c2_base.h"

typedef struct s174retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s174retdecInstance;

void f0(s174retdecInstance*);

void f1(s174retdecInstance*);

U32 f2(s174retdecInstance*);

void f3(s174retdecInstance*,U32);

U32 f4(s174retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s174retdecInstance*,U32,U32,U32,U32,U32);

void f6(s174retdecInstance*,U32);

void f7(s174retdecInstance*,U32,U32,U32);

void f8(s174retdecInstance*,U32,U32,U32);

void s174retdec____wasm_call_ctors(s174retdecInstance*i);

void s174retdec____wasm_apply_data_relocs(s174retdecInstance*i);

U32 s174retdec_func_1(s174retdecInstance*i);

void s174retdec_call_cb(s174retdecInstance*i,U32 l0);

void s174retdecInstantiate(s174retdecInstance* instance, void* resolve(const char* module, const char* name));

void s174retdecFreeInstance(s174retdecInstance* instance);

#endif /* s174retdec_H */

