#ifndef s408retdec_H
#define s408retdec_H

#include "w2c2_base.h"

typedef struct s408retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s408retdecInstance;

void f0(s408retdecInstance*);

void f1(s408retdecInstance*);

U32 f2(s408retdecInstance*);

void f3(s408retdecInstance*,U32);

U32 f4(s408retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s408retdecInstance*,U32,U32,U32,U32,U32);

void f6(s408retdecInstance*,U32);

void f7(s408retdecInstance*,U32,U32,U32);

void f8(s408retdecInstance*,U32,U32,U32);

void s408retdec____wasm_call_ctors(s408retdecInstance*i);

void s408retdec____wasm_apply_data_relocs(s408retdecInstance*i);

U32 s408retdec_func_1(s408retdecInstance*i);

void s408retdec_call_cb(s408retdecInstance*i,U32 l0);

void s408retdecInstantiate(s408retdecInstance* instance, void* resolve(const char* module, const char* name));

void s408retdecFreeInstance(s408retdecInstance* instance);

#endif /* s408retdec_H */

