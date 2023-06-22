#ifndef s749r2_H
#define s749r2_H

#include "w2c2_base.h"

typedef struct s749r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s749r2Instance;

void f0(s749r2Instance*);

void f1(s749r2Instance*);

U32 f2(s749r2Instance*);

void f3(s749r2Instance*,U32);

U32 f4(s749r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s749r2Instance*,U32,U32,U32,U32,U32);

void f6(s749r2Instance*,U32);

void f7(s749r2Instance*,U32,U32,U32);

void f8(s749r2Instance*,U32,U32,U32);

void s749r2____wasm_call_ctors(s749r2Instance*i);

void s749r2____wasm_apply_data_relocs(s749r2Instance*i);

U32 s749r2_func_1(s749r2Instance*i);

void s749r2_call_cb(s749r2Instance*i,U32 l0);

void s749r2Instantiate(s749r2Instance* instance, void* resolve(const char* module, const char* name));

void s749r2FreeInstance(s749r2Instance* instance);

#endif /* s749r2_H */

