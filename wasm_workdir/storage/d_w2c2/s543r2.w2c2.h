#ifndef s543r2_H
#define s543r2_H

#include "w2c2_base.h"

typedef struct s543r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s543r2Instance;

void f0(s543r2Instance*);

void f1(s543r2Instance*);

U32 f2(s543r2Instance*);

void f3(s543r2Instance*,U32);

U32 f4(s543r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s543r2Instance*,U32,U32,U32,U32,U32);

void f6(s543r2Instance*,U32);

void f7(s543r2Instance*,U32,U32,U32);

void f8(s543r2Instance*,U32,U32,U32);

void s543r2____wasm_call_ctors(s543r2Instance*i);

void s543r2____wasm_apply_data_relocs(s543r2Instance*i);

U32 s543r2_func_1(s543r2Instance*i);

void s543r2_call_cb(s543r2Instance*i,U32 l0);

void s543r2Instantiate(s543r2Instance* instance, void* resolve(const char* module, const char* name));

void s543r2FreeInstance(s543r2Instance* instance);

#endif /* s543r2_H */

