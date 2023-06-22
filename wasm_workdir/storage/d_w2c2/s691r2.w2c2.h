#ifndef s691r2_H
#define s691r2_H

#include "w2c2_base.h"

typedef struct s691r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s691r2Instance;

void f0(s691r2Instance*);

void f1(s691r2Instance*);

U32 f2(s691r2Instance*);

void f3(s691r2Instance*,U32);

U32 f4(s691r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s691r2Instance*,U32,U32,U32,U32,U32);

void f6(s691r2Instance*,U32);

void f7(s691r2Instance*,U32,U32,U32);

void f8(s691r2Instance*,U32,U32,U32);

void s691r2____wasm_call_ctors(s691r2Instance*i);

void s691r2____wasm_apply_data_relocs(s691r2Instance*i);

U32 s691r2_func_1(s691r2Instance*i);

void s691r2_call_cb(s691r2Instance*i,U32 l0);

void s691r2Instantiate(s691r2Instance* instance, void* resolve(const char* module, const char* name));

void s691r2FreeInstance(s691r2Instance* instance);

#endif /* s691r2_H */

