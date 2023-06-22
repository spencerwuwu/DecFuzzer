#ifndef s824retdec_H
#define s824retdec_H

#include "w2c2_base.h"

typedef struct s824retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s824retdecInstance;

void f0(s824retdecInstance*);

void f1(s824retdecInstance*);

U32 f2(s824retdecInstance*);

void f3(s824retdecInstance*,U32);

void f4(s824retdecInstance*,U32);

void s824retdec____wasm_call_ctors(s824retdecInstance*i);

void s824retdec____wasm_apply_data_relocs(s824retdecInstance*i);

U32 s824retdec_func_1(s824retdecInstance*i);

void s824retdec_call_cb(s824retdecInstance*i,U32 l0);

void s824retdecInstantiate(s824retdecInstance* instance, void* resolve(const char* module, const char* name));

void s824retdecFreeInstance(s824retdecInstance* instance);

#endif /* s824retdec_H */

