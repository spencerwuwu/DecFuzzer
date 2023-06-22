#ifndef s478retdec_H
#define s478retdec_H

#include "w2c2_base.h"

typedef struct s478retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s478retdecInstance;

void f0(s478retdecInstance*);

void f1(s478retdecInstance*);

U32 f2(s478retdecInstance*);

void f3(s478retdecInstance*,U32);

U32 f4(s478retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s478retdecInstance*,U32,U32,U32,U32,U32);

void f6(s478retdecInstance*,U32);

void f7(s478retdecInstance*,U32,U32,U32);

void f8(s478retdecInstance*,U32,U32,U32);

void s478retdec____wasm_call_ctors(s478retdecInstance*i);

void s478retdec____wasm_apply_data_relocs(s478retdecInstance*i);

U32 s478retdec_func_1(s478retdecInstance*i);

void s478retdec_call_cb(s478retdecInstance*i,U32 l0);

void s478retdecInstantiate(s478retdecInstance* instance, void* resolve(const char* module, const char* name));

void s478retdecFreeInstance(s478retdecInstance* instance);

#endif /* s478retdec_H */

