#ifndef s555retdec_H
#define s555retdec_H

#include "w2c2_base.h"

typedef struct s555retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s555retdecInstance;

void f0(s555retdecInstance*);

void f1(s555retdecInstance*);

U32 f2(s555retdecInstance*);

void f3(s555retdecInstance*,U32);

U32 f4(s555retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s555retdecInstance*,U32,U32,U32,U32,U32);

void f6(s555retdecInstance*,U32);

void f7(s555retdecInstance*,U32,U32,U32);

void f8(s555retdecInstance*,U32,U32,U32);

void s555retdec____wasm_call_ctors(s555retdecInstance*i);

void s555retdec____wasm_apply_data_relocs(s555retdecInstance*i);

U32 s555retdec_func_1(s555retdecInstance*i);

void s555retdec_call_cb(s555retdecInstance*i,U32 l0);

void s555retdecInstantiate(s555retdecInstance* instance, void* resolve(const char* module, const char* name));

void s555retdecFreeInstance(s555retdecInstance* instance);

#endif /* s555retdec_H */

