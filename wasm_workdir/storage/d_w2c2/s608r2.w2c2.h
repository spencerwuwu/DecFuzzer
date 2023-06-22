#ifndef s608r2_H
#define s608r2_H

#include "w2c2_base.h"

typedef struct s608r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s608r2Instance;

void f0(s608r2Instance*);

void f1(s608r2Instance*);

U32 f2(s608r2Instance*);

void f3(s608r2Instance*,U32);

U32 f4(s608r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s608r2Instance*,U32,U32,U32,U32,U32);

void f6(s608r2Instance*,U32);

void f7(s608r2Instance*,U32,U32,U32);

void f8(s608r2Instance*,U32,U32,U32);

void s608r2____wasm_call_ctors(s608r2Instance*i);

void s608r2____wasm_apply_data_relocs(s608r2Instance*i);

U32 s608r2_func_1(s608r2Instance*i);

void s608r2_call_cb(s608r2Instance*i,U32 l0);

void s608r2Instantiate(s608r2Instance* instance, void* resolve(const char* module, const char* name));

void s608r2FreeInstance(s608r2Instance* instance);

#endif /* s608r2_H */

