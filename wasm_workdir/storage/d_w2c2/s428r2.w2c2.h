#ifndef s428r2_H
#define s428r2_H

#include "w2c2_base.h"

typedef struct s428r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s428r2Instance;

void f0(s428r2Instance*);

void f1(s428r2Instance*);

U32 f2(s428r2Instance*);

void f3(s428r2Instance*,U32);

U32 f4(s428r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s428r2Instance*,U32,U32,U32,U32,U32);

void f6(s428r2Instance*,U32);

void f7(s428r2Instance*,U32,U32,U32);

void f8(s428r2Instance*,U32,U32,U32);

void s428r2____wasm_call_ctors(s428r2Instance*i);

void s428r2____wasm_apply_data_relocs(s428r2Instance*i);

U32 s428r2_func_1(s428r2Instance*i);

void s428r2_call_cb(s428r2Instance*i,U32 l0);

void s428r2Instantiate(s428r2Instance* instance, void* resolve(const char* module, const char* name));

void s428r2FreeInstance(s428r2Instance* instance);

#endif /* s428r2_H */

