#ifndef s981retdec_H
#define s981retdec_H

#include "w2c2_base.h"

typedef struct s981retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s981retdecInstance;

void f0(s981retdecInstance*);

void f1(s981retdecInstance*);

U32 f2(s981retdecInstance*);

void f3(s981retdecInstance*,U32);

U32 f4(s981retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s981retdecInstance*,U32,U32,U32,U32,U32);

void f6(s981retdecInstance*,U32);

void f7(s981retdecInstance*,U32,U32,U32);

void f8(s981retdecInstance*,U32,U32,U32);

void s981retdec____wasm_call_ctors(s981retdecInstance*i);

void s981retdec____wasm_apply_data_relocs(s981retdecInstance*i);

U32 s981retdec_func_1(s981retdecInstance*i);

void s981retdec_call_cb(s981retdecInstance*i,U32 l0);

void s981retdecInstantiate(s981retdecInstance* instance, void* resolve(const char* module, const char* name));

void s981retdecFreeInstance(s981retdecInstance* instance);

#endif /* s981retdec_H */

