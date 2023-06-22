#ifndef s202retdec_H
#define s202retdec_H

#include "w2c2_base.h"

typedef struct s202retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s202retdecInstance;

void f0(s202retdecInstance*);

void f1(s202retdecInstance*);

U32 f2(s202retdecInstance*);

void f3(s202retdecInstance*,U32);

U32 f4(s202retdecInstance*,U32,U32,U32);

void f5(s202retdecInstance*,U32,U32,U32,U32,U32);

void f6(s202retdecInstance*,U32);

void f7(s202retdecInstance*,U32,U32,U32);

void f8(s202retdecInstance*,U32,U32,U32);

void s202retdec____wasm_call_ctors(s202retdecInstance*i);

void s202retdec____wasm_apply_data_relocs(s202retdecInstance*i);

U32 s202retdec_func_1(s202retdecInstance*i);

void s202retdec_call_cb(s202retdecInstance*i,U32 l0);

void s202retdecInstantiate(s202retdecInstance* instance, void* resolve(const char* module, const char* name));

void s202retdecFreeInstance(s202retdecInstance* instance);

#endif /* s202retdec_H */

