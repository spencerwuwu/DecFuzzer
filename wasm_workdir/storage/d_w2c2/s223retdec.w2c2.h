#ifndef s223retdec_H
#define s223retdec_H

#include "w2c2_base.h"

typedef struct s223retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s223retdecInstance;

void f0(s223retdecInstance*);

void f1(s223retdecInstance*);

U32 f2(s223retdecInstance*);

void f3(s223retdecInstance*,U32);

U32 f4(s223retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s223retdecInstance*,U32,U32,U32,U32,U32);

void f6(s223retdecInstance*,U32);

void f7(s223retdecInstance*,U32,U32,U32);

void f8(s223retdecInstance*,U32,U32,U32);

void s223retdec____wasm_call_ctors(s223retdecInstance*i);

void s223retdec____wasm_apply_data_relocs(s223retdecInstance*i);

U32 s223retdec_func_1(s223retdecInstance*i);

void s223retdec_call_cb(s223retdecInstance*i,U32 l0);

void s223retdecInstantiate(s223retdecInstance* instance, void* resolve(const char* module, const char* name));

void s223retdecFreeInstance(s223retdecInstance* instance);

#endif /* s223retdec_H */

