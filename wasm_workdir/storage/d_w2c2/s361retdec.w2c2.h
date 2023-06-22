#ifndef s361retdec_H
#define s361retdec_H

#include "w2c2_base.h"

typedef struct s361retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s361retdecInstance;

void f0(s361retdecInstance*);

void f1(s361retdecInstance*);

U32 f2(s361retdecInstance*);

void f3(s361retdecInstance*,U32);

U32 f4(s361retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s361retdecInstance*,U32,U32,U32,U32,U32);

void f6(s361retdecInstance*,U32);

void f7(s361retdecInstance*,U32,U32,U32);

void f8(s361retdecInstance*,U32,U32,U32);

void s361retdec____wasm_call_ctors(s361retdecInstance*i);

void s361retdec____wasm_apply_data_relocs(s361retdecInstance*i);

U32 s361retdec_func_1(s361retdecInstance*i);

void s361retdec_call_cb(s361retdecInstance*i,U32 l0);

void s361retdecInstantiate(s361retdecInstance* instance, void* resolve(const char* module, const char* name));

void s361retdecFreeInstance(s361retdecInstance* instance);

#endif /* s361retdec_H */

