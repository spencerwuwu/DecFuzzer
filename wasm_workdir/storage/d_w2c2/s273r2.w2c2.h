#ifndef s273r2_H
#define s273r2_H

#include "w2c2_base.h"

typedef struct s273r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s273r2Instance;

void f0(s273r2Instance*);

void f1(s273r2Instance*);

U32 f2(s273r2Instance*);

void f3(s273r2Instance*,U32);

void f4(s273r2Instance*,U32);

void s273r2____wasm_call_ctors(s273r2Instance*i);

void s273r2____wasm_apply_data_relocs(s273r2Instance*i);

U32 s273r2_func_1(s273r2Instance*i);

void s273r2_call_cb(s273r2Instance*i,U32 l0);

void s273r2Instantiate(s273r2Instance* instance, void* resolve(const char* module, const char* name));

void s273r2FreeInstance(s273r2Instance* instance);

#endif /* s273r2_H */

