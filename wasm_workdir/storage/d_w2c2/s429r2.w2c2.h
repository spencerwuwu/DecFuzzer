#ifndef s429r2_H
#define s429r2_H

#include "w2c2_base.h"

typedef struct s429r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s429r2Instance;

void f0(s429r2Instance*);

void f1(s429r2Instance*);

U32 f2(s429r2Instance*);

void f3(s429r2Instance*,U32);

U32 f4(s429r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s429r2Instance*,U32,U32,U32,U32,U32);

void f6(s429r2Instance*,U32);

void f7(s429r2Instance*,U32,U32,U32);

void f8(s429r2Instance*,U32,U32,U32);

void s429r2____wasm_call_ctors(s429r2Instance*i);

void s429r2____wasm_apply_data_relocs(s429r2Instance*i);

U32 s429r2_func_1(s429r2Instance*i);

void s429r2_call_cb(s429r2Instance*i,U32 l0);

void s429r2Instantiate(s429r2Instance* instance, void* resolve(const char* module, const char* name));

void s429r2FreeInstance(s429r2Instance* instance);

#endif /* s429r2_H */

