#ifndef s987retdec_H
#define s987retdec_H

#include "w2c2_base.h"

typedef struct s987retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s987retdecInstance;

void f0(s987retdecInstance*);

void f1(s987retdecInstance*);

U32 f2(s987retdecInstance*);

void f3(s987retdecInstance*,U32);

U32 f4(s987retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s987retdecInstance*,U32,U32,U32,U32,U32);

void f6(s987retdecInstance*,U32);

void f7(s987retdecInstance*,U32,U32,U32);

void f8(s987retdecInstance*,U32,U32,U32);

void s987retdec____wasm_call_ctors(s987retdecInstance*i);

void s987retdec____wasm_apply_data_relocs(s987retdecInstance*i);

U32 s987retdec_func_1(s987retdecInstance*i);

void s987retdec_call_cb(s987retdecInstance*i,U32 l0);

void s987retdecInstantiate(s987retdecInstance* instance, void* resolve(const char* module, const char* name));

void s987retdecFreeInstance(s987retdecInstance* instance);

#endif /* s987retdec_H */

