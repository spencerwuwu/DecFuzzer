#ifndef s12retdec_H
#define s12retdec_H

#include "w2c2_base.h"

typedef struct s12retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s12retdecInstance;

void f0(s12retdecInstance*);

void f1(s12retdecInstance*);

U32 f2(s12retdecInstance*);

void f3(s12retdecInstance*,U32);

U32 f4(s12retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s12retdecInstance*,U32,U32,U32,U32,U32);

void f6(s12retdecInstance*,U32);

void f7(s12retdecInstance*,U32,U32,U32);

void f8(s12retdecInstance*,U32,U32,U32);

void s12retdec____wasm_call_ctors(s12retdecInstance*i);

void s12retdec____wasm_apply_data_relocs(s12retdecInstance*i);

U32 s12retdec_func_1(s12retdecInstance*i);

void s12retdec_call_cb(s12retdecInstance*i,U32 l0);

void s12retdecInstantiate(s12retdecInstance* instance, void* resolve(const char* module, const char* name));

void s12retdecFreeInstance(s12retdecInstance* instance);

#endif /* s12retdec_H */

