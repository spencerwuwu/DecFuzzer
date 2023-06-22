#ifndef s155retdec_H
#define s155retdec_H

#include "w2c2_base.h"

typedef struct s155retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s155retdecInstance;

void f0(s155retdecInstance*);

void f1(s155retdecInstance*);

U32 f2(s155retdecInstance*);

void f3(s155retdecInstance*,U32);

U32 f4(s155retdecInstance*,U32,U32,U32);

void f5(s155retdecInstance*,U32,U32,U32,U32,U32);

void f6(s155retdecInstance*,U32);

void f7(s155retdecInstance*,U32,U32,U32);

void f8(s155retdecInstance*,U32,U32,U32);

void s155retdec____wasm_call_ctors(s155retdecInstance*i);

void s155retdec____wasm_apply_data_relocs(s155retdecInstance*i);

U32 s155retdec_func_1(s155retdecInstance*i);

void s155retdec_call_cb(s155retdecInstance*i,U32 l0);

void s155retdecInstantiate(s155retdecInstance* instance, void* resolve(const char* module, const char* name));

void s155retdecFreeInstance(s155retdecInstance* instance);

#endif /* s155retdec_H */

