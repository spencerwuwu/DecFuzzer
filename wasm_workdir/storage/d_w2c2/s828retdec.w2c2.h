#ifndef s828retdec_H
#define s828retdec_H

#include "w2c2_base.h"

typedef struct s828retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s828retdecInstance;

void f0(s828retdecInstance*);

void f1(s828retdecInstance*);

U32 f2(s828retdecInstance*);

void f3(s828retdecInstance*,U32);

U32 f4(s828retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s828retdecInstance*,U32,U32,U32,U32,U32);

void f6(s828retdecInstance*,U32);

void f7(s828retdecInstance*,U32,U32,U32);

void f8(s828retdecInstance*,U32,U32,U32);

void s828retdec____wasm_call_ctors(s828retdecInstance*i);

void s828retdec____wasm_apply_data_relocs(s828retdecInstance*i);

U32 s828retdec_func_1(s828retdecInstance*i);

void s828retdec_call_cb(s828retdecInstance*i,U32 l0);

void s828retdecInstantiate(s828retdecInstance* instance, void* resolve(const char* module, const char* name));

void s828retdecFreeInstance(s828retdecInstance* instance);

#endif /* s828retdec_H */

