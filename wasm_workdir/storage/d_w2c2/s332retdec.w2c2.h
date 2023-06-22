#ifndef s332retdec_H
#define s332retdec_H

#include "w2c2_base.h"

typedef struct s332retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s332retdecInstance;

void f0(s332retdecInstance*);

void f1(s332retdecInstance*);

U32 f2(s332retdecInstance*);

void f3(s332retdecInstance*,U32);

U32 f4(s332retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s332retdecInstance*,U32,U32,U32,U32,U32);

void f6(s332retdecInstance*,U32);

void f7(s332retdecInstance*,U32,U32,U32);

void f8(s332retdecInstance*,U32,U32,U32);

void s332retdec____wasm_call_ctors(s332retdecInstance*i);

void s332retdec____wasm_apply_data_relocs(s332retdecInstance*i);

U32 s332retdec_func_1(s332retdecInstance*i);

void s332retdec_call_cb(s332retdecInstance*i,U32 l0);

void s332retdecInstantiate(s332retdecInstance* instance, void* resolve(const char* module, const char* name));

void s332retdecFreeInstance(s332retdecInstance* instance);

#endif /* s332retdec_H */

