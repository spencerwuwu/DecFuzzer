#ifndef s628retdec_H
#define s628retdec_H

#include "w2c2_base.h"

typedef struct s628retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s628retdecInstance;

void f0(s628retdecInstance*);

void f1(s628retdecInstance*);

U32 f2(s628retdecInstance*);

void f3(s628retdecInstance*,U32);

U32 f4(s628retdecInstance*,U32,U32,U32,U32,U32);

void f5(s628retdecInstance*,U32,U32,U32,U32,U32);

void f6(s628retdecInstance*,U32);

void f7(s628retdecInstance*,U32,U32,U32);

void f8(s628retdecInstance*,U32,U32,U32);

void s628retdec____wasm_call_ctors(s628retdecInstance*i);

void s628retdec____wasm_apply_data_relocs(s628retdecInstance*i);

U32 s628retdec_func_1(s628retdecInstance*i);

void s628retdec_call_cb(s628retdecInstance*i,U32 l0);

void s628retdecInstantiate(s628retdecInstance* instance, void* resolve(const char* module, const char* name));

void s628retdecFreeInstance(s628retdecInstance* instance);

#endif /* s628retdec_H */

