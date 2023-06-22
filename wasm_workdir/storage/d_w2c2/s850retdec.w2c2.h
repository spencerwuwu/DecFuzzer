#ifndef s850retdec_H
#define s850retdec_H

#include "w2c2_base.h"

typedef struct s850retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s850retdecInstance;

void f0(s850retdecInstance*);

void f1(s850retdecInstance*);

U32 f2(s850retdecInstance*);

void f3(s850retdecInstance*,U32);

U32 f4(s850retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s850retdecInstance*,U32,U32,U32,U32,U32);

void f6(s850retdecInstance*,U32);

void f7(s850retdecInstance*,U32,U32,U32);

void f8(s850retdecInstance*,U32,U32,U32);

void s850retdec____wasm_call_ctors(s850retdecInstance*i);

void s850retdec____wasm_apply_data_relocs(s850retdecInstance*i);

U32 s850retdec_func_1(s850retdecInstance*i);

void s850retdec_call_cb(s850retdecInstance*i,U32 l0);

void s850retdecInstantiate(s850retdecInstance* instance, void* resolve(const char* module, const char* name));

void s850retdecFreeInstance(s850retdecInstance* instance);

#endif /* s850retdec_H */

