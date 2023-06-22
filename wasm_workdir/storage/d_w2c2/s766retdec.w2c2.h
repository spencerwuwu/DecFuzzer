#ifndef s766retdec_H
#define s766retdec_H

#include "w2c2_base.h"

typedef struct s766retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s766retdecInstance;

void f0(s766retdecInstance*);

void f1(s766retdecInstance*);

U32 f2(s766retdecInstance*);

void f3(s766retdecInstance*,U32);

U32 f4(s766retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s766retdecInstance*,U32,U32,U32,U32,U32);

void f6(s766retdecInstance*,U32);

void f7(s766retdecInstance*,U32,U32,U32);

void f8(s766retdecInstance*,U32,U32,U32);

void s766retdec____wasm_call_ctors(s766retdecInstance*i);

void s766retdec____wasm_apply_data_relocs(s766retdecInstance*i);

U32 s766retdec_func_1(s766retdecInstance*i);

void s766retdec_call_cb(s766retdecInstance*i,U32 l0);

void s766retdecInstantiate(s766retdecInstance* instance, void* resolve(const char* module, const char* name));

void s766retdecFreeInstance(s766retdecInstance* instance);

#endif /* s766retdec_H */

