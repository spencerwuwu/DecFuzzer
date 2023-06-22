#ifndef s407retdec_H
#define s407retdec_H

#include "w2c2_base.h"

typedef struct s407retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s407retdecInstance;

void f0(s407retdecInstance*);

void f1(s407retdecInstance*);

U32 f2(s407retdecInstance*);

void f3(s407retdecInstance*,U32);

U32 f4(s407retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s407retdecInstance*,U32,U32,U32,U32,U32);

void f6(s407retdecInstance*,U32);

void f7(s407retdecInstance*,U32,U32,U32);

void f8(s407retdecInstance*,U32,U32,U32);

void s407retdec____wasm_call_ctors(s407retdecInstance*i);

void s407retdec____wasm_apply_data_relocs(s407retdecInstance*i);

U32 s407retdec_func_1(s407retdecInstance*i);

void s407retdec_call_cb(s407retdecInstance*i,U32 l0);

void s407retdecInstantiate(s407retdecInstance* instance, void* resolve(const char* module, const char* name));

void s407retdecFreeInstance(s407retdecInstance* instance);

#endif /* s407retdec_H */

