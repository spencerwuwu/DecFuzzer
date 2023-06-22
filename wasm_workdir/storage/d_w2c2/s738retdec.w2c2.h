#ifndef s738retdec_H
#define s738retdec_H

#include "w2c2_base.h"

typedef struct s738retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s738retdecInstance;

void f0(s738retdecInstance*);

void f1(s738retdecInstance*);

U32 f2(s738retdecInstance*);

void f3(s738retdecInstance*,U32);

U32 f4(s738retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s738retdecInstance*,U32,U32,U32,U32,U32);

void f6(s738retdecInstance*,U32);

void f7(s738retdecInstance*,U32,U32,U32);

void f8(s738retdecInstance*,U32,U32,U32);

void s738retdec____wasm_call_ctors(s738retdecInstance*i);

void s738retdec____wasm_apply_data_relocs(s738retdecInstance*i);

U32 s738retdec_func_1(s738retdecInstance*i);

void s738retdec_call_cb(s738retdecInstance*i,U32 l0);

void s738retdecInstantiate(s738retdecInstance* instance, void* resolve(const char* module, const char* name));

void s738retdecFreeInstance(s738retdecInstance* instance);

#endif /* s738retdec_H */

