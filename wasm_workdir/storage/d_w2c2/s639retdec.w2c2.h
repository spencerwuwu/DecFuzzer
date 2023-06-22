#ifndef s639retdec_H
#define s639retdec_H

#include "w2c2_base.h"

typedef struct s639retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s639retdecInstance;

void f0(s639retdecInstance*);

void f1(s639retdecInstance*);

U32 f2(s639retdecInstance*);

void f3(s639retdecInstance*,U32);

U32 f4(s639retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s639retdecInstance*,U32,U32,U32,U32,U32);

void f6(s639retdecInstance*,U32);

void f7(s639retdecInstance*,U32,U32,U32);

void f8(s639retdecInstance*,U32,U32,U32);

void s639retdec____wasm_call_ctors(s639retdecInstance*i);

void s639retdec____wasm_apply_data_relocs(s639retdecInstance*i);

U32 s639retdec_func_1(s639retdecInstance*i);

void s639retdec_call_cb(s639retdecInstance*i,U32 l0);

void s639retdecInstantiate(s639retdecInstance* instance, void* resolve(const char* module, const char* name));

void s639retdecFreeInstance(s639retdecInstance* instance);

#endif /* s639retdec_H */

