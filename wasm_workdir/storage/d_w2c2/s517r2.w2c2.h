#ifndef s517r2_H
#define s517r2_H

#include "w2c2_base.h"

typedef struct s517r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s517r2Instance;

void f0(s517r2Instance*);

void f1(s517r2Instance*);

U32 f2(s517r2Instance*);

void f3(s517r2Instance*,U32);

U32 f4(s517r2Instance*,U32,U32,U32);

void f5(s517r2Instance*,U32,U32,U32,U32,U32);

void f6(s517r2Instance*,U32);

void f7(s517r2Instance*,U32,U32,U32);

void f8(s517r2Instance*,U32,U32,U32);

void s517r2____wasm_call_ctors(s517r2Instance*i);

void s517r2____wasm_apply_data_relocs(s517r2Instance*i);

U32 s517r2_func_1(s517r2Instance*i);

void s517r2_call_cb(s517r2Instance*i,U32 l0);

void s517r2Instantiate(s517r2Instance* instance, void* resolve(const char* module, const char* name));

void s517r2FreeInstance(s517r2Instance* instance);

#endif /* s517r2_H */

