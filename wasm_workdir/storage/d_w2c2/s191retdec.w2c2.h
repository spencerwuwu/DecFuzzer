#ifndef s191retdec_H
#define s191retdec_H

#include "w2c2_base.h"

typedef struct s191retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s191retdecInstance;

void f0(s191retdecInstance*);

void f1(s191retdecInstance*);

U32 f2(s191retdecInstance*);

void f3(s191retdecInstance*,U32);

U32 f4(s191retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s191retdecInstance*,U32,U32,U32,U32,U32);

void f6(s191retdecInstance*,U32);

void f7(s191retdecInstance*,U32,U32,U32);

void f8(s191retdecInstance*,U32,U32,U32);

void s191retdec____wasm_call_ctors(s191retdecInstance*i);

void s191retdec____wasm_apply_data_relocs(s191retdecInstance*i);

U32 s191retdec_func_1(s191retdecInstance*i);

void s191retdec_call_cb(s191retdecInstance*i,U32 l0);

void s191retdecInstantiate(s191retdecInstance* instance, void* resolve(const char* module, const char* name));

void s191retdecFreeInstance(s191retdecInstance* instance);

#endif /* s191retdec_H */

