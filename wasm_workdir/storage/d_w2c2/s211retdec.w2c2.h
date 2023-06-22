#ifndef s211retdec_H
#define s211retdec_H

#include "w2c2_base.h"

typedef struct s211retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s211retdecInstance;

void f0(s211retdecInstance*);

void f1(s211retdecInstance*);

U32 f2(s211retdecInstance*);

void f3(s211retdecInstance*,U32);

U32 f4(s211retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s211retdecInstance*,U32,U32,U32,U32,U32);

void f6(s211retdecInstance*,U32);

void f7(s211retdecInstance*,U32,U32,U32);

void f8(s211retdecInstance*,U32,U32,U32);

void s211retdec____wasm_call_ctors(s211retdecInstance*i);

void s211retdec____wasm_apply_data_relocs(s211retdecInstance*i);

U32 s211retdec_func_1(s211retdecInstance*i);

void s211retdec_call_cb(s211retdecInstance*i,U32 l0);

void s211retdecInstantiate(s211retdecInstance* instance, void* resolve(const char* module, const char* name));

void s211retdecFreeInstance(s211retdecInstance* instance);

#endif /* s211retdec_H */

