#ifndef s970retdec_H
#define s970retdec_H

#include "w2c2_base.h"

typedef struct s970retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s970retdecInstance;

void f0(s970retdecInstance*);

void f1(s970retdecInstance*);

U32 f2(s970retdecInstance*);

void f3(s970retdecInstance*,U32);

U32 f4(s970retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s970retdecInstance*,U32,U32,U32,U32,U32);

void f6(s970retdecInstance*,U32);

void f7(s970retdecInstance*,U32,U32,U32);

void f8(s970retdecInstance*,U32,U32,U32);

void s970retdec____wasm_call_ctors(s970retdecInstance*i);

void s970retdec____wasm_apply_data_relocs(s970retdecInstance*i);

U32 s970retdec_func_1(s970retdecInstance*i);

void s970retdec_call_cb(s970retdecInstance*i,U32 l0);

void s970retdecInstantiate(s970retdecInstance* instance, void* resolve(const char* module, const char* name));

void s970retdecFreeInstance(s970retdecInstance* instance);

#endif /* s970retdec_H */

