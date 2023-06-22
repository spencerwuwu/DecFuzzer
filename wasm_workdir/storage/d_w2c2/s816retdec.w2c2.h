#ifndef s816retdec_H
#define s816retdec_H

#include "w2c2_base.h"

typedef struct s816retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s816retdecInstance;

void f0(s816retdecInstance*);

void f1(s816retdecInstance*);

U32 f2(s816retdecInstance*);

void f3(s816retdecInstance*,U32);

U32 f4(s816retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s816retdecInstance*,U32,U32,U32,U32,U32);

void f6(s816retdecInstance*,U32);

void f7(s816retdecInstance*,U32,U32,U32);

void f8(s816retdecInstance*,U32,U32,U32);

void s816retdec____wasm_call_ctors(s816retdecInstance*i);

void s816retdec____wasm_apply_data_relocs(s816retdecInstance*i);

U32 s816retdec_func_1(s816retdecInstance*i);

void s816retdec_call_cb(s816retdecInstance*i,U32 l0);

void s816retdecInstantiate(s816retdecInstance* instance, void* resolve(const char* module, const char* name));

void s816retdecFreeInstance(s816retdecInstance* instance);

#endif /* s816retdec_H */

