#ifndef s453r2_H
#define s453r2_H

#include "w2c2_base.h"

typedef struct s453r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s453r2Instance;

void f0(s453r2Instance*);

void f1(s453r2Instance*);

U32 f2(s453r2Instance*);

void f3(s453r2Instance*,U32);

U32 f4(s453r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s453r2Instance*,U32,U32,U32,U32,U32);

void f6(s453r2Instance*,U32);

void f7(s453r2Instance*,U32,U32,U32);

void f8(s453r2Instance*,U32,U32,U32);

void s453r2____wasm_call_ctors(s453r2Instance*i);

void s453r2____wasm_apply_data_relocs(s453r2Instance*i);

U32 s453r2_func_1(s453r2Instance*i);

void s453r2_call_cb(s453r2Instance*i,U32 l0);

void s453r2Instantiate(s453r2Instance* instance, void* resolve(const char* module, const char* name));

void s453r2FreeInstance(s453r2Instance* instance);

#endif /* s453r2_H */

