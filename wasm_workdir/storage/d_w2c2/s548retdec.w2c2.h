#ifndef s548retdec_H
#define s548retdec_H

#include "w2c2_base.h"

typedef struct s548retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s548retdecInstance;

void f0(s548retdecInstance*);

void f1(s548retdecInstance*);

U32 f2(s548retdecInstance*);

void f3(s548retdecInstance*,U32);

U32 f4(s548retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s548retdecInstance*,U32,U32,U32,U32,U32);

void f6(s548retdecInstance*,U32);

void f7(s548retdecInstance*,U32,U32,U32);

void f8(s548retdecInstance*,U32,U32,U32);

void s548retdec____wasm_call_ctors(s548retdecInstance*i);

void s548retdec____wasm_apply_data_relocs(s548retdecInstance*i);

U32 s548retdec_func_1(s548retdecInstance*i);

void s548retdec_call_cb(s548retdecInstance*i,U32 l0);

void s548retdecInstantiate(s548retdecInstance* instance, void* resolve(const char* module, const char* name));

void s548retdecFreeInstance(s548retdecInstance* instance);

#endif /* s548retdec_H */

