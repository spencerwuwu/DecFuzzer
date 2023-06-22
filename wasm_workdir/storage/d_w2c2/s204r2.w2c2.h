#ifndef s204r2_H
#define s204r2_H

#include "w2c2_base.h"

typedef struct s204r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s204r2Instance;

void f0(s204r2Instance*);

void f1(s204r2Instance*);

U32 f2(s204r2Instance*);

void f3(s204r2Instance*,U32);

U32 f4(s204r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s204r2Instance*,U32,U32,U32,U32,U32);

void f6(s204r2Instance*,U32);

void f7(s204r2Instance*,U32,U32,U32);

void f8(s204r2Instance*,U32,U32,U32);

void s204r2____wasm_call_ctors(s204r2Instance*i);

void s204r2____wasm_apply_data_relocs(s204r2Instance*i);

U32 s204r2_func_1(s204r2Instance*i);

void s204r2_call_cb(s204r2Instance*i,U32 l0);

void s204r2Instantiate(s204r2Instance* instance, void* resolve(const char* module, const char* name));

void s204r2FreeInstance(s204r2Instance* instance);

#endif /* s204r2_H */

