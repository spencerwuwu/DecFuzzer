#ifndef s514retdec_H
#define s514retdec_H

#include "w2c2_base.h"

typedef struct s514retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s514retdecInstance;

void f0(s514retdecInstance*);

void f1(s514retdecInstance*);

U32 f2(s514retdecInstance*);

void f3(s514retdecInstance*,U32);

U32 f4(s514retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s514retdecInstance*,U32,U32,U32,U32,U32);

void f6(s514retdecInstance*,U32);

void f7(s514retdecInstance*,U32,U32,U32);

void f8(s514retdecInstance*,U32,U32,U32);

void s514retdec____wasm_call_ctors(s514retdecInstance*i);

void s514retdec____wasm_apply_data_relocs(s514retdecInstance*i);

U32 s514retdec_func_1(s514retdecInstance*i);

void s514retdec_call_cb(s514retdecInstance*i,U32 l0);

void s514retdecInstantiate(s514retdecInstance* instance, void* resolve(const char* module, const char* name));

void s514retdecFreeInstance(s514retdecInstance* instance);

#endif /* s514retdec_H */

