#ifndef s924r2_H
#define s924r2_H

#include "w2c2_base.h"

typedef struct s924r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s924r2Instance;

void f0(s924r2Instance*);

void f1(s924r2Instance*);

U32 f2(s924r2Instance*);

void f3(s924r2Instance*,U32);

U32 f4(s924r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s924r2Instance*,U32,U32,U32,U32,U32);

void f6(s924r2Instance*,U32);

void f7(s924r2Instance*,U32,U32,U32);

void f8(s924r2Instance*,U32,U32,U32);

void s924r2____wasm_call_ctors(s924r2Instance*i);

void s924r2____wasm_apply_data_relocs(s924r2Instance*i);

U32 s924r2_func_1(s924r2Instance*i);

void s924r2_call_cb(s924r2Instance*i,U32 l0);

void s924r2Instantiate(s924r2Instance* instance, void* resolve(const char* module, const char* name));

void s924r2FreeInstance(s924r2Instance* instance);

#endif /* s924r2_H */

