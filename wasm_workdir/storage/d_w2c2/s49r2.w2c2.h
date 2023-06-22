#ifndef s49r2_H
#define s49r2_H

#include "w2c2_base.h"

typedef struct s49r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s49r2Instance;

void f0(s49r2Instance*);

void f1(s49r2Instance*);

U32 f2(s49r2Instance*);

void f3(s49r2Instance*,U32);

void f4(s49r2Instance*,U32);

void s49r2____wasm_call_ctors(s49r2Instance*i);

void s49r2____wasm_apply_data_relocs(s49r2Instance*i);

U32 s49r2_func_1(s49r2Instance*i);

void s49r2_call_cb(s49r2Instance*i,U32 l0);

void s49r2Instantiate(s49r2Instance* instance, void* resolve(const char* module, const char* name));

void s49r2FreeInstance(s49r2Instance* instance);

#endif /* s49r2_H */

