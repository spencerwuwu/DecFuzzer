#ifndef s803retdec_H
#define s803retdec_H

#include "w2c2_base.h"

typedef struct s803retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s803retdecInstance;

void f0(s803retdecInstance*);

void f1(s803retdecInstance*);

U32 f2(s803retdecInstance*);

void f3(s803retdecInstance*,U32);

U32 f4(s803retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s803retdecInstance*,U32,U32,U32,U32,U32);

void f6(s803retdecInstance*,U32);

void f7(s803retdecInstance*,U32,U32,U32);

void f8(s803retdecInstance*,U32,U32,U32);

void s803retdec____wasm_call_ctors(s803retdecInstance*i);

void s803retdec____wasm_apply_data_relocs(s803retdecInstance*i);

U32 s803retdec_func_1(s803retdecInstance*i);

void s803retdec_call_cb(s803retdecInstance*i,U32 l0);

void s803retdecInstantiate(s803retdecInstance* instance, void* resolve(const char* module, const char* name));

void s803retdecFreeInstance(s803retdecInstance* instance);

#endif /* s803retdec_H */

