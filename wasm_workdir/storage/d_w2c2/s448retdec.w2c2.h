#ifndef s448retdec_H
#define s448retdec_H

#include "w2c2_base.h"

typedef struct s448retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s448retdecInstance;

void f0(s448retdecInstance*);

void f1(s448retdecInstance*);

U32 f2(s448retdecInstance*);

void f3(s448retdecInstance*,U32);

U32 f4(s448retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s448retdecInstance*,U32,U32,U32,U32,U32);

void f6(s448retdecInstance*,U32);

void f7(s448retdecInstance*,U32,U32,U32);

void f8(s448retdecInstance*,U32,U32,U32);

void s448retdec____wasm_call_ctors(s448retdecInstance*i);

void s448retdec____wasm_apply_data_relocs(s448retdecInstance*i);

U32 s448retdec_func_1(s448retdecInstance*i);

void s448retdec_call_cb(s448retdecInstance*i,U32 l0);

void s448retdecInstantiate(s448retdecInstance* instance, void* resolve(const char* module, const char* name));

void s448retdecFreeInstance(s448retdecInstance* instance);

#endif /* s448retdec_H */

