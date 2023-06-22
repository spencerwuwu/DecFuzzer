#ifndef s319r2_H
#define s319r2_H

#include "w2c2_base.h"

typedef struct s319r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s319r2Instance;

void f0(s319r2Instance*);

void f1(s319r2Instance*);

U32 f2(s319r2Instance*);

void f3(s319r2Instance*,U32);

U32 f4(s319r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s319r2Instance*,U32,U32,U32,U32,U32);

void f6(s319r2Instance*,U32);

void f7(s319r2Instance*,U32,U32,U32);

void f8(s319r2Instance*,U32,U32,U32);

void s319r2____wasm_call_ctors(s319r2Instance*i);

void s319r2____wasm_apply_data_relocs(s319r2Instance*i);

U32 s319r2_func_1(s319r2Instance*i);

void s319r2_call_cb(s319r2Instance*i,U32 l0);

void s319r2Instantiate(s319r2Instance* instance, void* resolve(const char* module, const char* name));

void s319r2FreeInstance(s319r2Instance* instance);

#endif /* s319r2_H */

