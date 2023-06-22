#ifndef s461retdec_H
#define s461retdec_H

#include "w2c2_base.h"

typedef struct s461retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s461retdecInstance;

void f0(s461retdecInstance*);

void f1(s461retdecInstance*);

U32 f2(s461retdecInstance*);

void f3(s461retdecInstance*,U32);

U32 f4(s461retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s461retdecInstance*,U32,U32,U32,U32,U32);

void f6(s461retdecInstance*,U32);

void f7(s461retdecInstance*,U32,U32,U32);

void f8(s461retdecInstance*,U32,U32,U32);

void s461retdec____wasm_call_ctors(s461retdecInstance*i);

void s461retdec____wasm_apply_data_relocs(s461retdecInstance*i);

U32 s461retdec_func_1(s461retdecInstance*i);

void s461retdec_call_cb(s461retdecInstance*i,U32 l0);

void s461retdecInstantiate(s461retdecInstance* instance, void* resolve(const char* module, const char* name));

void s461retdecFreeInstance(s461retdecInstance* instance);

#endif /* s461retdec_H */

