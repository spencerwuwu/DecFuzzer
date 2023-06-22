#ifndef s104retdec_H
#define s104retdec_H

#include "w2c2_base.h"

typedef struct s104retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s104retdecInstance;

void f0(s104retdecInstance*);

void f1(s104retdecInstance*);

U32 f2(s104retdecInstance*);

void f3(s104retdecInstance*,U32);

U32 f4(s104retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s104retdecInstance*,U32,U32,U32,U32,U32);

void f6(s104retdecInstance*,U32);

void f7(s104retdecInstance*,U32,U32,U32);

void f8(s104retdecInstance*,U32,U32,U32);

void s104retdec____wasm_call_ctors(s104retdecInstance*i);

void s104retdec____wasm_apply_data_relocs(s104retdecInstance*i);

U32 s104retdec_func_1(s104retdecInstance*i);

void s104retdec_call_cb(s104retdecInstance*i,U32 l0);

void s104retdecInstantiate(s104retdecInstance* instance, void* resolve(const char* module, const char* name));

void s104retdecFreeInstance(s104retdecInstance* instance);

#endif /* s104retdec_H */

