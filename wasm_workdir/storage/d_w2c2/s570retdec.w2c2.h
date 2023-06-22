#ifndef s570retdec_H
#define s570retdec_H

#include "w2c2_base.h"

typedef struct s570retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s570retdecInstance;

void f0(s570retdecInstance*);

void f1(s570retdecInstance*);

U32 f2(s570retdecInstance*);

void f3(s570retdecInstance*,U32);

U32 f4(s570retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s570retdecInstance*,U32,U32,U32,U32,U32);

void f6(s570retdecInstance*,U32);

void f7(s570retdecInstance*,U32,U32,U32);

void f8(s570retdecInstance*,U32,U32,U32);

void s570retdec____wasm_call_ctors(s570retdecInstance*i);

void s570retdec____wasm_apply_data_relocs(s570retdecInstance*i);

U32 s570retdec_func_1(s570retdecInstance*i);

void s570retdec_call_cb(s570retdecInstance*i,U32 l0);

void s570retdecInstantiate(s570retdecInstance* instance, void* resolve(const char* module, const char* name));

void s570retdecFreeInstance(s570retdecInstance* instance);

#endif /* s570retdec_H */

