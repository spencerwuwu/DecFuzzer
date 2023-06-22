#ifndef s694r2_H
#define s694r2_H

#include "w2c2_base.h"

typedef struct s694r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s694r2Instance;

void f0(s694r2Instance*);

void f1(s694r2Instance*);

U32 f2(s694r2Instance*);

void f3(s694r2Instance*,U32);

U32 f4(s694r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s694r2Instance*,U32,U32,U32,U32,U32);

void f6(s694r2Instance*,U32);

void f7(s694r2Instance*,U32,U32,U32);

void f8(s694r2Instance*,U32,U32,U32);

void s694r2____wasm_call_ctors(s694r2Instance*i);

void s694r2____wasm_apply_data_relocs(s694r2Instance*i);

U32 s694r2_func_1(s694r2Instance*i);

void s694r2_call_cb(s694r2Instance*i,U32 l0);

void s694r2Instantiate(s694r2Instance* instance, void* resolve(const char* module, const char* name));

void s694r2FreeInstance(s694r2Instance* instance);

#endif /* s694r2_H */

