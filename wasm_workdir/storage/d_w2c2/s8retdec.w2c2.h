#ifndef s8retdec_H
#define s8retdec_H

#include "w2c2_base.h"

typedef struct s8retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s8retdecInstance;

void f0(s8retdecInstance*);

void f1(s8retdecInstance*);

U32 f2(s8retdecInstance*);

void f3(s8retdecInstance*,U32);

void f4(s8retdecInstance*,U32);

void s8retdec____wasm_call_ctors(s8retdecInstance*i);

void s8retdec____wasm_apply_data_relocs(s8retdecInstance*i);

U32 s8retdec_func_1(s8retdecInstance*i);

void s8retdec_call_cb(s8retdecInstance*i,U32 l0);

void s8retdecInstantiate(s8retdecInstance* instance, void* resolve(const char* module, const char* name));

void s8retdecFreeInstance(s8retdecInstance* instance);

#endif /* s8retdec_H */

