#ifndef s625retdec_H
#define s625retdec_H

#include "w2c2_base.h"

typedef struct s625retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s625retdecInstance;

void f0(s625retdecInstance*);

void f1(s625retdecInstance*);

U32 f2(s625retdecInstance*);

void f3(s625retdecInstance*,U32);

U32 f4(s625retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s625retdecInstance*,U32,U32,U32,U32,U32);

void f6(s625retdecInstance*,U32);

void f7(s625retdecInstance*,U32,U32,U32);

void f8(s625retdecInstance*,U32,U32,U32);

void s625retdec____wasm_call_ctors(s625retdecInstance*i);

void s625retdec____wasm_apply_data_relocs(s625retdecInstance*i);

U32 s625retdec_func_1(s625retdecInstance*i);

void s625retdec_call_cb(s625retdecInstance*i,U32 l0);

void s625retdecInstantiate(s625retdecInstance* instance, void* resolve(const char* module, const char* name));

void s625retdecFreeInstance(s625retdecInstance* instance);

#endif /* s625retdec_H */

