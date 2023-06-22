#ifndef s427retdec_H
#define s427retdec_H

#include "w2c2_base.h"

typedef struct s427retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s427retdecInstance;

void f0(s427retdecInstance*);

void f1(s427retdecInstance*);

U32 f2(s427retdecInstance*);

void f3(s427retdecInstance*,U32);

U32 f4(s427retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s427retdecInstance*,U32,U32,U32,U32,U32);

void f6(s427retdecInstance*,U32);

void f7(s427retdecInstance*,U32,U32,U32);

void f8(s427retdecInstance*,U32,U32,U32);

void s427retdec____wasm_call_ctors(s427retdecInstance*i);

void s427retdec____wasm_apply_data_relocs(s427retdecInstance*i);

U32 s427retdec_func_1(s427retdecInstance*i);

void s427retdec_call_cb(s427retdecInstance*i,U32 l0);

void s427retdecInstantiate(s427retdecInstance* instance, void* resolve(const char* module, const char* name));

void s427retdecFreeInstance(s427retdecInstance* instance);

#endif /* s427retdec_H */

