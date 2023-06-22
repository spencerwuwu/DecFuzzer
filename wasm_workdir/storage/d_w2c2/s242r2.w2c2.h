#ifndef s242r2_H
#define s242r2_H

#include "w2c2_base.h"

typedef struct s242r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s242r2Instance;

void f0(s242r2Instance*);

void f1(s242r2Instance*);

U32 f2(s242r2Instance*);

void f3(s242r2Instance*,U32);

U32 f4(s242r2Instance*,U32,U32,U32,U32);

void f5(s242r2Instance*,U32,U32,U32,U32,U32);

void f6(s242r2Instance*,U32);

void f7(s242r2Instance*,U32,U32,U32);

void f8(s242r2Instance*,U32,U32,U32);

void s242r2____wasm_call_ctors(s242r2Instance*i);

void s242r2____wasm_apply_data_relocs(s242r2Instance*i);

U32 s242r2_func_1(s242r2Instance*i);

void s242r2_call_cb(s242r2Instance*i,U32 l0);

void s242r2Instantiate(s242r2Instance* instance, void* resolve(const char* module, const char* name));

void s242r2FreeInstance(s242r2Instance* instance);

#endif /* s242r2_H */

