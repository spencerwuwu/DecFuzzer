#ifndef s688retdec_H
#define s688retdec_H

#include "w2c2_base.h"

typedef struct s688retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s688retdecInstance;

void f0(s688retdecInstance*);

void f1(s688retdecInstance*);

U32 f2(s688retdecInstance*);

void f3(s688retdecInstance*,U32);

U32 f4(s688retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s688retdecInstance*,U32,U32,U32,U32,U32);

void f6(s688retdecInstance*,U32);

void f7(s688retdecInstance*,U32,U32,U32);

void f8(s688retdecInstance*,U32,U32,U32);

void s688retdec____wasm_call_ctors(s688retdecInstance*i);

void s688retdec____wasm_apply_data_relocs(s688retdecInstance*i);

U32 s688retdec_func_1(s688retdecInstance*i);

void s688retdec_call_cb(s688retdecInstance*i,U32 l0);

void s688retdecInstantiate(s688retdecInstance* instance, void* resolve(const char* module, const char* name));

void s688retdecFreeInstance(s688retdecInstance* instance);

#endif /* s688retdec_H */

