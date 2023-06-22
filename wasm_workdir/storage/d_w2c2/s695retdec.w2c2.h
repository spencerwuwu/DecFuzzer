#ifndef s695retdec_H
#define s695retdec_H

#include "w2c2_base.h"

typedef struct s695retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s695retdecInstance;

void f0(s695retdecInstance*);

void f1(s695retdecInstance*);

U32 f2(s695retdecInstance*);

void f3(s695retdecInstance*,U32);

U32 f4(s695retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s695retdecInstance*,U32,U32,U32,U32,U32);

void f6(s695retdecInstance*,U32);

void f7(s695retdecInstance*,U32,U32,U32);

void f8(s695retdecInstance*,U32,U32,U32);

void s695retdec____wasm_call_ctors(s695retdecInstance*i);

void s695retdec____wasm_apply_data_relocs(s695retdecInstance*i);

U32 s695retdec_func_1(s695retdecInstance*i);

void s695retdec_call_cb(s695retdecInstance*i,U32 l0);

void s695retdecInstantiate(s695retdecInstance* instance, void* resolve(const char* module, const char* name));

void s695retdecFreeInstance(s695retdecInstance* instance);

#endif /* s695retdec_H */

