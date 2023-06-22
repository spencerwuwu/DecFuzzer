#ifndef s949retdec_H
#define s949retdec_H

#include "w2c2_base.h"

typedef struct s949retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s949retdecInstance;

void f0(s949retdecInstance*);

void f1(s949retdecInstance*);

U32 f2(s949retdecInstance*);

void f3(s949retdecInstance*,U32);

U32 f4(s949retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s949retdecInstance*,U32,U32,U32,U32,U32);

void f6(s949retdecInstance*,U32);

void f7(s949retdecInstance*,U32,U32,U32);

void f8(s949retdecInstance*,U32,U32,U32);

void s949retdec____wasm_call_ctors(s949retdecInstance*i);

void s949retdec____wasm_apply_data_relocs(s949retdecInstance*i);

U32 s949retdec_func_1(s949retdecInstance*i);

void s949retdec_call_cb(s949retdecInstance*i,U32 l0);

void s949retdecInstantiate(s949retdecInstance* instance, void* resolve(const char* module, const char* name));

void s949retdecFreeInstance(s949retdecInstance* instance);

#endif /* s949retdec_H */

