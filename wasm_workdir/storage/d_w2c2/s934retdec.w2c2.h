#ifndef s934retdec_H
#define s934retdec_H

#include "w2c2_base.h"

typedef struct s934retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s934retdecInstance;

void f0(s934retdecInstance*);

void f1(s934retdecInstance*);

U32 f2(s934retdecInstance*);

void f3(s934retdecInstance*,U32);

U32 f4(s934retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s934retdecInstance*,U32,U32,U32,U32,U32);

void f6(s934retdecInstance*,U32);

void f7(s934retdecInstance*,U32,U32,U32);

void f8(s934retdecInstance*,U32,U32,U32);

void s934retdec____wasm_call_ctors(s934retdecInstance*i);

void s934retdec____wasm_apply_data_relocs(s934retdecInstance*i);

U32 s934retdec_func_1(s934retdecInstance*i);

void s934retdec_call_cb(s934retdecInstance*i,U32 l0);

void s934retdecInstantiate(s934retdecInstance* instance, void* resolve(const char* module, const char* name));

void s934retdecFreeInstance(s934retdecInstance* instance);

#endif /* s934retdec_H */

