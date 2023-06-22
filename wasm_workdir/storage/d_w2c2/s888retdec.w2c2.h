#ifndef s888retdec_H
#define s888retdec_H

#include "w2c2_base.h"

typedef struct s888retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s888retdecInstance;

void f0(s888retdecInstance*);

void f1(s888retdecInstance*);

U32 f2(s888retdecInstance*);

void f3(s888retdecInstance*,U32);

U32 f4(s888retdecInstance*,U32,U32,U32,U32);

void f5(s888retdecInstance*,U32,U32,U32,U32,U32);

void f6(s888retdecInstance*,U32);

void f7(s888retdecInstance*,U32,U32,U32);

void f8(s888retdecInstance*,U32,U32,U32);

void s888retdec____wasm_call_ctors(s888retdecInstance*i);

void s888retdec____wasm_apply_data_relocs(s888retdecInstance*i);

U32 s888retdec_func_1(s888retdecInstance*i);

void s888retdec_call_cb(s888retdecInstance*i,U32 l0);

void s888retdecInstantiate(s888retdecInstance* instance, void* resolve(const char* module, const char* name));

void s888retdecFreeInstance(s888retdecInstance* instance);

#endif /* s888retdec_H */

