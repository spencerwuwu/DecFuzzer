#ifndef s774retdec_H
#define s774retdec_H

#include "w2c2_base.h"

typedef struct s774retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s774retdecInstance;

void f0(s774retdecInstance*);

void f1(s774retdecInstance*);

U32 f2(s774retdecInstance*);

void f3(s774retdecInstance*,U32);

U32 f4(s774retdecInstance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s774retdecInstance*,U32,U32,U32,U32,U32);

void f6(s774retdecInstance*,U32);

void f7(s774retdecInstance*,U32,U32,U32);

void f8(s774retdecInstance*,U32,U32,U32);

void s774retdec____wasm_call_ctors(s774retdecInstance*i);

void s774retdec____wasm_apply_data_relocs(s774retdecInstance*i);

U32 s774retdec_func_1(s774retdecInstance*i);

void s774retdec_call_cb(s774retdecInstance*i,U32 l0);

void s774retdecInstantiate(s774retdecInstance* instance, void* resolve(const char* module, const char* name));

void s774retdecFreeInstance(s774retdecInstance* instance);

#endif /* s774retdec_H */

