#ifndef s163r2_H
#define s163r2_H

#include "w2c2_base.h"

typedef struct s163r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s163r2Instance;

void f0(s163r2Instance*);

void f1(s163r2Instance*);

U32 f2(s163r2Instance*);

void f3(s163r2Instance*,U32);

U32 f4(s163r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s163r2Instance*,U32,U32,U32,U32,U32);

void f6(s163r2Instance*,U32);

void f7(s163r2Instance*,U32,U32,U32);

void f8(s163r2Instance*,U32,U32,U32);

void s163r2____wasm_call_ctors(s163r2Instance*i);

void s163r2____wasm_apply_data_relocs(s163r2Instance*i);

U32 s163r2_func_1(s163r2Instance*i);

void s163r2_call_cb(s163r2Instance*i,U32 l0);

void s163r2Instantiate(s163r2Instance* instance, void* resolve(const char* module, const char* name));

void s163r2FreeInstance(s163r2Instance* instance);

#endif /* s163r2_H */

