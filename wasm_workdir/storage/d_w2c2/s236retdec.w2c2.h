#ifndef s236retdec_H
#define s236retdec_H

#include "w2c2_base.h"

typedef struct s236retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s236retdecInstance;

void f0(s236retdecInstance*);

void f1(s236retdecInstance*);

U32 f2(s236retdecInstance*);

void f3(s236retdecInstance*,U32);

U32 f4(s236retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s236retdecInstance*,U32,U32,U32,U32,U32);

void f6(s236retdecInstance*,U32);

void f7(s236retdecInstance*,U32,U32,U32);

void f8(s236retdecInstance*,U32,U32,U32);

void s236retdec____wasm_call_ctors(s236retdecInstance*i);

void s236retdec____wasm_apply_data_relocs(s236retdecInstance*i);

U32 s236retdec_func_1(s236retdecInstance*i);

void s236retdec_call_cb(s236retdecInstance*i,U32 l0);

void s236retdecInstantiate(s236retdecInstance* instance, void* resolve(const char* module, const char* name));

void s236retdecFreeInstance(s236retdecInstance* instance);

#endif /* s236retdec_H */

