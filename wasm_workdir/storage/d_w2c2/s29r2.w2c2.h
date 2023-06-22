#ifndef s29r2_H
#define s29r2_H

#include "w2c2_base.h"

typedef struct s29r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s29r2Instance;

void f0(s29r2Instance*);

void f1(s29r2Instance*);

U32 f2(s29r2Instance*);

void f3(s29r2Instance*,U32);

void f4(s29r2Instance*,U32);

void s29r2____wasm_call_ctors(s29r2Instance*i);

void s29r2____wasm_apply_data_relocs(s29r2Instance*i);

U32 s29r2_func_1(s29r2Instance*i);

void s29r2_call_cb(s29r2Instance*i,U32 l0);

void s29r2Instantiate(s29r2Instance* instance, void* resolve(const char* module, const char* name));

void s29r2FreeInstance(s29r2Instance* instance);

#endif /* s29r2_H */

