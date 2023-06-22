#ifndef s491retdec_H
#define s491retdec_H

#include "w2c2_base.h"

typedef struct s491retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s491retdecInstance;

void f0(s491retdecInstance*);

void f1(s491retdecInstance*);

U32 f2(s491retdecInstance*);

void f3(s491retdecInstance*,U32);

U32 f4(s491retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s491retdecInstance*,U32,U32,U32,U32,U32);

void f6(s491retdecInstance*,U32);

void f7(s491retdecInstance*,U32,U32,U32);

void f8(s491retdecInstance*,U32,U32,U32);

void s491retdec____wasm_call_ctors(s491retdecInstance*i);

void s491retdec____wasm_apply_data_relocs(s491retdecInstance*i);

U32 s491retdec_func_1(s491retdecInstance*i);

void s491retdec_call_cb(s491retdecInstance*i,U32 l0);

void s491retdecInstantiate(s491retdecInstance* instance, void* resolve(const char* module, const char* name));

void s491retdecFreeInstance(s491retdecInstance* instance);

#endif /* s491retdec_H */

