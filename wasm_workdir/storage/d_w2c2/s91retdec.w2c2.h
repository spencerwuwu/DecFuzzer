#ifndef s91retdec_H
#define s91retdec_H

#include "w2c2_base.h"

typedef struct s91retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s91retdecInstance;

void f0(s91retdecInstance*);

void f1(s91retdecInstance*);

U32 f2(s91retdecInstance*);

void f3(s91retdecInstance*,U32);

U32 f4(s91retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s91retdecInstance*,U32,U32,U32,U32,U32);

void f6(s91retdecInstance*,U32);

void f7(s91retdecInstance*,U32,U32,U32);

void f8(s91retdecInstance*,U32,U32,U32);

void s91retdec____wasm_call_ctors(s91retdecInstance*i);

void s91retdec____wasm_apply_data_relocs(s91retdecInstance*i);

U32 s91retdec_func_1(s91retdecInstance*i);

void s91retdec_call_cb(s91retdecInstance*i,U32 l0);

void s91retdecInstantiate(s91retdecInstance* instance, void* resolve(const char* module, const char* name));

void s91retdecFreeInstance(s91retdecInstance* instance);

#endif /* s91retdec_H */

