#ifndef s731retdec_H
#define s731retdec_H

#include "w2c2_base.h"

typedef struct s731retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s731retdecInstance;

void f0(s731retdecInstance*);

void f1(s731retdecInstance*);

U32 f2(s731retdecInstance*);

void f3(s731retdecInstance*,U32);

U32 f4(s731retdecInstance*,U32,U32,U32,U32);

void f5(s731retdecInstance*,U32,U32,U32,U32,U32);

void f6(s731retdecInstance*,U32);

void f7(s731retdecInstance*,U32,U32,U32);

void f8(s731retdecInstance*,U32,U32,U32);

void s731retdec____wasm_call_ctors(s731retdecInstance*i);

void s731retdec____wasm_apply_data_relocs(s731retdecInstance*i);

U32 s731retdec_func_1(s731retdecInstance*i);

void s731retdec_call_cb(s731retdecInstance*i,U32 l0);

void s731retdecInstantiate(s731retdecInstance* instance, void* resolve(const char* module, const char* name));

void s731retdecFreeInstance(s731retdecInstance* instance);

#endif /* s731retdec_H */

