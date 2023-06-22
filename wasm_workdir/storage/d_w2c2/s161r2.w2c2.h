#ifndef s161r2_H
#define s161r2_H

#include "w2c2_base.h"

typedef struct s161r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s161r2Instance;

void f0(s161r2Instance*);

void f1(s161r2Instance*);

U32 f2(s161r2Instance*);

void f3(s161r2Instance*,U32);

U32 f4(s161r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s161r2Instance*,U32,U32,U32,U32,U32);

void f6(s161r2Instance*,U32);

void f7(s161r2Instance*,U32,U32,U32);

void f8(s161r2Instance*,U32,U32,U32);

void s161r2____wasm_call_ctors(s161r2Instance*i);

void s161r2____wasm_apply_data_relocs(s161r2Instance*i);

U32 s161r2_func_1(s161r2Instance*i);

void s161r2_call_cb(s161r2Instance*i,U32 l0);

void s161r2Instantiate(s161r2Instance* instance, void* resolve(const char* module, const char* name));

void s161r2FreeInstance(s161r2Instance* instance);

#endif /* s161r2_H */

