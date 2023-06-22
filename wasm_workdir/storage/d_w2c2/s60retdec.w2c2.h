#ifndef s60retdec_H
#define s60retdec_H

#include "w2c2_base.h"

typedef struct s60retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s60retdecInstance;

void f0(s60retdecInstance*);

void f1(s60retdecInstance*);

U32 f2(s60retdecInstance*);

void f3(s60retdecInstance*,U32);

U32 f4(s60retdecInstance*,U32,U32,U32,U32,U32);

void f5(s60retdecInstance*,U32,U32,U32,U32,U32);

void f6(s60retdecInstance*,U32);

void f7(s60retdecInstance*,U32,U32,U32);

void f8(s60retdecInstance*,U32,U32,U32);

void s60retdec____wasm_call_ctors(s60retdecInstance*i);

void s60retdec____wasm_apply_data_relocs(s60retdecInstance*i);

U32 s60retdec_func_1(s60retdecInstance*i);

void s60retdec_call_cb(s60retdecInstance*i,U32 l0);

void s60retdecInstantiate(s60retdecInstance* instance, void* resolve(const char* module, const char* name));

void s60retdecFreeInstance(s60retdecInstance* instance);

#endif /* s60retdec_H */

