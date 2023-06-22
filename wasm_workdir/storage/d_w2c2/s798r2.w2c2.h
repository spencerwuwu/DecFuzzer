#ifndef s798r2_H
#define s798r2_H

#include "w2c2_base.h"

typedef struct s798r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s798r2Instance;

void f0(s798r2Instance*);

void f1(s798r2Instance*);

U32 f2(s798r2Instance*);

void f3(s798r2Instance*,U32);

U32 f4(s798r2Instance*,U32,U32,U32,U32);

void f5(s798r2Instance*,U32,U32,U32,U32,U32);

void f6(s798r2Instance*,U32);

void f7(s798r2Instance*,U32,U32,U32);

void f8(s798r2Instance*,U32,U32,U32);

void s798r2____wasm_call_ctors(s798r2Instance*i);

void s798r2____wasm_apply_data_relocs(s798r2Instance*i);

U32 s798r2_func_1(s798r2Instance*i);

void s798r2_call_cb(s798r2Instance*i,U32 l0);

void s798r2Instantiate(s798r2Instance* instance, void* resolve(const char* module, const char* name));

void s798r2FreeInstance(s798r2Instance* instance);

#endif /* s798r2_H */

