#ifndef s744retdec_H
#define s744retdec_H

#include "w2c2_base.h"

typedef struct s744retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s744retdecInstance;

void f0(s744retdecInstance*);

void f1(s744retdecInstance*);

U32 f2(s744retdecInstance*);

void f3(s744retdecInstance*,U32);

U32 f4(s744retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s744retdecInstance*,U32,U32,U32,U32,U32);

void f6(s744retdecInstance*,U32);

void f7(s744retdecInstance*,U32,U32,U32);

void f8(s744retdecInstance*,U32,U32,U32);

void s744retdec____wasm_call_ctors(s744retdecInstance*i);

void s744retdec____wasm_apply_data_relocs(s744retdecInstance*i);

U32 s744retdec_func_1(s744retdecInstance*i);

void s744retdec_call_cb(s744retdecInstance*i,U32 l0);

void s744retdecInstantiate(s744retdecInstance* instance, void* resolve(const char* module, const char* name));

void s744retdecFreeInstance(s744retdecInstance* instance);

#endif /* s744retdec_H */

