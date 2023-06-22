#ifndef s869retdec_H
#define s869retdec_H

#include "w2c2_base.h"

typedef struct s869retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s869retdecInstance;

void f0(s869retdecInstance*);

void f1(s869retdecInstance*);

U32 f2(s869retdecInstance*);

void f3(s869retdecInstance*,U32);

U32 f4(s869retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s869retdecInstance*,U32,U32,U32,U32,U32);

void f6(s869retdecInstance*,U32);

void f7(s869retdecInstance*,U32,U32,U32);

void f8(s869retdecInstance*,U32,U32,U32);

void s869retdec____wasm_call_ctors(s869retdecInstance*i);

void s869retdec____wasm_apply_data_relocs(s869retdecInstance*i);

U32 s869retdec_func_1(s869retdecInstance*i);

void s869retdec_call_cb(s869retdecInstance*i,U32 l0);

void s869retdecInstantiate(s869retdecInstance* instance, void* resolve(const char* module, const char* name));

void s869retdecFreeInstance(s869retdecInstance* instance);

#endif /* s869retdec_H */

