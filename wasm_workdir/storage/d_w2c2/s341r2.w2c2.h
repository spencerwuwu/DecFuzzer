#ifndef s341r2_H
#define s341r2_H

#include "w2c2_base.h"

typedef struct s341r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s341r2Instance;

void f0(s341r2Instance*);

void f1(s341r2Instance*);

U32 f2(s341r2Instance*);

void f3(s341r2Instance*,U32);

U32 f4(s341r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s341r2Instance*,U32,U32,U32,U32,U32);

void f6(s341r2Instance*,U32);

void f7(s341r2Instance*,U32,U32,U32);

void f8(s341r2Instance*,U32,U32,U32);

void s341r2____wasm_call_ctors(s341r2Instance*i);

void s341r2____wasm_apply_data_relocs(s341r2Instance*i);

U32 s341r2_func_1(s341r2Instance*i);

void s341r2_call_cb(s341r2Instance*i,U32 l0);

void s341r2Instantiate(s341r2Instance* instance, void* resolve(const char* module, const char* name));

void s341r2FreeInstance(s341r2Instance* instance);

#endif /* s341r2_H */

