#ifndef s209retdec_H
#define s209retdec_H

#include "w2c2_base.h"

typedef struct s209retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s209retdecInstance;

void f0(s209retdecInstance*);

void f1(s209retdecInstance*);

U32 f2(s209retdecInstance*);

void f3(s209retdecInstance*,U32);

void f4(s209retdecInstance*,U32);

void s209retdec____wasm_call_ctors(s209retdecInstance*i);

void s209retdec____wasm_apply_data_relocs(s209retdecInstance*i);

U32 s209retdec_func_1(s209retdecInstance*i);

void s209retdec_call_cb(s209retdecInstance*i,U32 l0);

void s209retdecInstantiate(s209retdecInstance* instance, void* resolve(const char* module, const char* name));

void s209retdecFreeInstance(s209retdecInstance* instance);

#endif /* s209retdec_H */

