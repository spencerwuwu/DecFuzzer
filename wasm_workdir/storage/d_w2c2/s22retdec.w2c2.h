#ifndef s22retdec_H
#define s22retdec_H

#include "w2c2_base.h"

typedef struct s22retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s22retdecInstance;

void f0(s22retdecInstance*);

void f1(s22retdecInstance*);

U32 f2(s22retdecInstance*);

void f3(s22retdecInstance*,U32);

U32 f4(s22retdecInstance*,U32,U32,U32,U32);

void f5(s22retdecInstance*,U32,U32,U32,U32,U32);

void f6(s22retdecInstance*,U32);

void f7(s22retdecInstance*,U32,U32,U32);

void f8(s22retdecInstance*,U32,U32,U32);

void s22retdec____wasm_call_ctors(s22retdecInstance*i);

void s22retdec____wasm_apply_data_relocs(s22retdecInstance*i);

U32 s22retdec_func_1(s22retdecInstance*i);

void s22retdec_call_cb(s22retdecInstance*i,U32 l0);

void s22retdecInstantiate(s22retdecInstance* instance, void* resolve(const char* module, const char* name));

void s22retdecFreeInstance(s22retdecInstance* instance);

#endif /* s22retdec_H */

