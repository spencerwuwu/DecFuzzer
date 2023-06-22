#ifndef s453retdec_H
#define s453retdec_H

#include "w2c2_base.h"

typedef struct s453retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s453retdecInstance;

void f0(s453retdecInstance*);

void f1(s453retdecInstance*);

U32 f2(s453retdecInstance*);

void f3(s453retdecInstance*,U32);

U32 f4(s453retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s453retdecInstance*,U32,U32,U32,U32,U32);

void f6(s453retdecInstance*,U32);

void f7(s453retdecInstance*,U32,U32,U32);

void f8(s453retdecInstance*,U32,U32,U32);

void s453retdec____wasm_call_ctors(s453retdecInstance*i);

void s453retdec____wasm_apply_data_relocs(s453retdecInstance*i);

U32 s453retdec_func_1(s453retdecInstance*i);

void s453retdec_call_cb(s453retdecInstance*i,U32 l0);

void s453retdecInstantiate(s453retdecInstance* instance, void* resolve(const char* module, const char* name));

void s453retdecFreeInstance(s453retdecInstance* instance);

#endif /* s453retdec_H */

