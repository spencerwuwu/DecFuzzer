#ifndef s935retdec_H
#define s935retdec_H

#include "w2c2_base.h"

typedef struct s935retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s935retdecInstance;

void f0(s935retdecInstance*);

void f1(s935retdecInstance*);

U32 f2(s935retdecInstance*);

void f3(s935retdecInstance*,U32);

U32 f4(s935retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s935retdecInstance*,U32,U32,U32,U32,U32);

void f6(s935retdecInstance*,U32);

void f7(s935retdecInstance*,U32,U32,U32);

void f8(s935retdecInstance*,U32,U32,U32);

void s935retdec____wasm_call_ctors(s935retdecInstance*i);

void s935retdec____wasm_apply_data_relocs(s935retdecInstance*i);

U32 s935retdec_func_1(s935retdecInstance*i);

void s935retdec_call_cb(s935retdecInstance*i,U32 l0);

void s935retdecInstantiate(s935retdecInstance* instance, void* resolve(const char* module, const char* name));

void s935retdecFreeInstance(s935retdecInstance* instance);

#endif /* s935retdec_H */

