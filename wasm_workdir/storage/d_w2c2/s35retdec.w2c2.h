#ifndef s35retdec_H
#define s35retdec_H

#include "w2c2_base.h"

typedef struct s35retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s35retdecInstance;

void f0(s35retdecInstance*);

void f1(s35retdecInstance*);

U32 f2(s35retdecInstance*);

void f3(s35retdecInstance*,U32);

U32 f4(s35retdecInstance*,U32,U32,U32);

void f5(s35retdecInstance*,U32,U32,U32,U32,U32);

void f6(s35retdecInstance*,U32);

void f7(s35retdecInstance*,U32,U32,U32);

void f8(s35retdecInstance*,U32,U32,U32);

void s35retdec____wasm_call_ctors(s35retdecInstance*i);

void s35retdec____wasm_apply_data_relocs(s35retdecInstance*i);

U32 s35retdec_func_1(s35retdecInstance*i);

void s35retdec_call_cb(s35retdecInstance*i,U32 l0);

void s35retdecInstantiate(s35retdecInstance* instance, void* resolve(const char* module, const char* name));

void s35retdecFreeInstance(s35retdecInstance* instance);

#endif /* s35retdec_H */

