#ifndef s435retdec_H
#define s435retdec_H

#include "w2c2_base.h"

typedef struct s435retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s435retdecInstance;

void f0(s435retdecInstance*);

void f1(s435retdecInstance*);

U32 f2(s435retdecInstance*);

void f3(s435retdecInstance*,U32);

U32 f4(s435retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s435retdecInstance*,U32,U32,U32,U32,U32);

void f6(s435retdecInstance*,U32);

void f7(s435retdecInstance*,U32,U32,U32);

void f8(s435retdecInstance*,U32,U32,U32);

void s435retdec____wasm_call_ctors(s435retdecInstance*i);

void s435retdec____wasm_apply_data_relocs(s435retdecInstance*i);

U32 s435retdec_func_1(s435retdecInstance*i);

void s435retdec_call_cb(s435retdecInstance*i,U32 l0);

void s435retdecInstantiate(s435retdecInstance* instance, void* resolve(const char* module, const char* name));

void s435retdecFreeInstance(s435retdecInstance* instance);

#endif /* s435retdec_H */

