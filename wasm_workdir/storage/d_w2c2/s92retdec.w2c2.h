#ifndef s92retdec_H
#define s92retdec_H

#include "w2c2_base.h"

typedef struct s92retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s92retdecInstance;

void f0(s92retdecInstance*);

void f1(s92retdecInstance*);

U32 f2(s92retdecInstance*);

void f3(s92retdecInstance*,U32);

U32 f4(s92retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s92retdecInstance*,U32,U32,U32,U32,U32);

void f6(s92retdecInstance*,U32);

void f7(s92retdecInstance*,U32,U32,U32);

void f8(s92retdecInstance*,U32,U32,U32);

void s92retdec____wasm_call_ctors(s92retdecInstance*i);

void s92retdec____wasm_apply_data_relocs(s92retdecInstance*i);

U32 s92retdec_func_1(s92retdecInstance*i);

void s92retdec_call_cb(s92retdecInstance*i,U32 l0);

void s92retdecInstantiate(s92retdecInstance* instance, void* resolve(const char* module, const char* name));

void s92retdecFreeInstance(s92retdecInstance* instance);

#endif /* s92retdec_H */

