#ifndef s157retdec_H
#define s157retdec_H

#include "w2c2_base.h"

typedef struct s157retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s157retdecInstance;

void f0(s157retdecInstance*);

void f1(s157retdecInstance*);

U32 f2(s157retdecInstance*);

void f3(s157retdecInstance*,U32);

U32 f4(s157retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s157retdecInstance*,U32,U32,U32,U32,U32);

void f6(s157retdecInstance*,U32);

void f7(s157retdecInstance*,U32,U32,U32);

void f8(s157retdecInstance*,U32,U32,U32);

void s157retdec____wasm_call_ctors(s157retdecInstance*i);

void s157retdec____wasm_apply_data_relocs(s157retdecInstance*i);

U32 s157retdec_func_1(s157retdecInstance*i);

void s157retdec_call_cb(s157retdecInstance*i,U32 l0);

void s157retdecInstantiate(s157retdecInstance* instance, void* resolve(const char* module, const char* name));

void s157retdecFreeInstance(s157retdecInstance* instance);

#endif /* s157retdec_H */

