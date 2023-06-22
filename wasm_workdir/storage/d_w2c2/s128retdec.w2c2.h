#ifndef s128retdec_H
#define s128retdec_H

#include "w2c2_base.h"

typedef struct s128retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s128retdecInstance;

void f0(s128retdecInstance*);

void f1(s128retdecInstance*);

U32 f2(s128retdecInstance*);

void f3(s128retdecInstance*,U32);

U32 f4(s128retdecInstance*,U32,U32,U32,U32,U32);

void f5(s128retdecInstance*,U32,U32,U32,U32,U32);

void f6(s128retdecInstance*,U32);

void f7(s128retdecInstance*,U32,U32,U32);

void f8(s128retdecInstance*,U32,U32,U32);

void s128retdec____wasm_call_ctors(s128retdecInstance*i);

void s128retdec____wasm_apply_data_relocs(s128retdecInstance*i);

U32 s128retdec_func_1(s128retdecInstance*i);

void s128retdec_call_cb(s128retdecInstance*i,U32 l0);

void s128retdecInstantiate(s128retdecInstance* instance, void* resolve(const char* module, const char* name));

void s128retdecFreeInstance(s128retdecInstance* instance);

#endif /* s128retdec_H */

