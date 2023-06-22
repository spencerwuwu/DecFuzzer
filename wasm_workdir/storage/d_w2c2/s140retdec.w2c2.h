#ifndef s140retdec_H
#define s140retdec_H

#include "w2c2_base.h"

typedef struct s140retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s140retdecInstance;

void f0(s140retdecInstance*);

void f1(s140retdecInstance*);

U32 f2(s140retdecInstance*);

void f3(s140retdecInstance*,U32);

U32 f4(s140retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s140retdecInstance*,U32,U32,U32,U32,U32);

void f6(s140retdecInstance*,U32);

void f7(s140retdecInstance*,U32,U32,U32);

void f8(s140retdecInstance*,U32,U32,U32);

void s140retdec____wasm_call_ctors(s140retdecInstance*i);

void s140retdec____wasm_apply_data_relocs(s140retdecInstance*i);

U32 s140retdec_func_1(s140retdecInstance*i);

void s140retdec_call_cb(s140retdecInstance*i,U32 l0);

void s140retdecInstantiate(s140retdecInstance* instance, void* resolve(const char* module, const char* name));

void s140retdecFreeInstance(s140retdecInstance* instance);

#endif /* s140retdec_H */

