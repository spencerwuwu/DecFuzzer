#ifndef s600retdec_H
#define s600retdec_H

#include "w2c2_base.h"

typedef struct s600retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s600retdecInstance;

void f0(s600retdecInstance*);

void f1(s600retdecInstance*);

U32 f2(s600retdecInstance*);

void f3(s600retdecInstance*,U32);

U32 f4(s600retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s600retdecInstance*,U32,U32,U32,U32,U32);

void f6(s600retdecInstance*,U32);

void f7(s600retdecInstance*,U32,U32,U32);

void f8(s600retdecInstance*,U32,U32,U32);

void s600retdec____wasm_call_ctors(s600retdecInstance*i);

void s600retdec____wasm_apply_data_relocs(s600retdecInstance*i);

U32 s600retdec_func_1(s600retdecInstance*i);

void s600retdec_call_cb(s600retdecInstance*i,U32 l0);

void s600retdecInstantiate(s600retdecInstance* instance, void* resolve(const char* module, const char* name));

void s600retdecFreeInstance(s600retdecInstance* instance);

#endif /* s600retdec_H */

