#ifndef s889retdec_H
#define s889retdec_H

#include "w2c2_base.h"

typedef struct s889retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s889retdecInstance;

void f0(s889retdecInstance*);

void f1(s889retdecInstance*);

U32 f2(s889retdecInstance*);

void f3(s889retdecInstance*,U32);

U32 f4(s889retdecInstance*,U32,U32,U32,U32,U32);

void f5(s889retdecInstance*,U32,U32,U32,U32,U32);

void f6(s889retdecInstance*,U32);

void f7(s889retdecInstance*,U32,U32,U32);

void f8(s889retdecInstance*,U32,U32,U32);

void s889retdec____wasm_call_ctors(s889retdecInstance*i);

void s889retdec____wasm_apply_data_relocs(s889retdecInstance*i);

U32 s889retdec_func_1(s889retdecInstance*i);

void s889retdec_call_cb(s889retdecInstance*i,U32 l0);

void s889retdecInstantiate(s889retdecInstance* instance, void* resolve(const char* module, const char* name));

void s889retdecFreeInstance(s889retdecInstance* instance);

#endif /* s889retdec_H */

