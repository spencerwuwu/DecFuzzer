#ifndef s69retdec_H
#define s69retdec_H

#include "w2c2_base.h"

typedef struct s69retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s69retdecInstance;

void f0(s69retdecInstance*);

void f1(s69retdecInstance*);

U32 f2(s69retdecInstance*);

void f3(s69retdecInstance*,U32);

U32 f4(s69retdecInstance*,U32,U32,U32,U32);

void f5(s69retdecInstance*,U32,U32,U32,U32,U32);

void f6(s69retdecInstance*,U32);

void f7(s69retdecInstance*,U32,U32,U32);

void f8(s69retdecInstance*,U32,U32,U32);

void s69retdec____wasm_call_ctors(s69retdecInstance*i);

void s69retdec____wasm_apply_data_relocs(s69retdecInstance*i);

U32 s69retdec_func_1(s69retdecInstance*i);

void s69retdec_call_cb(s69retdecInstance*i,U32 l0);

void s69retdecInstantiate(s69retdecInstance* instance, void* resolve(const char* module, const char* name));

void s69retdecFreeInstance(s69retdecInstance* instance);

#endif /* s69retdec_H */

