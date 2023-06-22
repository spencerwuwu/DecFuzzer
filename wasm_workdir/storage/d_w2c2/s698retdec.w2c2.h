#ifndef s698retdec_H
#define s698retdec_H

#include "w2c2_base.h"

typedef struct s698retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s698retdecInstance;

void f0(s698retdecInstance*);

void f1(s698retdecInstance*);

U32 f2(s698retdecInstance*);

void f3(s698retdecInstance*,U32);

U32 f4(s698retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s698retdecInstance*,U32,U32,U32,U32,U32);

void f6(s698retdecInstance*,U32);

void f7(s698retdecInstance*,U32,U32,U32);

void f8(s698retdecInstance*,U32,U32,U32);

void s698retdec____wasm_call_ctors(s698retdecInstance*i);

void s698retdec____wasm_apply_data_relocs(s698retdecInstance*i);

U32 s698retdec_func_1(s698retdecInstance*i);

void s698retdec_call_cb(s698retdecInstance*i,U32 l0);

void s698retdecInstantiate(s698retdecInstance* instance, void* resolve(const char* module, const char* name));

void s698retdecFreeInstance(s698retdecInstance* instance);

#endif /* s698retdec_H */

