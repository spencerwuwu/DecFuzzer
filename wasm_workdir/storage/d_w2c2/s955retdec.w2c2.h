#ifndef s955retdec_H
#define s955retdec_H

#include "w2c2_base.h"

typedef struct s955retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s955retdecInstance;

void f0(s955retdecInstance*);

void f1(s955retdecInstance*);

U32 f2(s955retdecInstance*);

void f3(s955retdecInstance*,U32);

U32 f4(s955retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s955retdecInstance*,U32,U32,U32,U32,U32);

void f6(s955retdecInstance*,U32);

void f7(s955retdecInstance*,U32,U32,U32);

void f8(s955retdecInstance*,U32,U32,U32);

void s955retdec____wasm_call_ctors(s955retdecInstance*i);

void s955retdec____wasm_apply_data_relocs(s955retdecInstance*i);

U32 s955retdec_func_1(s955retdecInstance*i);

void s955retdec_call_cb(s955retdecInstance*i,U32 l0);

void s955retdecInstantiate(s955retdecInstance* instance, void* resolve(const char* module, const char* name));

void s955retdecFreeInstance(s955retdecInstance* instance);

#endif /* s955retdec_H */

