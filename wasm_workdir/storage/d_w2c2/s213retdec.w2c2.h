#ifndef s213retdec_H
#define s213retdec_H

#include "w2c2_base.h"

typedef struct s213retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s213retdecInstance;

void f0(s213retdecInstance*);

void f1(s213retdecInstance*);

U32 f2(s213retdecInstance*);

void f3(s213retdecInstance*,U32);

U32 f4(s213retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s213retdecInstance*,U32,U32,U32,U32,U32);

void f6(s213retdecInstance*,U32);

void f7(s213retdecInstance*,U32,U32,U32);

void f8(s213retdecInstance*,U32,U32,U32);

void s213retdec____wasm_call_ctors(s213retdecInstance*i);

void s213retdec____wasm_apply_data_relocs(s213retdecInstance*i);

U32 s213retdec_func_1(s213retdecInstance*i);

void s213retdec_call_cb(s213retdecInstance*i,U32 l0);

void s213retdecInstantiate(s213retdecInstance* instance, void* resolve(const char* module, const char* name));

void s213retdecFreeInstance(s213retdecInstance* instance);

#endif /* s213retdec_H */

