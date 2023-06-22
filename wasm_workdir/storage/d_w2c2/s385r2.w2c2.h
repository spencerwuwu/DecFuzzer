#ifndef s385r2_H
#define s385r2_H

#include "w2c2_base.h"

typedef struct s385r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s385r2Instance;

void f0(s385r2Instance*);

void f1(s385r2Instance*);

U32 f2(s385r2Instance*);

void f3(s385r2Instance*,U32);

U32 f4(s385r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s385r2Instance*,U32,U32,U32,U32,U32);

void f6(s385r2Instance*,U32);

void f7(s385r2Instance*,U32,U32,U32);

void f8(s385r2Instance*,U32,U32,U32);

void s385r2____wasm_call_ctors(s385r2Instance*i);

void s385r2____wasm_apply_data_relocs(s385r2Instance*i);

U32 s385r2_func_1(s385r2Instance*i);

void s385r2_call_cb(s385r2Instance*i,U32 l0);

void s385r2Instantiate(s385r2Instance* instance, void* resolve(const char* module, const char* name));

void s385r2FreeInstance(s385r2Instance* instance);

#endif /* s385r2_H */

