#ifndef s118retdec_H
#define s118retdec_H

#include "w2c2_base.h"

typedef struct s118retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s118retdecInstance;

void f0(s118retdecInstance*);

void f1(s118retdecInstance*);

U32 f2(s118retdecInstance*);

void f3(s118retdecInstance*,U32);

U32 f4(s118retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s118retdecInstance*,U32,U32,U32,U32,U32);

void f6(s118retdecInstance*,U32);

void f7(s118retdecInstance*,U32,U32,U32);

void f8(s118retdecInstance*,U32,U32,U32);

void s118retdec____wasm_call_ctors(s118retdecInstance*i);

void s118retdec____wasm_apply_data_relocs(s118retdecInstance*i);

U32 s118retdec_func_1(s118retdecInstance*i);

void s118retdec_call_cb(s118retdecInstance*i,U32 l0);

void s118retdecInstantiate(s118retdecInstance* instance, void* resolve(const char* module, const char* name));

void s118retdecFreeInstance(s118retdecInstance* instance);

#endif /* s118retdec_H */

