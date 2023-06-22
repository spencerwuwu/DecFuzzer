#ifndef s750retdec_H
#define s750retdec_H

#include "w2c2_base.h"

typedef struct s750retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s750retdecInstance;

void f0(s750retdecInstance*);

void f1(s750retdecInstance*);

U32 f2(s750retdecInstance*);

void f3(s750retdecInstance*,U32);

U32 f4(s750retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s750retdecInstance*,U32,U32,U32,U32,U32);

void f6(s750retdecInstance*,U32);

void f7(s750retdecInstance*,U32,U32,U32);

void f8(s750retdecInstance*,U32,U32,U32);

void s750retdec____wasm_call_ctors(s750retdecInstance*i);

void s750retdec____wasm_apply_data_relocs(s750retdecInstance*i);

U32 s750retdec_func_1(s750retdecInstance*i);

void s750retdec_call_cb(s750retdecInstance*i,U32 l0);

void s750retdecInstantiate(s750retdecInstance* instance, void* resolve(const char* module, const char* name));

void s750retdecFreeInstance(s750retdecInstance* instance);

#endif /* s750retdec_H */

