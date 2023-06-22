#ifndef s232retdec_H
#define s232retdec_H

#include "w2c2_base.h"

typedef struct s232retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s232retdecInstance;

void f0(s232retdecInstance*);

void f1(s232retdecInstance*);

U32 f2(s232retdecInstance*);

void f3(s232retdecInstance*,U32);

U32 f4(s232retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s232retdecInstance*,U32,U32,U32,U32,U32);

void f6(s232retdecInstance*,U32);

void f7(s232retdecInstance*,U32,U32,U32);

void f8(s232retdecInstance*,U32,U32,U32);

void s232retdec____wasm_call_ctors(s232retdecInstance*i);

void s232retdec____wasm_apply_data_relocs(s232retdecInstance*i);

U32 s232retdec_func_1(s232retdecInstance*i);

void s232retdec_call_cb(s232retdecInstance*i,U32 l0);

void s232retdecInstantiate(s232retdecInstance* instance, void* resolve(const char* module, const char* name));

void s232retdecFreeInstance(s232retdecInstance* instance);

#endif /* s232retdec_H */

