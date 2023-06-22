#ifndef s330r2_H
#define s330r2_H

#include "w2c2_base.h"

typedef struct s330r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s330r2Instance;

void f0(s330r2Instance*);

void f1(s330r2Instance*);

U32 f2(s330r2Instance*);

void f3(s330r2Instance*,U32);

U32 f4(s330r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s330r2Instance*,U32,U32,U32,U32,U32);

void f6(s330r2Instance*,U32);

void f7(s330r2Instance*,U32,U32,U32);

void f8(s330r2Instance*,U32,U32,U32);

void s330r2____wasm_call_ctors(s330r2Instance*i);

void s330r2____wasm_apply_data_relocs(s330r2Instance*i);

U32 s330r2_func_1(s330r2Instance*i);

void s330r2_call_cb(s330r2Instance*i,U32 l0);

void s330r2Instantiate(s330r2Instance* instance, void* resolve(const char* module, const char* name));

void s330r2FreeInstance(s330r2Instance* instance);

#endif /* s330r2_H */

