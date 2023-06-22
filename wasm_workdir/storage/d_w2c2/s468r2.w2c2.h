#ifndef s468r2_H
#define s468r2_H

#include "w2c2_base.h"

typedef struct s468r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s468r2Instance;

void f0(s468r2Instance*);

void f1(s468r2Instance*);

U32 f2(s468r2Instance*);

void f3(s468r2Instance*,U32);

U32 f4(s468r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s468r2Instance*,U32,U32,U32,U32,U32);

void f6(s468r2Instance*,U32);

void f7(s468r2Instance*,U32,U32,U32);

void f8(s468r2Instance*,U32,U32,U32);

void s468r2____wasm_call_ctors(s468r2Instance*i);

void s468r2____wasm_apply_data_relocs(s468r2Instance*i);

U32 s468r2_func_1(s468r2Instance*i);

void s468r2_call_cb(s468r2Instance*i,U32 l0);

void s468r2Instantiate(s468r2Instance* instance, void* resolve(const char* module, const char* name));

void s468r2FreeInstance(s468r2Instance* instance);

#endif /* s468r2_H */

