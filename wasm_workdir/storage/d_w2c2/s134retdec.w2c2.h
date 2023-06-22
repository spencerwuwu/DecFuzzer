#ifndef s134retdec_H
#define s134retdec_H

#include "w2c2_base.h"

typedef struct s134retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s134retdecInstance;

void f0(s134retdecInstance*);

void f1(s134retdecInstance*);

U32 f2(s134retdecInstance*);

void f3(s134retdecInstance*,U32);

U32 f4(s134retdecInstance*,U32,U32,U32,U32,U32);

void f5(s134retdecInstance*,U32,U32,U32,U32,U32);

void f6(s134retdecInstance*,U32);

void f7(s134retdecInstance*,U32,U32,U32);

void f8(s134retdecInstance*,U32,U32,U32);

void s134retdec____wasm_call_ctors(s134retdecInstance*i);

void s134retdec____wasm_apply_data_relocs(s134retdecInstance*i);

U32 s134retdec_func_1(s134retdecInstance*i);

void s134retdec_call_cb(s134retdecInstance*i,U32 l0);

void s134retdecInstantiate(s134retdecInstance* instance, void* resolve(const char* module, const char* name));

void s134retdecFreeInstance(s134retdecInstance* instance);

#endif /* s134retdec_H */

