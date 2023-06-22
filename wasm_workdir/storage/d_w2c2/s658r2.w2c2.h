#ifndef s658r2_H
#define s658r2_H

#include "w2c2_base.h"

typedef struct s658r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s658r2Instance;

void f0(s658r2Instance*);

void f1(s658r2Instance*);

U32 f2(s658r2Instance*);

void f3(s658r2Instance*,U32);

void f4(s658r2Instance*,U32);

void s658r2____wasm_call_ctors(s658r2Instance*i);

void s658r2____wasm_apply_data_relocs(s658r2Instance*i);

U32 s658r2_func_1(s658r2Instance*i);

void s658r2_call_cb(s658r2Instance*i,U32 l0);

void s658r2Instantiate(s658r2Instance* instance, void* resolve(const char* module, const char* name));

void s658r2FreeInstance(s658r2Instance* instance);

#endif /* s658r2_H */

