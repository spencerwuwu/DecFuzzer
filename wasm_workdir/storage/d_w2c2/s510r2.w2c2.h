#ifndef s510r2_H
#define s510r2_H

#include "w2c2_base.h"

typedef struct s510r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s510r2Instance;

void f0(s510r2Instance*);

void f1(s510r2Instance*);

U32 f2(s510r2Instance*);

void f3(s510r2Instance*,U32);

U32 f4(s510r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s510r2Instance*,U32,U32,U32,U32,U32);

void f6(s510r2Instance*,U32);

void f7(s510r2Instance*,U32,U32,U32);

void f8(s510r2Instance*,U32,U32,U32);

void s510r2____wasm_call_ctors(s510r2Instance*i);

void s510r2____wasm_apply_data_relocs(s510r2Instance*i);

U32 s510r2_func_1(s510r2Instance*i);

void s510r2_call_cb(s510r2Instance*i,U32 l0);

void s510r2Instantiate(s510r2Instance* instance, void* resolve(const char* module, const char* name));

void s510r2FreeInstance(s510r2Instance* instance);

#endif /* s510r2_H */

