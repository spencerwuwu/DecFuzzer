#ifndef s174r2_H
#define s174r2_H

#include "w2c2_base.h"

typedef struct s174r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s174r2Instance;

void f0(s174r2Instance*);

void f1(s174r2Instance*);

U32 f2(s174r2Instance*);

void f3(s174r2Instance*,U32);

U32 f4(s174r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s174r2Instance*,U32,U32,U32,U32,U32);

void f6(s174r2Instance*,U32);

void f7(s174r2Instance*,U32,U32,U32);

void f8(s174r2Instance*,U32,U32,U32);

void s174r2____wasm_call_ctors(s174r2Instance*i);

void s174r2____wasm_apply_data_relocs(s174r2Instance*i);

U32 s174r2_func_1(s174r2Instance*i);

void s174r2_call_cb(s174r2Instance*i,U32 l0);

void s174r2Instantiate(s174r2Instance* instance, void* resolve(const char* module, const char* name));

void s174r2FreeInstance(s174r2Instance* instance);

#endif /* s174r2_H */

