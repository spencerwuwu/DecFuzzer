#ifndef s648retdec_H
#define s648retdec_H

#include "w2c2_base.h"

typedef struct s648retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s648retdecInstance;

void f0(s648retdecInstance*);

void f1(s648retdecInstance*);

U32 f2(s648retdecInstance*);

void f3(s648retdecInstance*,U32);

void f4(s648retdecInstance*,U32);

void s648retdec____wasm_call_ctors(s648retdecInstance*i);

void s648retdec____wasm_apply_data_relocs(s648retdecInstance*i);

U32 s648retdec_func_1(s648retdecInstance*i);

void s648retdec_call_cb(s648retdecInstance*i,U32 l0);

void s648retdecInstantiate(s648retdecInstance* instance, void* resolve(const char* module, const char* name));

void s648retdecFreeInstance(s648retdecInstance* instance);

#endif /* s648retdec_H */

