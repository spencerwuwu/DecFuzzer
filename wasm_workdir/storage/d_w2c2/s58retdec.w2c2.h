#ifndef s58retdec_H
#define s58retdec_H

#include "w2c2_base.h"

typedef struct s58retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s58retdecInstance;

void f0(s58retdecInstance*);

void f1(s58retdecInstance*);

U32 f2(s58retdecInstance*);

void f3(s58retdecInstance*,U32);

U32 f4(s58retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s58retdecInstance*,U32,U32,U32,U32,U32);

void f6(s58retdecInstance*,U32);

void f7(s58retdecInstance*,U32,U32,U32);

void f8(s58retdecInstance*,U32,U32,U32);

void s58retdec____wasm_call_ctors(s58retdecInstance*i);

void s58retdec____wasm_apply_data_relocs(s58retdecInstance*i);

U32 s58retdec_func_1(s58retdecInstance*i);

void s58retdec_call_cb(s58retdecInstance*i,U32 l0);

void s58retdecInstantiate(s58retdecInstance* instance, void* resolve(const char* module, const char* name));

void s58retdecFreeInstance(s58retdecInstance* instance);

#endif /* s58retdec_H */

