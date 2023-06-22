#ifndef s358retdec_H
#define s358retdec_H

#include "w2c2_base.h"

typedef struct s358retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s358retdecInstance;

void f0(s358retdecInstance*);

void f1(s358retdecInstance*);

U32 f2(s358retdecInstance*);

void f3(s358retdecInstance*,U32);

U32 f4(s358retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s358retdecInstance*,U32,U32,U32,U32,U32);

void f6(s358retdecInstance*,U32);

void f7(s358retdecInstance*,U32,U32,U32);

void f8(s358retdecInstance*,U32,U32,U32);

void s358retdec____wasm_call_ctors(s358retdecInstance*i);

void s358retdec____wasm_apply_data_relocs(s358retdecInstance*i);

U32 s358retdec_func_1(s358retdecInstance*i);

void s358retdec_call_cb(s358retdecInstance*i,U32 l0);

void s358retdecInstantiate(s358retdecInstance* instance, void* resolve(const char* module, const char* name));

void s358retdecFreeInstance(s358retdecInstance* instance);

#endif /* s358retdec_H */

