#ifndef s96retdec_H
#define s96retdec_H

#include "w2c2_base.h"

typedef struct s96retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s96retdecInstance;

void f0(s96retdecInstance*);

void f1(s96retdecInstance*);

U32 f2(s96retdecInstance*);

void f3(s96retdecInstance*,U32);

U32 f4(s96retdecInstance*,U32,U32,U32);

void f5(s96retdecInstance*,U32,U32,U32,U32,U32);

void f6(s96retdecInstance*,U32);

void f7(s96retdecInstance*,U32,U32,U32);

void f8(s96retdecInstance*,U32,U32,U32);

void s96retdec____wasm_call_ctors(s96retdecInstance*i);

void s96retdec____wasm_apply_data_relocs(s96retdecInstance*i);

U32 s96retdec_func_1(s96retdecInstance*i);

void s96retdec_call_cb(s96retdecInstance*i,U32 l0);

void s96retdecInstantiate(s96retdecInstance* instance, void* resolve(const char* module, const char* name));

void s96retdecFreeInstance(s96retdecInstance* instance);

#endif /* s96retdec_H */

