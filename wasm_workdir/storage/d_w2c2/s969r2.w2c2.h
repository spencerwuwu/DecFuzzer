#ifndef s969r2_H
#define s969r2_H

#include "w2c2_base.h"

typedef struct s969r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s969r2Instance;

void f0(s969r2Instance*);

void f1(s969r2Instance*);

U32 f2(s969r2Instance*);

void f3(s969r2Instance*,U32);

U32 f4(s969r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s969r2Instance*,U32,U32,U32,U32,U32);

void f6(s969r2Instance*,U32);

void f7(s969r2Instance*,U32,U32,U32);

void f8(s969r2Instance*,U32,U32,U32);

void s969r2____wasm_call_ctors(s969r2Instance*i);

void s969r2____wasm_apply_data_relocs(s969r2Instance*i);

U32 s969r2_func_1(s969r2Instance*i);

void s969r2_call_cb(s969r2Instance*i,U32 l0);

void s969r2Instantiate(s969r2Instance* instance, void* resolve(const char* module, const char* name));

void s969r2FreeInstance(s969r2Instance* instance);

#endif /* s969r2_H */

