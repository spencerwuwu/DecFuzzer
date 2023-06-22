#ifndef s952retdec_H
#define s952retdec_H

#include "w2c2_base.h"

typedef struct s952retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s952retdecInstance;

void f0(s952retdecInstance*);

void f1(s952retdecInstance*);

U32 f2(s952retdecInstance*);

void f3(s952retdecInstance*,U32);

U32 f4(s952retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s952retdecInstance*,U32,U32,U32,U32,U32);

void f6(s952retdecInstance*,U32);

void f7(s952retdecInstance*,U32,U32,U32);

void f8(s952retdecInstance*,U32,U32,U32);

void s952retdec____wasm_call_ctors(s952retdecInstance*i);

void s952retdec____wasm_apply_data_relocs(s952retdecInstance*i);

U32 s952retdec_func_1(s952retdecInstance*i);

void s952retdec_call_cb(s952retdecInstance*i,U32 l0);

void s952retdecInstantiate(s952retdecInstance* instance, void* resolve(const char* module, const char* name));

void s952retdecFreeInstance(s952retdecInstance* instance);

#endif /* s952retdec_H */

