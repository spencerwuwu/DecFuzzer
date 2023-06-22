#ifndef s302retdec_H
#define s302retdec_H

#include "w2c2_base.h"

typedef struct s302retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s302retdecInstance;

void f0(s302retdecInstance*);

void f1(s302retdecInstance*);

U32 f2(s302retdecInstance*);

void f3(s302retdecInstance*,U32);

U32 f4(s302retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s302retdecInstance*,U32,U32,U32,U32,U32);

void f6(s302retdecInstance*,U32);

void f7(s302retdecInstance*,U32,U32,U32);

void f8(s302retdecInstance*,U32,U32,U32);

void s302retdec____wasm_call_ctors(s302retdecInstance*i);

void s302retdec____wasm_apply_data_relocs(s302retdecInstance*i);

U32 s302retdec_func_1(s302retdecInstance*i);

void s302retdec_call_cb(s302retdecInstance*i,U32 l0);

void s302retdecInstantiate(s302retdecInstance* instance, void* resolve(const char* module, const char* name));

void s302retdecFreeInstance(s302retdecInstance* instance);

#endif /* s302retdec_H */

