#ifndef s459r2_H
#define s459r2_H

#include "w2c2_base.h"

typedef struct s459r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s459r2Instance;

void f0(s459r2Instance*);

void f1(s459r2Instance*);

U32 f2(s459r2Instance*);

void f3(s459r2Instance*,U32);

U32 f4(s459r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s459r2Instance*,U32,U32,U32,U32,U32);

void f6(s459r2Instance*,U32);

void f7(s459r2Instance*,U32,U32,U32);

void f8(s459r2Instance*,U32,U32,U32);

void s459r2____wasm_call_ctors(s459r2Instance*i);

void s459r2____wasm_apply_data_relocs(s459r2Instance*i);

U32 s459r2_func_1(s459r2Instance*i);

void s459r2_call_cb(s459r2Instance*i,U32 l0);

void s459r2Instantiate(s459r2Instance* instance, void* resolve(const char* module, const char* name));

void s459r2FreeInstance(s459r2Instance* instance);

#endif /* s459r2_H */

