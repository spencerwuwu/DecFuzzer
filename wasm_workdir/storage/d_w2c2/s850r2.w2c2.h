#ifndef s850r2_H
#define s850r2_H

#include "w2c2_base.h"

typedef struct s850r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s850r2Instance;

void f0(s850r2Instance*);

void f1(s850r2Instance*);

U32 f2(s850r2Instance*);

void f3(s850r2Instance*,U32);

U32 f4(s850r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s850r2Instance*,U32,U32,U32,U32,U32);

void f6(s850r2Instance*,U32);

void f7(s850r2Instance*,U32,U32,U32);

void f8(s850r2Instance*,U32,U32,U32);

void s850r2____wasm_call_ctors(s850r2Instance*i);

void s850r2____wasm_apply_data_relocs(s850r2Instance*i);

U32 s850r2_func_1(s850r2Instance*i);

void s850r2_call_cb(s850r2Instance*i,U32 l0);

void s850r2Instantiate(s850r2Instance* instance, void* resolve(const char* module, const char* name));

void s850r2FreeInstance(s850r2Instance* instance);

#endif /* s850r2_H */

