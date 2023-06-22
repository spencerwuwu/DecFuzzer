#ifndef s860retdec_H
#define s860retdec_H

#include "w2c2_base.h"

typedef struct s860retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s860retdecInstance;

void f0(s860retdecInstance*);

void f1(s860retdecInstance*);

U32 f2(s860retdecInstance*);

void f3(s860retdecInstance*,U32);

U32 f4(s860retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s860retdecInstance*,U32,U32,U32,U32,U32);

void f6(s860retdecInstance*,U32);

void f7(s860retdecInstance*,U32,U32,U32);

void f8(s860retdecInstance*,U32,U32,U32);

void s860retdec____wasm_call_ctors(s860retdecInstance*i);

void s860retdec____wasm_apply_data_relocs(s860retdecInstance*i);

U32 s860retdec_func_1(s860retdecInstance*i);

void s860retdec_call_cb(s860retdecInstance*i,U32 l0);

void s860retdecInstantiate(s860retdecInstance* instance, void* resolve(const char* module, const char* name));

void s860retdecFreeInstance(s860retdecInstance* instance);

#endif /* s860retdec_H */

