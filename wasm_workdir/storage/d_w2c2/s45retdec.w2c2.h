#ifndef s45retdec_H
#define s45retdec_H

#include "w2c2_base.h"

typedef struct s45retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s45retdecInstance;

void f0(s45retdecInstance*);

void f1(s45retdecInstance*);

U32 f2(s45retdecInstance*);

void f3(s45retdecInstance*,U32);

void f4(s45retdecInstance*,U32);

void s45retdec____wasm_call_ctors(s45retdecInstance*i);

void s45retdec____wasm_apply_data_relocs(s45retdecInstance*i);

U32 s45retdec_func_1(s45retdecInstance*i);

void s45retdec_call_cb(s45retdecInstance*i,U32 l0);

void s45retdecInstantiate(s45retdecInstance* instance, void* resolve(const char* module, const char* name));

void s45retdecFreeInstance(s45retdecInstance* instance);

#endif /* s45retdec_H */

