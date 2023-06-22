#ifndef s914r2_H
#define s914r2_H

#include "w2c2_base.h"

typedef struct s914r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s914r2Instance;

void f0(s914r2Instance*);

void f1(s914r2Instance*);

U32 f2(s914r2Instance*);

void f3(s914r2Instance*,U32);

U32 f4(s914r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s914r2Instance*,U32,U32,U32,U32,U32);

void f6(s914r2Instance*,U32);

void f7(s914r2Instance*,U32,U32,U32);

void f8(s914r2Instance*,U32,U32,U32);

void s914r2____wasm_call_ctors(s914r2Instance*i);

void s914r2____wasm_apply_data_relocs(s914r2Instance*i);

U32 s914r2_func_1(s914r2Instance*i);

void s914r2_call_cb(s914r2Instance*i,U32 l0);

void s914r2Instantiate(s914r2Instance* instance, void* resolve(const char* module, const char* name));

void s914r2FreeInstance(s914r2Instance* instance);

#endif /* s914r2_H */

