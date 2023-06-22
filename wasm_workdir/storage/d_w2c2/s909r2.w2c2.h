#ifndef s909r2_H
#define s909r2_H

#include "w2c2_base.h"

typedef struct s909r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s909r2Instance;

void f0(s909r2Instance*);

void f1(s909r2Instance*);

U32 f2(s909r2Instance*);

void f3(s909r2Instance*,U32);

U32 f4(s909r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s909r2Instance*,U32,U32,U32,U32,U32);

void f6(s909r2Instance*,U32);

void f7(s909r2Instance*,U32,U32,U32);

void f8(s909r2Instance*,U32,U32,U32);

void s909r2____wasm_call_ctors(s909r2Instance*i);

void s909r2____wasm_apply_data_relocs(s909r2Instance*i);

U32 s909r2_func_1(s909r2Instance*i);

void s909r2_call_cb(s909r2Instance*i,U32 l0);

void s909r2Instantiate(s909r2Instance* instance, void* resolve(const char* module, const char* name));

void s909r2FreeInstance(s909r2Instance* instance);

#endif /* s909r2_H */

