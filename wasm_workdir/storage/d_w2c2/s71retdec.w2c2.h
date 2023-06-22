#ifndef s71retdec_H
#define s71retdec_H

#include "w2c2_base.h"

typedef struct s71retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s71retdecInstance;

void f0(s71retdecInstance*);

void f1(s71retdecInstance*);

U32 f2(s71retdecInstance*);

void f3(s71retdecInstance*,U32);

U32 f4(s71retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s71retdecInstance*,U32,U32,U32,U32,U32);

void f6(s71retdecInstance*,U32);

void f7(s71retdecInstance*,U32,U32,U32);

void f8(s71retdecInstance*,U32,U32,U32);

void s71retdec____wasm_call_ctors(s71retdecInstance*i);

void s71retdec____wasm_apply_data_relocs(s71retdecInstance*i);

U32 s71retdec_func_1(s71retdecInstance*i);

void s71retdec_call_cb(s71retdecInstance*i,U32 l0);

void s71retdecInstantiate(s71retdecInstance* instance, void* resolve(const char* module, const char* name));

void s71retdecFreeInstance(s71retdecInstance* instance);

#endif /* s71retdec_H */

