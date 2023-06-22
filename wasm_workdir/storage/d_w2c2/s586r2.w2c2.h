#ifndef s586r2_H
#define s586r2_H

#include "w2c2_base.h"

typedef struct s586r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s586r2Instance;

void f0(s586r2Instance*);

void f1(s586r2Instance*);

U32 f2(s586r2Instance*);

void f3(s586r2Instance*,U32);

U32 f4(s586r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s586r2Instance*,U32,U32,U32,U32,U32);

void f6(s586r2Instance*,U32);

void f7(s586r2Instance*,U32,U32,U32);

void f8(s586r2Instance*,U32,U32,U32);

void s586r2____wasm_call_ctors(s586r2Instance*i);

void s586r2____wasm_apply_data_relocs(s586r2Instance*i);

U32 s586r2_func_1(s586r2Instance*i);

void s586r2_call_cb(s586r2Instance*i,U32 l0);

void s586r2Instantiate(s586r2Instance* instance, void* resolve(const char* module, const char* name));

void s586r2FreeInstance(s586r2Instance* instance);

#endif /* s586r2_H */

