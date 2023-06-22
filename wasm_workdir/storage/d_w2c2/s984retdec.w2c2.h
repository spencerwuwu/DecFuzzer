#ifndef s984retdec_H
#define s984retdec_H

#include "w2c2_base.h"

typedef struct s984retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s984retdecInstance;

void f0(s984retdecInstance*);

void f1(s984retdecInstance*);

U32 f2(s984retdecInstance*);

void f3(s984retdecInstance*,U32);

U32 f4(s984retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s984retdecInstance*,U32,U32,U32,U32,U32);

void f6(s984retdecInstance*,U32);

void f7(s984retdecInstance*,U32,U32,U32);

void f8(s984retdecInstance*,U32,U32,U32);

void s984retdec____wasm_call_ctors(s984retdecInstance*i);

void s984retdec____wasm_apply_data_relocs(s984retdecInstance*i);

U32 s984retdec_func_1(s984retdecInstance*i);

void s984retdec_call_cb(s984retdecInstance*i,U32 l0);

void s984retdecInstantiate(s984retdecInstance* instance, void* resolve(const char* module, const char* name));

void s984retdecFreeInstance(s984retdecInstance* instance);

#endif /* s984retdec_H */

