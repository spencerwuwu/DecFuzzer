#ifndef s331retdec_H
#define s331retdec_H

#include "w2c2_base.h"

typedef struct s331retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s331retdecInstance;

void f0(s331retdecInstance*);

void f1(s331retdecInstance*);

U32 f2(s331retdecInstance*);

void f3(s331retdecInstance*,U32);

U32 f4(s331retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s331retdecInstance*,U32,U32,U32,U32,U32);

void f6(s331retdecInstance*,U32);

void f7(s331retdecInstance*,U32,U32,U32);

void f8(s331retdecInstance*,U32,U32,U32);

void s331retdec____wasm_call_ctors(s331retdecInstance*i);

void s331retdec____wasm_apply_data_relocs(s331retdecInstance*i);

U32 s331retdec_func_1(s331retdecInstance*i);

void s331retdec_call_cb(s331retdecInstance*i,U32 l0);

void s331retdecInstantiate(s331retdecInstance* instance, void* resolve(const char* module, const char* name));

void s331retdecFreeInstance(s331retdecInstance* instance);

#endif /* s331retdec_H */

