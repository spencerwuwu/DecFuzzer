#ifndef s439r2_H
#define s439r2_H

#include "w2c2_base.h"

typedef struct s439r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s439r2Instance;

void f0(s439r2Instance*);

void f1(s439r2Instance*);

U32 f2(s439r2Instance*);

void f3(s439r2Instance*,U32);

U32 f4(s439r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s439r2Instance*,U32,U32,U32,U32,U32);

void f6(s439r2Instance*,U32);

void f7(s439r2Instance*,U32,U32,U32);

void f8(s439r2Instance*,U32,U32,U32);

void s439r2____wasm_call_ctors(s439r2Instance*i);

void s439r2____wasm_apply_data_relocs(s439r2Instance*i);

U32 s439r2_func_1(s439r2Instance*i);

void s439r2_call_cb(s439r2Instance*i,U32 l0);

void s439r2Instantiate(s439r2Instance* instance, void* resolve(const char* module, const char* name));

void s439r2FreeInstance(s439r2Instance* instance);

#endif /* s439r2_H */

