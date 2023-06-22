#ifndef s659r2_H
#define s659r2_H

#include "w2c2_base.h"

typedef struct s659r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s659r2Instance;

void f0(s659r2Instance*);

void f1(s659r2Instance*);

U32 f2(s659r2Instance*);

void f3(s659r2Instance*,U32);

void f4(s659r2Instance*,U32);

void s659r2____wasm_call_ctors(s659r2Instance*i);

void s659r2____wasm_apply_data_relocs(s659r2Instance*i);

U32 s659r2_func_1(s659r2Instance*i);

void s659r2_call_cb(s659r2Instance*i,U32 l0);

void s659r2Instantiate(s659r2Instance* instance, void* resolve(const char* module, const char* name));

void s659r2FreeInstance(s659r2Instance* instance);

#endif /* s659r2_H */

