#ifndef s334retdec_H
#define s334retdec_H

#include "w2c2_base.h"

typedef struct s334retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s334retdecInstance;

void f0(s334retdecInstance*);

void f1(s334retdecInstance*);

U32 f2(s334retdecInstance*);

void f3(s334retdecInstance*,U32);

U32 f4(s334retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s334retdecInstance*,U32,U32,U32,U32,U32);

void f6(s334retdecInstance*,U32);

void f7(s334retdecInstance*,U32,U32,U32);

void f8(s334retdecInstance*,U32,U32,U32);

void s334retdec____wasm_call_ctors(s334retdecInstance*i);

void s334retdec____wasm_apply_data_relocs(s334retdecInstance*i);

U32 s334retdec_func_1(s334retdecInstance*i);

void s334retdec_call_cb(s334retdecInstance*i,U32 l0);

void s334retdecInstantiate(s334retdecInstance* instance, void* resolve(const char* module, const char* name));

void s334retdecFreeInstance(s334retdecInstance* instance);

#endif /* s334retdec_H */

