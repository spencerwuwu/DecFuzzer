#ifndef s430retdec_H
#define s430retdec_H

#include "w2c2_base.h"

typedef struct s430retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s430retdecInstance;

void f0(s430retdecInstance*);

void f1(s430retdecInstance*);

U32 f2(s430retdecInstance*);

void f3(s430retdecInstance*,U32);

U32 f4(s430retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s430retdecInstance*,U32,U32,U32,U32,U32);

void f6(s430retdecInstance*,U32);

void f7(s430retdecInstance*,U32,U32,U32);

void f8(s430retdecInstance*,U32,U32,U32);

void s430retdec____wasm_call_ctors(s430retdecInstance*i);

void s430retdec____wasm_apply_data_relocs(s430retdecInstance*i);

U32 s430retdec_func_1(s430retdecInstance*i);

void s430retdec_call_cb(s430retdecInstance*i,U32 l0);

void s430retdecInstantiate(s430retdecInstance* instance, void* resolve(const char* module, const char* name));

void s430retdecFreeInstance(s430retdecInstance* instance);

#endif /* s430retdec_H */

