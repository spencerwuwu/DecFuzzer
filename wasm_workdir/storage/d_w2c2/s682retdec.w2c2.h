#ifndef s682retdec_H
#define s682retdec_H

#include "w2c2_base.h"

typedef struct s682retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s682retdecInstance;

void f0(s682retdecInstance*);

void f1(s682retdecInstance*);

U32 f2(s682retdecInstance*);

void f3(s682retdecInstance*,U32);

U32 f4(s682retdecInstance*,U32,U32,U32,U32,U32);

void f5(s682retdecInstance*,U32,U32,U32,U32,U32);

void f6(s682retdecInstance*,U32);

void f7(s682retdecInstance*,U32,U32,U32);

void f8(s682retdecInstance*,U32,U32,U32);

void s682retdec____wasm_call_ctors(s682retdecInstance*i);

void s682retdec____wasm_apply_data_relocs(s682retdecInstance*i);

U32 s682retdec_func_1(s682retdecInstance*i);

void s682retdec_call_cb(s682retdecInstance*i,U32 l0);

void s682retdecInstantiate(s682retdecInstance* instance, void* resolve(const char* module, const char* name));

void s682retdecFreeInstance(s682retdecInstance* instance);

#endif /* s682retdec_H */

