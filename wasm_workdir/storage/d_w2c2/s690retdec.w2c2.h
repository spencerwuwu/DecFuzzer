#ifndef s690retdec_H
#define s690retdec_H

#include "w2c2_base.h"

typedef struct s690retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s690retdecInstance;

void f0(s690retdecInstance*);

void f1(s690retdecInstance*);

U32 f2(s690retdecInstance*);

void f3(s690retdecInstance*,U32);

U32 f4(s690retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s690retdecInstance*,U32,U32,U32,U32,U32);

void f6(s690retdecInstance*,U32);

void f7(s690retdecInstance*,U32,U32,U32);

void f8(s690retdecInstance*,U32,U32,U32);

void s690retdec____wasm_call_ctors(s690retdecInstance*i);

void s690retdec____wasm_apply_data_relocs(s690retdecInstance*i);

U32 s690retdec_func_1(s690retdecInstance*i);

void s690retdec_call_cb(s690retdecInstance*i,U32 l0);

void s690retdecInstantiate(s690retdecInstance* instance, void* resolve(const char* module, const char* name));

void s690retdecFreeInstance(s690retdecInstance* instance);

#endif /* s690retdec_H */

