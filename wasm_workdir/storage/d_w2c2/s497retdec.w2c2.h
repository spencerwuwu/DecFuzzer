#ifndef s497retdec_H
#define s497retdec_H

#include "w2c2_base.h"

typedef struct s497retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s497retdecInstance;

void f0(s497retdecInstance*);

void f1(s497retdecInstance*);

U32 f2(s497retdecInstance*);

void f3(s497retdecInstance*,U32);

U32 f4(s497retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s497retdecInstance*,U32,U32,U32,U32,U32);

void f6(s497retdecInstance*,U32);

void f7(s497retdecInstance*,U32,U32,U32);

void f8(s497retdecInstance*,U32,U32,U32);

void s497retdec____wasm_call_ctors(s497retdecInstance*i);

void s497retdec____wasm_apply_data_relocs(s497retdecInstance*i);

U32 s497retdec_func_1(s497retdecInstance*i);

void s497retdec_call_cb(s497retdecInstance*i,U32 l0);

void s497retdecInstantiate(s497retdecInstance* instance, void* resolve(const char* module, const char* name));

void s497retdecFreeInstance(s497retdecInstance* instance);

#endif /* s497retdec_H */

