#ifndef s525retdec_H
#define s525retdec_H

#include "w2c2_base.h"

typedef struct s525retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s525retdecInstance;

void f0(s525retdecInstance*);

void f1(s525retdecInstance*);

U32 f2(s525retdecInstance*);

void f3(s525retdecInstance*,U32);

U32 f4(s525retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s525retdecInstance*,U32,U32,U32,U32,U32);

void f6(s525retdecInstance*,U32);

void f7(s525retdecInstance*,U32,U32,U32);

void f8(s525retdecInstance*,U32,U32,U32);

void s525retdec____wasm_call_ctors(s525retdecInstance*i);

void s525retdec____wasm_apply_data_relocs(s525retdecInstance*i);

U32 s525retdec_func_1(s525retdecInstance*i);

void s525retdec_call_cb(s525retdecInstance*i,U32 l0);

void s525retdecInstantiate(s525retdecInstance* instance, void* resolve(const char* module, const char* name));

void s525retdecFreeInstance(s525retdecInstance* instance);

#endif /* s525retdec_H */

