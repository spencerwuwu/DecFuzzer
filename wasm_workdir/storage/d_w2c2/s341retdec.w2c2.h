#ifndef s341retdec_H
#define s341retdec_H

#include "w2c2_base.h"

typedef struct s341retdecInstance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s341retdecInstance;

void f0(s341retdecInstance*);

void f1(s341retdecInstance*);

U32 f2(s341retdecInstance*);

void f3(s341retdecInstance*,U32);

U32 f4(s341retdecInstance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s341retdecInstance*,U32,U32,U32,U32,U32);

void f6(s341retdecInstance*,U32);

void f7(s341retdecInstance*,U32,U32,U32);

void f8(s341retdecInstance*,U32,U32,U32);

void s341retdec____wasm_call_ctors(s341retdecInstance*i);

void s341retdec____wasm_apply_data_relocs(s341retdecInstance*i);

U32 s341retdec_func_1(s341retdecInstance*i);

void s341retdec_call_cb(s341retdecInstance*i,U32 l0);

void s341retdecInstantiate(s341retdecInstance* instance, void* resolve(const char* module, const char* name));

void s341retdecFreeInstance(s341retdecInstance* instance);

#endif /* s341retdec_H */

