#ifndef s400retdec_H
#define s400retdec_H

#include "w2c2_base.h"

typedef struct s400retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s400retdecInstance;

void f0(s400retdecInstance*);

void f1(s400retdecInstance*);

U32 f2(s400retdecInstance*);

void f3(s400retdecInstance*,U32);

U32 f4(s400retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s400retdecInstance*,U32,U32,U32,U32,U32);

void f6(s400retdecInstance*,U32);

void f7(s400retdecInstance*,U32,U32,U32);

void f8(s400retdecInstance*,U32,U32,U32);

void s400retdec____wasm_call_ctors(s400retdecInstance*i);

void s400retdec____wasm_apply_data_relocs(s400retdecInstance*i);

U32 s400retdec_func_1(s400retdecInstance*i);

void s400retdec_call_cb(s400retdecInstance*i,U32 l0);

void s400retdecInstantiate(s400retdecInstance* instance, void* resolve(const char* module, const char* name));

void s400retdecFreeInstance(s400retdecInstance* instance);

#endif /* s400retdec_H */

