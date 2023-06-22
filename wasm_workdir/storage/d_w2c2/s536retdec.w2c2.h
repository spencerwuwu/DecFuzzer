#ifndef s536retdec_H
#define s536retdec_H

#include "w2c2_base.h"

typedef struct s536retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s536retdecInstance;

void f0(s536retdecInstance*);

void f1(s536retdecInstance*);

U32 f2(s536retdecInstance*);

void f3(s536retdecInstance*,U32);

U32 f4(s536retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s536retdecInstance*,U32,U32,U32,U32,U32);

void f6(s536retdecInstance*,U32);

void f7(s536retdecInstance*,U32,U32,U32);

void f8(s536retdecInstance*,U32,U32,U32);

void s536retdec____wasm_call_ctors(s536retdecInstance*i);

void s536retdec____wasm_apply_data_relocs(s536retdecInstance*i);

U32 s536retdec_func_1(s536retdecInstance*i);

void s536retdec_call_cb(s536retdecInstance*i,U32 l0);

void s536retdecInstantiate(s536retdecInstance* instance, void* resolve(const char* module, const char* name));

void s536retdecFreeInstance(s536retdecInstance* instance);

#endif /* s536retdec_H */

