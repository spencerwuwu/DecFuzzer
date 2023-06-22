#ifndef s723retdec_H
#define s723retdec_H

#include "w2c2_base.h"

typedef struct s723retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s723retdecInstance;

void f0(s723retdecInstance*);

void f1(s723retdecInstance*);

U32 f2(s723retdecInstance*);

void f3(s723retdecInstance*,U32);

U32 f4(s723retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s723retdecInstance*,U32,U32,U32,U32,U32);

void f6(s723retdecInstance*,U32);

void f7(s723retdecInstance*,U32,U32,U32);

void f8(s723retdecInstance*,U32,U32,U32);

void s723retdec____wasm_call_ctors(s723retdecInstance*i);

void s723retdec____wasm_apply_data_relocs(s723retdecInstance*i);

U32 s723retdec_func_1(s723retdecInstance*i);

void s723retdec_call_cb(s723retdecInstance*i,U32 l0);

void s723retdecInstantiate(s723retdecInstance* instance, void* resolve(const char* module, const char* name));

void s723retdecFreeInstance(s723retdecInstance* instance);

#endif /* s723retdec_H */

