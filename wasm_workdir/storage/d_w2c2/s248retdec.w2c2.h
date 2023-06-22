#ifndef s248retdec_H
#define s248retdec_H

#include "w2c2_base.h"

typedef struct s248retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s248retdecInstance;

void f0(s248retdecInstance*);

void f1(s248retdecInstance*);

U32 f2(s248retdecInstance*);

void f3(s248retdecInstance*,U32);

U32 f4(s248retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s248retdecInstance*,U32,U32,U32,U32,U32);

void f6(s248retdecInstance*,U32);

void f7(s248retdecInstance*,U32,U32,U32);

void f8(s248retdecInstance*,U32,U32,U32);

void s248retdec____wasm_call_ctors(s248retdecInstance*i);

void s248retdec____wasm_apply_data_relocs(s248retdecInstance*i);

U32 s248retdec_func_1(s248retdecInstance*i);

void s248retdec_call_cb(s248retdecInstance*i,U32 l0);

void s248retdecInstantiate(s248retdecInstance* instance, void* resolve(const char* module, const char* name));

void s248retdecFreeInstance(s248retdecInstance* instance);

#endif /* s248retdec_H */

