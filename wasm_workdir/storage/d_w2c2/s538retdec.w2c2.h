#ifndef s538retdec_H
#define s538retdec_H

#include "w2c2_base.h"

typedef struct s538retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s538retdecInstance;

void f0(s538retdecInstance*);

void f1(s538retdecInstance*);

U32 f2(s538retdecInstance*);

void f3(s538retdecInstance*,U32);

U32 f4(s538retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s538retdecInstance*,U32,U32,U32,U32,U32);

void f6(s538retdecInstance*,U32);

void f7(s538retdecInstance*,U32,U32,U32);

void f8(s538retdecInstance*,U32,U32,U32);

void s538retdec____wasm_call_ctors(s538retdecInstance*i);

void s538retdec____wasm_apply_data_relocs(s538retdecInstance*i);

U32 s538retdec_func_1(s538retdecInstance*i);

void s538retdec_call_cb(s538retdecInstance*i,U32 l0);

void s538retdecInstantiate(s538retdecInstance* instance, void* resolve(const char* module, const char* name));

void s538retdecFreeInstance(s538retdecInstance* instance);

#endif /* s538retdec_H */

