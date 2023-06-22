#ifndef s404retdec_H
#define s404retdec_H

#include "w2c2_base.h"

typedef struct s404retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s404retdecInstance;

void f0(s404retdecInstance*);

void f1(s404retdecInstance*);

U32 f2(s404retdecInstance*);

void f3(s404retdecInstance*,U32);

U32 f4(s404retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s404retdecInstance*,U32,U32,U32,U32,U32);

void f6(s404retdecInstance*,U32);

void f7(s404retdecInstance*,U32,U32,U32);

void f8(s404retdecInstance*,U32,U32,U32);

void s404retdec____wasm_call_ctors(s404retdecInstance*i);

void s404retdec____wasm_apply_data_relocs(s404retdecInstance*i);

U32 s404retdec_func_1(s404retdecInstance*i);

void s404retdec_call_cb(s404retdecInstance*i,U32 l0);

void s404retdecInstantiate(s404retdecInstance* instance, void* resolve(const char* module, const char* name));

void s404retdecFreeInstance(s404retdecInstance* instance);

#endif /* s404retdec_H */

