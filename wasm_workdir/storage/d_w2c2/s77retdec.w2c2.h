#ifndef s77retdec_H
#define s77retdec_H

#include "w2c2_base.h"

typedef struct s77retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s77retdecInstance;

void f0(s77retdecInstance*);

void f1(s77retdecInstance*);

U32 f2(s77retdecInstance*);

void f3(s77retdecInstance*,U32);

U32 f4(s77retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s77retdecInstance*,U32,U32,U32,U32,U32);

void f6(s77retdecInstance*,U32);

void f7(s77retdecInstance*,U32,U32,U32);

void f8(s77retdecInstance*,U32,U32,U32);

void s77retdec____wasm_call_ctors(s77retdecInstance*i);

void s77retdec____wasm_apply_data_relocs(s77retdecInstance*i);

U32 s77retdec_func_1(s77retdecInstance*i);

void s77retdec_call_cb(s77retdecInstance*i,U32 l0);

void s77retdecInstantiate(s77retdecInstance* instance, void* resolve(const char* module, const char* name));

void s77retdecFreeInstance(s77retdecInstance* instance);

#endif /* s77retdec_H */

