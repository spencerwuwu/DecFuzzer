#ifndef s632retdec_H
#define s632retdec_H

#include "w2c2_base.h"

typedef struct s632retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s632retdecInstance;

void f0(s632retdecInstance*);

void f1(s632retdecInstance*);

U32 f2(s632retdecInstance*);

void f3(s632retdecInstance*,U32);

U32 f4(s632retdecInstance*,U32,U32,U32);

void f5(s632retdecInstance*,U32,U32,U32,U32,U32);

void f6(s632retdecInstance*,U32);

void f7(s632retdecInstance*,U32,U32,U32);

void f8(s632retdecInstance*,U32,U32,U32);

void s632retdec____wasm_call_ctors(s632retdecInstance*i);

void s632retdec____wasm_apply_data_relocs(s632retdecInstance*i);

U32 s632retdec_func_1(s632retdecInstance*i);

void s632retdec_call_cb(s632retdecInstance*i,U32 l0);

void s632retdecInstantiate(s632retdecInstance* instance, void* resolve(const char* module, const char* name));

void s632retdecFreeInstance(s632retdecInstance* instance);

#endif /* s632retdec_H */

