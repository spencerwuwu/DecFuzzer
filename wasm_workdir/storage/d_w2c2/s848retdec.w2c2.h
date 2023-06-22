#ifndef s848retdec_H
#define s848retdec_H

#include "w2c2_base.h"

typedef struct s848retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s848retdecInstance;

void f0(s848retdecInstance*);

void f1(s848retdecInstance*);

U32 f2(s848retdecInstance*);

void f3(s848retdecInstance*,U32);

U32 f4(s848retdecInstance*,U32,U32,U32);

void f5(s848retdecInstance*,U32,U32,U32,U32,U32);

void f6(s848retdecInstance*,U32);

void f7(s848retdecInstance*,U32,U32,U32);

void f8(s848retdecInstance*,U32,U32,U32);

void s848retdec____wasm_call_ctors(s848retdecInstance*i);

void s848retdec____wasm_apply_data_relocs(s848retdecInstance*i);

U32 s848retdec_func_1(s848retdecInstance*i);

void s848retdec_call_cb(s848retdecInstance*i,U32 l0);

void s848retdecInstantiate(s848retdecInstance* instance, void* resolve(const char* module, const char* name));

void s848retdecFreeInstance(s848retdecInstance* instance);

#endif /* s848retdec_H */

