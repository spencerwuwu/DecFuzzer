#ifndef s847r2_H
#define s847r2_H

#include "w2c2_base.h"

typedef struct s847r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s847r2Instance;

void f0(s847r2Instance*);

void f1(s847r2Instance*);

U32 f2(s847r2Instance*);

void f3(s847r2Instance*,U32);

U32 f4(s847r2Instance*,U32,U32,U32,U32);

void f5(s847r2Instance*,U32,U32,U32,U32,U32);

void f6(s847r2Instance*,U32);

void f7(s847r2Instance*,U32,U32,U32);

void f8(s847r2Instance*,U32,U32,U32);

void s847r2____wasm_call_ctors(s847r2Instance*i);

void s847r2____wasm_apply_data_relocs(s847r2Instance*i);

U32 s847r2_func_1(s847r2Instance*i);

void s847r2_call_cb(s847r2Instance*i,U32 l0);

void s847r2Instantiate(s847r2Instance* instance, void* resolve(const char* module, const char* name));

void s847r2FreeInstance(s847r2Instance* instance);

#endif /* s847r2_H */

