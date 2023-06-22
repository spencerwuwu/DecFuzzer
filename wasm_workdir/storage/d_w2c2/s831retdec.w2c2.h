#ifndef s831retdec_H
#define s831retdec_H

#include "w2c2_base.h"

typedef struct s831retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s831retdecInstance;

void f0(s831retdecInstance*);

void f1(s831retdecInstance*);

U32 f2(s831retdecInstance*);

void f3(s831retdecInstance*,U32);

U32 f4(s831retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s831retdecInstance*,U32,U32,U32,U32,U32);

void f6(s831retdecInstance*,U32);

void f7(s831retdecInstance*,U32,U32,U32);

void f8(s831retdecInstance*,U32,U32,U32);

void s831retdec____wasm_call_ctors(s831retdecInstance*i);

void s831retdec____wasm_apply_data_relocs(s831retdecInstance*i);

U32 s831retdec_func_1(s831retdecInstance*i);

void s831retdec_call_cb(s831retdecInstance*i,U32 l0);

void s831retdecInstantiate(s831retdecInstance* instance, void* resolve(const char* module, const char* name));

void s831retdecFreeInstance(s831retdecInstance* instance);

#endif /* s831retdec_H */

