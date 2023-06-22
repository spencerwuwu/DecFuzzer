#ifndef s210retdec_H
#define s210retdec_H

#include "w2c2_base.h"

typedef struct s210retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s210retdecInstance;

void f0(s210retdecInstance*);

void f1(s210retdecInstance*);

U32 f2(s210retdecInstance*);

void f3(s210retdecInstance*,U32);

U32 f4(s210retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s210retdecInstance*,U32,U32,U32,U32,U32);

void f6(s210retdecInstance*,U32);

void f7(s210retdecInstance*,U32,U32,U32);

void f8(s210retdecInstance*,U32,U32,U32);

void s210retdec____wasm_call_ctors(s210retdecInstance*i);

void s210retdec____wasm_apply_data_relocs(s210retdecInstance*i);

U32 s210retdec_func_1(s210retdecInstance*i);

void s210retdec_call_cb(s210retdecInstance*i,U32 l0);

void s210retdecInstantiate(s210retdecInstance* instance, void* resolve(const char* module, const char* name));

void s210retdecFreeInstance(s210retdecInstance* instance);

#endif /* s210retdec_H */

