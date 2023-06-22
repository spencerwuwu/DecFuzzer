#ifndef s862retdec_H
#define s862retdec_H

#include "w2c2_base.h"

typedef struct s862retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s862retdecInstance;

void f0(s862retdecInstance*);

void f1(s862retdecInstance*);

U32 f2(s862retdecInstance*);

void f3(s862retdecInstance*,U32);

U32 f4(s862retdecInstance*,U32,U32,U32,U32,U32);

void f5(s862retdecInstance*,U32,U32,U32,U32,U32);

void f6(s862retdecInstance*,U32);

void f7(s862retdecInstance*,U32,U32,U32);

void f8(s862retdecInstance*,U32,U32,U32);

void s862retdec____wasm_call_ctors(s862retdecInstance*i);

void s862retdec____wasm_apply_data_relocs(s862retdecInstance*i);

U32 s862retdec_func_1(s862retdecInstance*i);

void s862retdec_call_cb(s862retdecInstance*i,U32 l0);

void s862retdecInstantiate(s862retdecInstance* instance, void* resolve(const char* module, const char* name));

void s862retdecFreeInstance(s862retdecInstance* instance);

#endif /* s862retdec_H */

