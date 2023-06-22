#ifndef s52retdec_H
#define s52retdec_H

#include "w2c2_base.h"

typedef struct s52retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s52retdecInstance;

void f0(s52retdecInstance*);

void f1(s52retdecInstance*);

U32 f2(s52retdecInstance*);

void f3(s52retdecInstance*,U32);

U32 f4(s52retdecInstance*,U32,U32,U32);

void f5(s52retdecInstance*,U32,U32,U32,U32,U32);

void f6(s52retdecInstance*,U32);

void f7(s52retdecInstance*,U32,U32,U32);

void f8(s52retdecInstance*,U32,U32,U32);

void s52retdec____wasm_call_ctors(s52retdecInstance*i);

void s52retdec____wasm_apply_data_relocs(s52retdecInstance*i);

U32 s52retdec_func_1(s52retdecInstance*i);

void s52retdec_call_cb(s52retdecInstance*i,U32 l0);

void s52retdecInstantiate(s52retdecInstance* instance, void* resolve(const char* module, const char* name));

void s52retdecFreeInstance(s52retdecInstance* instance);

#endif /* s52retdec_H */

