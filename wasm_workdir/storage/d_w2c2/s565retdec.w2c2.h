#ifndef s565retdec_H
#define s565retdec_H

#include "w2c2_base.h"

typedef struct s565retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s565retdecInstance;

void f0(s565retdecInstance*);

void f1(s565retdecInstance*);

U32 f2(s565retdecInstance*);

void f3(s565retdecInstance*,U32);

U32 f4(s565retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s565retdecInstance*,U32,U32,U32,U32,U32);

void f6(s565retdecInstance*,U32);

void f7(s565retdecInstance*,U32,U32,U32);

void f8(s565retdecInstance*,U32,U32,U32);

void s565retdec____wasm_call_ctors(s565retdecInstance*i);

void s565retdec____wasm_apply_data_relocs(s565retdecInstance*i);

U32 s565retdec_func_1(s565retdecInstance*i);

void s565retdec_call_cb(s565retdecInstance*i,U32 l0);

void s565retdecInstantiate(s565retdecInstance* instance, void* resolve(const char* module, const char* name));

void s565retdecFreeInstance(s565retdecInstance* instance);

#endif /* s565retdec_H */

