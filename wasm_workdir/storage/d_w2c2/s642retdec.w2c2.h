#ifndef s642retdec_H
#define s642retdec_H

#include "w2c2_base.h"

typedef struct s642retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s642retdecInstance;

void f0(s642retdecInstance*);

void f1(s642retdecInstance*);

U32 f2(s642retdecInstance*);

void f3(s642retdecInstance*,U32);

U32 f4(s642retdecInstance*,U32,U32,U32);

void f5(s642retdecInstance*,U32,U32,U32,U32,U32);

void f6(s642retdecInstance*,U32);

void f7(s642retdecInstance*,U32,U32,U32);

void f8(s642retdecInstance*,U32,U32,U32);

void s642retdec____wasm_call_ctors(s642retdecInstance*i);

void s642retdec____wasm_apply_data_relocs(s642retdecInstance*i);

U32 s642retdec_func_1(s642retdecInstance*i);

void s642retdec_call_cb(s642retdecInstance*i,U32 l0);

void s642retdecInstantiate(s642retdecInstance* instance, void* resolve(const char* module, const char* name));

void s642retdecFreeInstance(s642retdecInstance* instance);

#endif /* s642retdec_H */

