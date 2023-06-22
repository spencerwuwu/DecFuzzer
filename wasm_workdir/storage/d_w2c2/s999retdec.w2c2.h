#ifndef s999retdec_H
#define s999retdec_H

#include "w2c2_base.h"

typedef struct s999retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s999retdecInstance;

void f0(s999retdecInstance*);

void f1(s999retdecInstance*);

U32 f2(s999retdecInstance*);

void f3(s999retdecInstance*,U32);

U32 f4(s999retdecInstance*,U32,U32,U32,U32,U32);

void f5(s999retdecInstance*,U32,U32,U32,U32,U32);

void f6(s999retdecInstance*,U32);

void f7(s999retdecInstance*,U32,U32,U32);

void f8(s999retdecInstance*,U32,U32,U32);

void s999retdec____wasm_call_ctors(s999retdecInstance*i);

void s999retdec____wasm_apply_data_relocs(s999retdecInstance*i);

U32 s999retdec_func_1(s999retdecInstance*i);

void s999retdec_call_cb(s999retdecInstance*i,U32 l0);

void s999retdecInstantiate(s999retdecInstance* instance, void* resolve(const char* module, const char* name));

void s999retdecFreeInstance(s999retdecInstance* instance);

#endif /* s999retdec_H */

