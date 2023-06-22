#ifndef s51retdec_H
#define s51retdec_H

#include "w2c2_base.h"

typedef struct s51retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s51retdecInstance;

void f0(s51retdecInstance*);

void f1(s51retdecInstance*);

U32 f2(s51retdecInstance*);

void f3(s51retdecInstance*,U32);

U32 f4(s51retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s51retdecInstance*,U32,U32,U32,U32,U32);

void f6(s51retdecInstance*,U32);

void f7(s51retdecInstance*,U32,U32,U32);

void f8(s51retdecInstance*,U32,U32,U32);

void s51retdec____wasm_call_ctors(s51retdecInstance*i);

void s51retdec____wasm_apply_data_relocs(s51retdecInstance*i);

U32 s51retdec_func_1(s51retdecInstance*i);

void s51retdec_call_cb(s51retdecInstance*i,U32 l0);

void s51retdecInstantiate(s51retdecInstance* instance, void* resolve(const char* module, const char* name));

void s51retdecFreeInstance(s51retdecInstance* instance);

#endif /* s51retdec_H */

