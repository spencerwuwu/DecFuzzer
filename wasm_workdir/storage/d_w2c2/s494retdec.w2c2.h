#ifndef s494retdec_H
#define s494retdec_H

#include "w2c2_base.h"

typedef struct s494retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s494retdecInstance;

void f0(s494retdecInstance*);

void f1(s494retdecInstance*);

U32 f2(s494retdecInstance*);

void f3(s494retdecInstance*,U32);

U32 f4(s494retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s494retdecInstance*,U32,U32,U32,U32,U32);

void f6(s494retdecInstance*,U32);

void f7(s494retdecInstance*,U32,U32,U32);

void f8(s494retdecInstance*,U32,U32,U32);

void s494retdec____wasm_call_ctors(s494retdecInstance*i);

void s494retdec____wasm_apply_data_relocs(s494retdecInstance*i);

U32 s494retdec_func_1(s494retdecInstance*i);

void s494retdec_call_cb(s494retdecInstance*i,U32 l0);

void s494retdecInstantiate(s494retdecInstance* instance, void* resolve(const char* module, const char* name));

void s494retdecFreeInstance(s494retdecInstance* instance);

#endif /* s494retdec_H */

