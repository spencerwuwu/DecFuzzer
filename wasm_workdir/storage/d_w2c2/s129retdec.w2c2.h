#ifndef s129retdec_H
#define s129retdec_H

#include "w2c2_base.h"

typedef struct s129retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s129retdecInstance;

void f0(s129retdecInstance*);

void f1(s129retdecInstance*);

U32 f2(s129retdecInstance*);

void f3(s129retdecInstance*,U32);

U32 f4(s129retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s129retdecInstance*,U32,U32,U32,U32,U32);

void f6(s129retdecInstance*,U32);

void f7(s129retdecInstance*,U32,U32,U32);

void f8(s129retdecInstance*,U32,U32,U32);

void s129retdec____wasm_call_ctors(s129retdecInstance*i);

void s129retdec____wasm_apply_data_relocs(s129retdecInstance*i);

U32 s129retdec_func_1(s129retdecInstance*i);

void s129retdec_call_cb(s129retdecInstance*i,U32 l0);

void s129retdecInstantiate(s129retdecInstance* instance, void* resolve(const char* module, const char* name));

void s129retdecFreeInstance(s129retdecInstance* instance);

#endif /* s129retdec_H */

