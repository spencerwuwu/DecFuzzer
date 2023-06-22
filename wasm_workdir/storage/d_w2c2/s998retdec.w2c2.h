#ifndef s998retdec_H
#define s998retdec_H

#include "w2c2_base.h"

typedef struct s998retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s998retdecInstance;

void f0(s998retdecInstance*);

void f1(s998retdecInstance*);

U32 f2(s998retdecInstance*);

void f3(s998retdecInstance*,U32);

U32 f4(s998retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s998retdecInstance*,U32,U32,U32,U32,U32);

void f6(s998retdecInstance*,U32);

void f7(s998retdecInstance*,U32,U32,U32);

void f8(s998retdecInstance*,U32,U32,U32);

void s998retdec____wasm_call_ctors(s998retdecInstance*i);

void s998retdec____wasm_apply_data_relocs(s998retdecInstance*i);

U32 s998retdec_func_1(s998retdecInstance*i);

void s998retdec_call_cb(s998retdecInstance*i,U32 l0);

void s998retdecInstantiate(s998retdecInstance* instance, void* resolve(const char* module, const char* name));

void s998retdecFreeInstance(s998retdecInstance* instance);

#endif /* s998retdec_H */

