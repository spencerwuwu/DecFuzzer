#ifndef s560retdec_H
#define s560retdec_H

#include "w2c2_base.h"

typedef struct s560retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s560retdecInstance;

void f0(s560retdecInstance*);

void f1(s560retdecInstance*);

U32 f2(s560retdecInstance*);

void f3(s560retdecInstance*,U32);

U32 f4(s560retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s560retdecInstance*,U32,U32,U32,U32,U32);

void f6(s560retdecInstance*,U32);

void f7(s560retdecInstance*,U32,U32,U32);

void f8(s560retdecInstance*,U32,U32,U32);

void s560retdec____wasm_call_ctors(s560retdecInstance*i);

void s560retdec____wasm_apply_data_relocs(s560retdecInstance*i);

U32 s560retdec_func_1(s560retdecInstance*i);

void s560retdec_call_cb(s560retdecInstance*i,U32 l0);

void s560retdecInstantiate(s560retdecInstance* instance, void* resolve(const char* module, const char* name));

void s560retdecFreeInstance(s560retdecInstance* instance);

#endif /* s560retdec_H */

