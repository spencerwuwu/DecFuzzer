#ifndef s804retdec_H
#define s804retdec_H

#include "w2c2_base.h"

typedef struct s804retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s804retdecInstance;

void f0(s804retdecInstance*);

void f1(s804retdecInstance*);

U32 f2(s804retdecInstance*);

void f3(s804retdecInstance*,U32);

U32 f4(s804retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s804retdecInstance*,U32,U32,U32,U32,U32);

void f6(s804retdecInstance*,U32);

void f7(s804retdecInstance*,U32,U32,U32);

void f8(s804retdecInstance*,U32,U32,U32);

void s804retdec____wasm_call_ctors(s804retdecInstance*i);

void s804retdec____wasm_apply_data_relocs(s804retdecInstance*i);

U32 s804retdec_func_1(s804retdecInstance*i);

void s804retdec_call_cb(s804retdecInstance*i,U32 l0);

void s804retdecInstantiate(s804retdecInstance* instance, void* resolve(const char* module, const char* name));

void s804retdecFreeInstance(s804retdecInstance* instance);

#endif /* s804retdec_H */

