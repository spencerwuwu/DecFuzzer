#ifndef s222retdec_H
#define s222retdec_H

#include "w2c2_base.h"

typedef struct s222retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s222retdecInstance;

void f0(s222retdecInstance*);

void f1(s222retdecInstance*);

U32 f2(s222retdecInstance*);

void f3(s222retdecInstance*,U32);

U32 f4(s222retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s222retdecInstance*,U32,U32,U32,U32,U32);

void f6(s222retdecInstance*,U32);

void f7(s222retdecInstance*,U32,U32,U32);

void f8(s222retdecInstance*,U32,U32,U32);

void s222retdec____wasm_call_ctors(s222retdecInstance*i);

void s222retdec____wasm_apply_data_relocs(s222retdecInstance*i);

U32 s222retdec_func_1(s222retdecInstance*i);

void s222retdec_call_cb(s222retdecInstance*i,U32 l0);

void s222retdecInstantiate(s222retdecInstance* instance, void* resolve(const char* module, const char* name));

void s222retdecFreeInstance(s222retdecInstance* instance);

#endif /* s222retdec_H */

