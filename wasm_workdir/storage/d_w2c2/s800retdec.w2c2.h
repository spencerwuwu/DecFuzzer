#ifndef s800retdec_H
#define s800retdec_H

#include "w2c2_base.h"

typedef struct s800retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s800retdecInstance;

void f0(s800retdecInstance*);

void f1(s800retdecInstance*);

U32 f2(s800retdecInstance*);

void f3(s800retdecInstance*,U32);

U32 f4(s800retdecInstance*,U32,U32,U32,U32,U32);

void f5(s800retdecInstance*,U32,U32,U32,U32,U32);

void f6(s800retdecInstance*,U32);

void f7(s800retdecInstance*,U32,U32,U32);

void f8(s800retdecInstance*,U32,U32,U32);

void s800retdec____wasm_call_ctors(s800retdecInstance*i);

void s800retdec____wasm_apply_data_relocs(s800retdecInstance*i);

U32 s800retdec_func_1(s800retdecInstance*i);

void s800retdec_call_cb(s800retdecInstance*i,U32 l0);

void s800retdecInstantiate(s800retdecInstance* instance, void* resolve(const char* module, const char* name));

void s800retdecFreeInstance(s800retdecInstance* instance);

#endif /* s800retdec_H */

