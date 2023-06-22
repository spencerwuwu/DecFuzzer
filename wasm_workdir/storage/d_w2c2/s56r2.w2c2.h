#ifndef s56r2_H
#define s56r2_H

#include "w2c2_base.h"

typedef struct s56r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s56r2Instance;

void f0(s56r2Instance*);

void f1(s56r2Instance*);

U32 f2(s56r2Instance*);

void f3(s56r2Instance*,U32);

U32 f4(s56r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s56r2Instance*,U32,U32,U32,U32,U32);

void f6(s56r2Instance*,U32);

void f7(s56r2Instance*,U32,U32,U32);

void f8(s56r2Instance*,U32,U32,U32);

void s56r2____wasm_call_ctors(s56r2Instance*i);

void s56r2____wasm_apply_data_relocs(s56r2Instance*i);

U32 s56r2_func_1(s56r2Instance*i);

void s56r2_call_cb(s56r2Instance*i,U32 l0);

void s56r2Instantiate(s56r2Instance* instance, void* resolve(const char* module, const char* name));

void s56r2FreeInstance(s56r2Instance* instance);

#endif /* s56r2_H */

