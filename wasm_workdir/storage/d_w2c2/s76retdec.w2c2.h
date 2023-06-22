#ifndef s76retdec_H
#define s76retdec_H

#include "w2c2_base.h"

typedef struct s76retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s76retdecInstance;

void f0(s76retdecInstance*);

void f1(s76retdecInstance*);

U32 f2(s76retdecInstance*);

void f3(s76retdecInstance*,U32);

U32 f4(s76retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s76retdecInstance*,U32,U32,U32,U32,U32);

void f6(s76retdecInstance*,U32);

void f7(s76retdecInstance*,U32,U32,U32);

void f8(s76retdecInstance*,U32,U32,U32);

void s76retdec____wasm_call_ctors(s76retdecInstance*i);

void s76retdec____wasm_apply_data_relocs(s76retdecInstance*i);

U32 s76retdec_func_1(s76retdecInstance*i);

void s76retdec_call_cb(s76retdecInstance*i,U32 l0);

void s76retdecInstantiate(s76retdecInstance* instance, void* resolve(const char* module, const char* name));

void s76retdecFreeInstance(s76retdecInstance* instance);

#endif /* s76retdec_H */

