#ifndef s198retdec_H
#define s198retdec_H

#include "w2c2_base.h"

typedef struct s198retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s198retdecInstance;

void f0(s198retdecInstance*);

void f1(s198retdecInstance*);

U32 f2(s198retdecInstance*);

void f3(s198retdecInstance*,U32);

U32 f4(s198retdecInstance*,U32,U32,U32,U32);

void f5(s198retdecInstance*,U32,U32,U32,U32,U32);

void f6(s198retdecInstance*,U32);

void f7(s198retdecInstance*,U32,U32,U32);

void f8(s198retdecInstance*,U32,U32,U32);

void s198retdec____wasm_call_ctors(s198retdecInstance*i);

void s198retdec____wasm_apply_data_relocs(s198retdecInstance*i);

U32 s198retdec_func_1(s198retdecInstance*i);

void s198retdec_call_cb(s198retdecInstance*i,U32 l0);

void s198retdecInstantiate(s198retdecInstance* instance, void* resolve(const char* module, const char* name));

void s198retdecFreeInstance(s198retdecInstance* instance);

#endif /* s198retdec_H */

