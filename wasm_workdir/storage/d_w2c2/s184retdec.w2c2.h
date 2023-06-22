#ifndef s184retdec_H
#define s184retdec_H

#include "w2c2_base.h"

typedef struct s184retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s184retdecInstance;

void f0(s184retdecInstance*);

void f1(s184retdecInstance*);

U32 f2(s184retdecInstance*);

void f3(s184retdecInstance*,U32);

U32 f4(s184retdecInstance*,U32,U32,U32);

void f5(s184retdecInstance*,U32,U32,U32,U32,U32);

void f6(s184retdecInstance*,U32);

void f7(s184retdecInstance*,U32,U32,U32);

void f8(s184retdecInstance*,U32,U32,U32);

void s184retdec____wasm_call_ctors(s184retdecInstance*i);

void s184retdec____wasm_apply_data_relocs(s184retdecInstance*i);

U32 s184retdec_func_1(s184retdecInstance*i);

void s184retdec_call_cb(s184retdecInstance*i,U32 l0);

void s184retdecInstantiate(s184retdecInstance* instance, void* resolve(const char* module, const char* name));

void s184retdecFreeInstance(s184retdecInstance* instance);

#endif /* s184retdec_H */

