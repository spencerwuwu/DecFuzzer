#ifndef s858retdec_H
#define s858retdec_H

#include "w2c2_base.h"

typedef struct s858retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s858retdecInstance;

void f0(s858retdecInstance*);

void f1(s858retdecInstance*);

U32 f2(s858retdecInstance*);

void f3(s858retdecInstance*,U32);

U32 f4(s858retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s858retdecInstance*,U32,U32,U32,U32,U32);

void f6(s858retdecInstance*,U32);

void f7(s858retdecInstance*,U32,U32,U32);

void f8(s858retdecInstance*,U32,U32,U32);

void s858retdec____wasm_call_ctors(s858retdecInstance*i);

void s858retdec____wasm_apply_data_relocs(s858retdecInstance*i);

U32 s858retdec_func_1(s858retdecInstance*i);

void s858retdec_call_cb(s858retdecInstance*i,U32 l0);

void s858retdecInstantiate(s858retdecInstance* instance, void* resolve(const char* module, const char* name));

void s858retdecFreeInstance(s858retdecInstance* instance);

#endif /* s858retdec_H */

