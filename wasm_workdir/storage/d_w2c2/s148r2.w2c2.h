#ifndef s148r2_H
#define s148r2_H

#include "w2c2_base.h"

typedef struct s148r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s148r2Instance;

void f0(s148r2Instance*);

void f1(s148r2Instance*);

U32 f2(s148r2Instance*);

void f3(s148r2Instance*,U32);

U32 f4(s148r2Instance*,U32,U32,U32,U32,U32);

void f5(s148r2Instance*,U32,U32,U32,U32,U32);

void f6(s148r2Instance*,U32);

void f7(s148r2Instance*,U32,U32,U32);

void f8(s148r2Instance*,U32,U32,U32);

void s148r2____wasm_call_ctors(s148r2Instance*i);

void s148r2____wasm_apply_data_relocs(s148r2Instance*i);

U32 s148r2_func_1(s148r2Instance*i);

void s148r2_call_cb(s148r2Instance*i,U32 l0);

void s148r2Instantiate(s148r2Instance* instance, void* resolve(const char* module, const char* name));

void s148r2FreeInstance(s148r2Instance* instance);

#endif /* s148r2_H */

