#ifndef s235retdec_H
#define s235retdec_H

#include "w2c2_base.h"

typedef struct s235retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s235retdecInstance;

void f0(s235retdecInstance*);

void f1(s235retdecInstance*);

U32 f2(s235retdecInstance*);

void f3(s235retdecInstance*,U32);

U32 f4(s235retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s235retdecInstance*,U32,U32,U32,U32,U32);

void f6(s235retdecInstance*,U32);

void f7(s235retdecInstance*,U32,U32,U32);

void f8(s235retdecInstance*,U32,U32,U32);

void s235retdec____wasm_call_ctors(s235retdecInstance*i);

void s235retdec____wasm_apply_data_relocs(s235retdecInstance*i);

U32 s235retdec_func_1(s235retdecInstance*i);

void s235retdec_call_cb(s235retdecInstance*i,U32 l0);

void s235retdecInstantiate(s235retdecInstance* instance, void* resolve(const char* module, const char* name));

void s235retdecFreeInstance(s235retdecInstance* instance);

#endif /* s235retdec_H */

