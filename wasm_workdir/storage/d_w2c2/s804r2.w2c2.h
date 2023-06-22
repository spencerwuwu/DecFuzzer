#ifndef s804r2_H
#define s804r2_H

#include "w2c2_base.h"

typedef struct s804r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s804r2Instance;

void f0(s804r2Instance*);

void f1(s804r2Instance*);

U32 f2(s804r2Instance*);

void f3(s804r2Instance*,U32);

U32 f4(s804r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s804r2Instance*,U32,U32,U32,U32,U32);

void f6(s804r2Instance*,U32);

void f7(s804r2Instance*,U32,U32,U32);

void f8(s804r2Instance*,U32,U32,U32);

void s804r2____wasm_call_ctors(s804r2Instance*i);

void s804r2____wasm_apply_data_relocs(s804r2Instance*i);

U32 s804r2_func_1(s804r2Instance*i);

void s804r2_call_cb(s804r2Instance*i,U32 l0);

void s804r2Instantiate(s804r2Instance* instance, void* resolve(const char* module, const char* name));

void s804r2FreeInstance(s804r2Instance* instance);

#endif /* s804r2_H */

