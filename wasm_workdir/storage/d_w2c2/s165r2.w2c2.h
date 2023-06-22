#ifndef s165r2_H
#define s165r2_H

#include "w2c2_base.h"

typedef struct s165r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s165r2Instance;

void f0(s165r2Instance*);

void f1(s165r2Instance*);

U32 f2(s165r2Instance*);

void f3(s165r2Instance*,U32);

U32 f4(s165r2Instance*,U32,U32,U32,U32,U32);

void f5(s165r2Instance*,U32,U32,U32,U32,U32);

void f6(s165r2Instance*,U32);

void f7(s165r2Instance*,U32,U32,U32);

void f8(s165r2Instance*,U32,U32,U32);

void s165r2____wasm_call_ctors(s165r2Instance*i);

void s165r2____wasm_apply_data_relocs(s165r2Instance*i);

U32 s165r2_func_1(s165r2Instance*i);

void s165r2_call_cb(s165r2Instance*i,U32 l0);

void s165r2Instantiate(s165r2Instance* instance, void* resolve(const char* module, const char* name));

void s165r2FreeInstance(s165r2Instance* instance);

#endif /* s165r2_H */

