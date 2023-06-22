#ifndef s124retdec_H
#define s124retdec_H

#include "w2c2_base.h"

typedef struct s124retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s124retdecInstance;

void f0(s124retdecInstance*);

void f1(s124retdecInstance*);

U32 f2(s124retdecInstance*);

void f3(s124retdecInstance*,U32);

void f4(s124retdecInstance*,U32);

void s124retdec____wasm_call_ctors(s124retdecInstance*i);

void s124retdec____wasm_apply_data_relocs(s124retdecInstance*i);

U32 s124retdec_func_1(s124retdecInstance*i);

void s124retdec_call_cb(s124retdecInstance*i,U32 l0);

void s124retdecInstantiate(s124retdecInstance* instance, void* resolve(const char* module, const char* name));

void s124retdecFreeInstance(s124retdecInstance* instance);

#endif /* s124retdec_H */

