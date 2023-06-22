#ifndef s770retdec_H
#define s770retdec_H

#include "w2c2_base.h"

typedef struct s770retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s770retdecInstance;

void f0(s770retdecInstance*);

void f1(s770retdecInstance*);

U32 f2(s770retdecInstance*);

void f3(s770retdecInstance*,U32);

U32 f4(s770retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s770retdecInstance*,U32,U32,U32,U32,U32);

void f6(s770retdecInstance*,U32);

void f7(s770retdecInstance*,U32,U32,U32);

void f8(s770retdecInstance*,U32,U32,U32);

void s770retdec____wasm_call_ctors(s770retdecInstance*i);

void s770retdec____wasm_apply_data_relocs(s770retdecInstance*i);

U32 s770retdec_func_1(s770retdecInstance*i);

void s770retdec_call_cb(s770retdecInstance*i,U32 l0);

void s770retdecInstantiate(s770retdecInstance* instance, void* resolve(const char* module, const char* name));

void s770retdecFreeInstance(s770retdecInstance* instance);

#endif /* s770retdec_H */

