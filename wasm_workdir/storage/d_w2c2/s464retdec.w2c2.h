#ifndef s464retdec_H
#define s464retdec_H

#include "w2c2_base.h"

typedef struct s464retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s464retdecInstance;

void f0(s464retdecInstance*);

void f1(s464retdecInstance*);

U32 f2(s464retdecInstance*);

void f3(s464retdecInstance*,U32);

U32 f4(s464retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s464retdecInstance*,U32,U32,U32,U32,U32);

void f6(s464retdecInstance*,U32);

void f7(s464retdecInstance*,U32,U32,U32);

void f8(s464retdecInstance*,U32,U32,U32);

void s464retdec____wasm_call_ctors(s464retdecInstance*i);

void s464retdec____wasm_apply_data_relocs(s464retdecInstance*i);

U32 s464retdec_func_1(s464retdecInstance*i);

void s464retdec_call_cb(s464retdecInstance*i,U32 l0);

void s464retdecInstantiate(s464retdecInstance* instance, void* resolve(const char* module, const char* name));

void s464retdecFreeInstance(s464retdecInstance* instance);

#endif /* s464retdec_H */

