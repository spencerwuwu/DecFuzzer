#ifndef s682r2_H
#define s682r2_H

#include "w2c2_base.h"

typedef struct s682r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s682r2Instance;

void f0(s682r2Instance*);

void f1(s682r2Instance*);

U32 f2(s682r2Instance*);

void f3(s682r2Instance*,U32);

U32 f4(s682r2Instance*,U32,U32,U32,U32,U32);

void f5(s682r2Instance*,U32,U32,U32,U32,U32);

void f6(s682r2Instance*,U32);

void f7(s682r2Instance*,U32,U32,U32);

void f8(s682r2Instance*,U32,U32,U32);

void s682r2____wasm_call_ctors(s682r2Instance*i);

void s682r2____wasm_apply_data_relocs(s682r2Instance*i);

U32 s682r2_func_1(s682r2Instance*i);

void s682r2_call_cb(s682r2Instance*i,U32 l0);

void s682r2Instantiate(s682r2Instance* instance, void* resolve(const char* module, const char* name));

void s682r2FreeInstance(s682r2Instance* instance);

#endif /* s682r2_H */

