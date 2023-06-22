#ifndef s510retdec_H
#define s510retdec_H

#include "w2c2_base.h"

typedef struct s510retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s510retdecInstance;

void f0(s510retdecInstance*);

void f1(s510retdecInstance*);

U32 f2(s510retdecInstance*);

void f3(s510retdecInstance*,U32);

U32 f4(s510retdecInstance*,U32,U32,U32,U32,U32,U32);

void f5(s510retdecInstance*,U32,U32,U32,U32,U32);

void f6(s510retdecInstance*,U32);

void f7(s510retdecInstance*,U32,U32,U32);

void f8(s510retdecInstance*,U32,U32,U32);

void s510retdec____wasm_call_ctors(s510retdecInstance*i);

void s510retdec____wasm_apply_data_relocs(s510retdecInstance*i);

U32 s510retdec_func_1(s510retdecInstance*i);

void s510retdec_call_cb(s510retdecInstance*i,U32 l0);

void s510retdecInstantiate(s510retdecInstance* instance, void* resolve(const char* module, const char* name));

void s510retdecFreeInstance(s510retdecInstance* instance);

#endif /* s510retdec_H */

