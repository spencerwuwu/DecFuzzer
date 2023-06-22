#ifndef s817retdec_H
#define s817retdec_H

#include "w2c2_base.h"

typedef struct s817retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s817retdecInstance;

void f0(s817retdecInstance*);

void f1(s817retdecInstance*);

U32 f2(s817retdecInstance*);

void f3(s817retdecInstance*,U32);

U32 f4(s817retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s817retdecInstance*,U32,U32,U32,U32,U32);

void f6(s817retdecInstance*,U32);

void f7(s817retdecInstance*,U32,U32,U32);

void f8(s817retdecInstance*,U32,U32,U32);

void s817retdec____wasm_call_ctors(s817retdecInstance*i);

void s817retdec____wasm_apply_data_relocs(s817retdecInstance*i);

U32 s817retdec_func_1(s817retdecInstance*i);

void s817retdec_call_cb(s817retdecInstance*i,U32 l0);

void s817retdecInstantiate(s817retdecInstance* instance, void* resolve(const char* module, const char* name));

void s817retdecFreeInstance(s817retdecInstance* instance);

#endif /* s817retdec_H */

