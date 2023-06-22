#ifndef s611retdec_H
#define s611retdec_H

#include "w2c2_base.h"

typedef struct s611retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s611retdecInstance;

void f0(s611retdecInstance*);

void f1(s611retdecInstance*);

U32 f2(s611retdecInstance*);

void f3(s611retdecInstance*,U32);

U32 f4(s611retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s611retdecInstance*,U32,U32,U32,U32,U32);

void f6(s611retdecInstance*,U32);

void f7(s611retdecInstance*,U32,U32,U32);

void f8(s611retdecInstance*,U32,U32,U32);

void s611retdec____wasm_call_ctors(s611retdecInstance*i);

void s611retdec____wasm_apply_data_relocs(s611retdecInstance*i);

U32 s611retdec_func_1(s611retdecInstance*i);

void s611retdec_call_cb(s611retdecInstance*i,U32 l0);

void s611retdecInstantiate(s611retdecInstance* instance, void* resolve(const char* module, const char* name));

void s611retdecFreeInstance(s611retdecInstance* instance);

#endif /* s611retdec_H */

