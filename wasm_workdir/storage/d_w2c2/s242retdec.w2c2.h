#ifndef s242retdec_H
#define s242retdec_H

#include "w2c2_base.h"

typedef struct s242retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s242retdecInstance;

void f0(s242retdecInstance*);

void f1(s242retdecInstance*);

U32 f2(s242retdecInstance*);

void f3(s242retdecInstance*,U32);

U32 f4(s242retdecInstance*,U32,U32,U32,U32);

void f5(s242retdecInstance*,U32,U32,U32,U32,U32);

void f6(s242retdecInstance*,U32);

void f7(s242retdecInstance*,U32,U32,U32);

void f8(s242retdecInstance*,U32,U32,U32);

void s242retdec____wasm_call_ctors(s242retdecInstance*i);

void s242retdec____wasm_apply_data_relocs(s242retdecInstance*i);

U32 s242retdec_func_1(s242retdecInstance*i);

void s242retdec_call_cb(s242retdecInstance*i,U32 l0);

void s242retdecInstantiate(s242retdecInstance* instance, void* resolve(const char* module, const char* name));

void s242retdecFreeInstance(s242retdecInstance* instance);

#endif /* s242retdec_H */

