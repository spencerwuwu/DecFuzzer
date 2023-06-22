#ifndef s241retdec_H
#define s241retdec_H

#include "w2c2_base.h"

typedef struct s241retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s241retdecInstance;

void f0(s241retdecInstance*);

void f1(s241retdecInstance*);

U32 f2(s241retdecInstance*);

void f3(s241retdecInstance*,U32);

U32 f4(s241retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s241retdecInstance*,U32,U32,U32,U32,U32);

void f6(s241retdecInstance*,U32);

void f7(s241retdecInstance*,U32,U32,U32);

void f8(s241retdecInstance*,U32,U32,U32);

void s241retdec____wasm_call_ctors(s241retdecInstance*i);

void s241retdec____wasm_apply_data_relocs(s241retdecInstance*i);

U32 s241retdec_func_1(s241retdecInstance*i);

void s241retdec_call_cb(s241retdecInstance*i,U32 l0);

void s241retdecInstantiate(s241retdecInstance* instance, void* resolve(const char* module, const char* name));

void s241retdecFreeInstance(s241retdecInstance* instance);

#endif /* s241retdec_H */

