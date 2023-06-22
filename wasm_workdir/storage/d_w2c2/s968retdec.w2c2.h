#ifndef s968retdec_H
#define s968retdec_H

#include "w2c2_base.h"

typedef struct s968retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s968retdecInstance;

void f0(s968retdecInstance*);

void f1(s968retdecInstance*);

U32 f2(s968retdecInstance*);

void f3(s968retdecInstance*,U32);

U32 f4(s968retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s968retdecInstance*,U32,U32,U32,U32,U32);

void f6(s968retdecInstance*,U32);

void f7(s968retdecInstance*,U32,U32,U32);

void f8(s968retdecInstance*,U32,U32,U32);

void s968retdec____wasm_call_ctors(s968retdecInstance*i);

void s968retdec____wasm_apply_data_relocs(s968retdecInstance*i);

U32 s968retdec_func_1(s968retdecInstance*i);

void s968retdec_call_cb(s968retdecInstance*i,U32 l0);

void s968retdecInstantiate(s968retdecInstance* instance, void* resolve(const char* module, const char* name));

void s968retdecFreeInstance(s968retdecInstance* instance);

#endif /* s968retdec_H */

