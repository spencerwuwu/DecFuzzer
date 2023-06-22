#ifndef s319retdec_H
#define s319retdec_H

#include "w2c2_base.h"

typedef struct s319retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s319retdecInstance;

void f0(s319retdecInstance*);

void f1(s319retdecInstance*);

U32 f2(s319retdecInstance*);

void f3(s319retdecInstance*,U32);

U32 f4(s319retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s319retdecInstance*,U32,U32,U32,U32,U32);

void f6(s319retdecInstance*,U32);

void f7(s319retdecInstance*,U32,U32,U32);

void f8(s319retdecInstance*,U32,U32,U32);

void s319retdec____wasm_call_ctors(s319retdecInstance*i);

void s319retdec____wasm_apply_data_relocs(s319retdecInstance*i);

U32 s319retdec_func_1(s319retdecInstance*i);

void s319retdec_call_cb(s319retdecInstance*i,U32 l0);

void s319retdecInstantiate(s319retdecInstance* instance, void* resolve(const char* module, const char* name));

void s319retdecFreeInstance(s319retdecInstance* instance);

#endif /* s319retdec_H */

