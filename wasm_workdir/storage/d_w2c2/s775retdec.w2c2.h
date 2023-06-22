#ifndef s775retdec_H
#define s775retdec_H

#include "w2c2_base.h"

typedef struct s775retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s775retdecInstance;

void f0(s775retdecInstance*);

void f1(s775retdecInstance*);

U32 f2(s775retdecInstance*);

void f3(s775retdecInstance*,U32);

U32 f4(s775retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s775retdecInstance*,U32,U32,U32,U32,U32);

void f6(s775retdecInstance*,U32);

void f7(s775retdecInstance*,U32,U32,U32);

void f8(s775retdecInstance*,U32,U32,U32);

void s775retdec____wasm_call_ctors(s775retdecInstance*i);

void s775retdec____wasm_apply_data_relocs(s775retdecInstance*i);

U32 s775retdec_func_1(s775retdecInstance*i);

void s775retdec_call_cb(s775retdecInstance*i,U32 l0);

void s775retdecInstantiate(s775retdecInstance* instance, void* resolve(const char* module, const char* name));

void s775retdecFreeInstance(s775retdecInstance* instance);

#endif /* s775retdec_H */

