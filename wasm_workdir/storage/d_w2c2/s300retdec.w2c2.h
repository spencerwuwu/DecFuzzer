#ifndef s300retdec_H
#define s300retdec_H

#include "w2c2_base.h"

typedef struct s300retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s300retdecInstance;

void f0(s300retdecInstance*);

void f1(s300retdecInstance*);

U32 f2(s300retdecInstance*);

void f3(s300retdecInstance*,U32);

U32 f4(s300retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s300retdecInstance*,U32,U32,U32,U32,U32);

void f6(s300retdecInstance*,U32);

void f7(s300retdecInstance*,U32,U32,U32);

void f8(s300retdecInstance*,U32,U32,U32);

void s300retdec____wasm_call_ctors(s300retdecInstance*i);

void s300retdec____wasm_apply_data_relocs(s300retdecInstance*i);

U32 s300retdec_func_1(s300retdecInstance*i);

void s300retdec_call_cb(s300retdecInstance*i,U32 l0);

void s300retdecInstantiate(s300retdecInstance* instance, void* resolve(const char* module, const char* name));

void s300retdecFreeInstance(s300retdecInstance* instance);

#endif /* s300retdec_H */

