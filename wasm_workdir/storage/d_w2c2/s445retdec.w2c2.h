#ifndef s445retdec_H
#define s445retdec_H

#include "w2c2_base.h"

typedef struct s445retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s445retdecInstance;

void f0(s445retdecInstance*);

void f1(s445retdecInstance*);

U32 f2(s445retdecInstance*);

void f3(s445retdecInstance*,U32);

U32 f4(s445retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s445retdecInstance*,U32,U32,U32,U32,U32);

void f6(s445retdecInstance*,U32);

void f7(s445retdecInstance*,U32,U32,U32);

void f8(s445retdecInstance*,U32,U32,U32);

void s445retdec____wasm_call_ctors(s445retdecInstance*i);

void s445retdec____wasm_apply_data_relocs(s445retdecInstance*i);

U32 s445retdec_func_1(s445retdecInstance*i);

void s445retdec_call_cb(s445retdecInstance*i,U32 l0);

void s445retdecInstantiate(s445retdecInstance* instance, void* resolve(const char* module, const char* name));

void s445retdecFreeInstance(s445retdecInstance* instance);

#endif /* s445retdec_H */

