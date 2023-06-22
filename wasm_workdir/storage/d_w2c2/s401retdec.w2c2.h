#ifndef s401retdec_H
#define s401retdec_H

#include "w2c2_base.h"

typedef struct s401retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s401retdecInstance;

void f0(s401retdecInstance*);

void f1(s401retdecInstance*);

U32 f2(s401retdecInstance*);

void f3(s401retdecInstance*,U32);

U32 f4(s401retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s401retdecInstance*,U32,U32,U32,U32,U32);

void f6(s401retdecInstance*,U32);

void f7(s401retdecInstance*,U32,U32,U32);

void f8(s401retdecInstance*,U32,U32,U32);

void s401retdec____wasm_call_ctors(s401retdecInstance*i);

void s401retdec____wasm_apply_data_relocs(s401retdecInstance*i);

U32 s401retdec_func_1(s401retdecInstance*i);

void s401retdec_call_cb(s401retdecInstance*i,U32 l0);

void s401retdecInstantiate(s401retdecInstance* instance, void* resolve(const char* module, const char* name));

void s401retdecFreeInstance(s401retdecInstance* instance);

#endif /* s401retdec_H */

