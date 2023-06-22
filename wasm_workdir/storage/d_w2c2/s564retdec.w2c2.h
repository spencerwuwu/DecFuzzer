#ifndef s564retdec_H
#define s564retdec_H

#include "w2c2_base.h"

typedef struct s564retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s564retdecInstance;

void f0(s564retdecInstance*);

void f1(s564retdecInstance*);

U32 f2(s564retdecInstance*);

void f3(s564retdecInstance*,U32);

U32 f4(s564retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s564retdecInstance*,U32,U32,U32,U32,U32);

void f6(s564retdecInstance*,U32);

void f7(s564retdecInstance*,U32,U32,U32);

void f8(s564retdecInstance*,U32,U32,U32);

void s564retdec____wasm_call_ctors(s564retdecInstance*i);

void s564retdec____wasm_apply_data_relocs(s564retdecInstance*i);

U32 s564retdec_func_1(s564retdecInstance*i);

void s564retdec_call_cb(s564retdecInstance*i,U32 l0);

void s564retdecInstantiate(s564retdecInstance* instance, void* resolve(const char* module, const char* name));

void s564retdecFreeInstance(s564retdecInstance* instance);

#endif /* s564retdec_H */

