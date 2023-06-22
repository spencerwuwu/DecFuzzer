#ifndef s423retdec_H
#define s423retdec_H

#include "w2c2_base.h"

typedef struct s423retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s423retdecInstance;

void f0(s423retdecInstance*);

void f1(s423retdecInstance*);

U32 f2(s423retdecInstance*);

void f3(s423retdecInstance*,U32);

U32 f4(s423retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s423retdecInstance*,U32,U32,U32,U32,U32);

void f6(s423retdecInstance*,U32);

void f7(s423retdecInstance*,U32,U32,U32);

void f8(s423retdecInstance*,U32,U32,U32);

void s423retdec____wasm_call_ctors(s423retdecInstance*i);

void s423retdec____wasm_apply_data_relocs(s423retdecInstance*i);

U32 s423retdec_func_1(s423retdecInstance*i);

void s423retdec_call_cb(s423retdecInstance*i,U32 l0);

void s423retdecInstantiate(s423retdecInstance* instance, void* resolve(const char* module, const char* name));

void s423retdecFreeInstance(s423retdecInstance* instance);

#endif /* s423retdec_H */

