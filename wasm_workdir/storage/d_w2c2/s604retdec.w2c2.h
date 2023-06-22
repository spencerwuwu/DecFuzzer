#ifndef s604retdec_H
#define s604retdec_H

#include "w2c2_base.h"

typedef struct s604retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s604retdecInstance;

void f0(s604retdecInstance*);

void f1(s604retdecInstance*);

U32 f2(s604retdecInstance*);

void f3(s604retdecInstance*,U32);

U32 f4(s604retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s604retdecInstance*,U32,U32,U32,U32,U32);

void f6(s604retdecInstance*,U32);

void f7(s604retdecInstance*,U32,U32,U32);

void f8(s604retdecInstance*,U32,U32,U32);

void s604retdec____wasm_call_ctors(s604retdecInstance*i);

void s604retdec____wasm_apply_data_relocs(s604retdecInstance*i);

U32 s604retdec_func_1(s604retdecInstance*i);

void s604retdec_call_cb(s604retdecInstance*i,U32 l0);

void s604retdecInstantiate(s604retdecInstance* instance, void* resolve(const char* module, const char* name));

void s604retdecFreeInstance(s604retdecInstance* instance);

#endif /* s604retdec_H */

