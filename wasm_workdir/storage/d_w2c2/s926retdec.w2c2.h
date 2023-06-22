#ifndef s926retdec_H
#define s926retdec_H

#include "w2c2_base.h"

typedef struct s926retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s926retdecInstance;

void f0(s926retdecInstance*);

void f1(s926retdecInstance*);

U32 f2(s926retdecInstance*);

void f3(s926retdecInstance*,U32);

U32 f4(s926retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s926retdecInstance*,U32,U32,U32,U32,U32);

void f6(s926retdecInstance*,U32);

void f7(s926retdecInstance*,U32,U32,U32);

void f8(s926retdecInstance*,U32,U32,U32);

void s926retdec____wasm_call_ctors(s926retdecInstance*i);

void s926retdec____wasm_apply_data_relocs(s926retdecInstance*i);

U32 s926retdec_func_1(s926retdecInstance*i);

void s926retdec_call_cb(s926retdecInstance*i,U32 l0);

void s926retdecInstantiate(s926retdecInstance* instance, void* resolve(const char* module, const char* name));

void s926retdecFreeInstance(s926retdecInstance* instance);

#endif /* s926retdec_H */

