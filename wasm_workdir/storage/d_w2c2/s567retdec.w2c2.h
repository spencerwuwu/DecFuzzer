#ifndef s567retdec_H
#define s567retdec_H

#include "w2c2_base.h"

typedef struct s567retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s567retdecInstance;

void f0(s567retdecInstance*);

void f1(s567retdecInstance*);

U32 f2(s567retdecInstance*);

void f3(s567retdecInstance*,U32);

U32 f4(s567retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s567retdecInstance*,U32,U32,U32,U32,U32);

void f6(s567retdecInstance*,U32);

void f7(s567retdecInstance*,U32,U32,U32);

void f8(s567retdecInstance*,U32,U32,U32);

void s567retdec____wasm_call_ctors(s567retdecInstance*i);

void s567retdec____wasm_apply_data_relocs(s567retdecInstance*i);

U32 s567retdec_func_1(s567retdecInstance*i);

void s567retdec_call_cb(s567retdecInstance*i,U32 l0);

void s567retdecInstantiate(s567retdecInstance* instance, void* resolve(const char* module, const char* name));

void s567retdecFreeInstance(s567retdecInstance* instance);

#endif /* s567retdec_H */

