#ifndef s518retdec_H
#define s518retdec_H

#include "w2c2_base.h"

typedef struct s518retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s518retdecInstance;

void f0(s518retdecInstance*);

void f1(s518retdecInstance*);

U32 f2(s518retdecInstance*);

void f3(s518retdecInstance*,U32);

U32 f4(s518retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s518retdecInstance*,U32,U32,U32,U32,U32);

void f6(s518retdecInstance*,U32);

void f7(s518retdecInstance*,U32,U32,U32);

void f8(s518retdecInstance*,U32,U32,U32);

void s518retdec____wasm_call_ctors(s518retdecInstance*i);

void s518retdec____wasm_apply_data_relocs(s518retdecInstance*i);

U32 s518retdec_func_1(s518retdecInstance*i);

void s518retdec_call_cb(s518retdecInstance*i,U32 l0);

void s518retdecInstantiate(s518retdecInstance* instance, void* resolve(const char* module, const char* name));

void s518retdecFreeInstance(s518retdecInstance* instance);

#endif /* s518retdec_H */

