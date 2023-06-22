#ifndef s540r2_H
#define s540r2_H

#include "w2c2_base.h"

typedef struct s540r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s540r2Instance;

void f0(s540r2Instance*);

void f1(s540r2Instance*);

U32 f2(s540r2Instance*);

void f3(s540r2Instance*,U32);

U32 f4(s540r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s540r2Instance*,U32,U32,U32,U32,U32);

void f6(s540r2Instance*,U32);

void f7(s540r2Instance*,U32,U32,U32);

void f8(s540r2Instance*,U32,U32,U32);

void s540r2____wasm_call_ctors(s540r2Instance*i);

void s540r2____wasm_apply_data_relocs(s540r2Instance*i);

U32 s540r2_func_1(s540r2Instance*i);

void s540r2_call_cb(s540r2Instance*i,U32 l0);

void s540r2Instantiate(s540r2Instance* instance, void* resolve(const char* module, const char* name));

void s540r2FreeInstance(s540r2Instance* instance);

#endif /* s540r2_H */

