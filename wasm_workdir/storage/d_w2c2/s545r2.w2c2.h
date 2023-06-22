#ifndef s545r2_H
#define s545r2_H

#include "w2c2_base.h"

typedef struct s545r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s545r2Instance;

void f0(s545r2Instance*);

void f1(s545r2Instance*);

U32 f2(s545r2Instance*);

void f3(s545r2Instance*,U32);

U32 f4(s545r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s545r2Instance*,U32,U32,U32,U32,U32);

void f6(s545r2Instance*,U32);

void f7(s545r2Instance*,U32,U32,U32);

void f8(s545r2Instance*,U32,U32,U32);

void s545r2____wasm_call_ctors(s545r2Instance*i);

void s545r2____wasm_apply_data_relocs(s545r2Instance*i);

U32 s545r2_func_1(s545r2Instance*i);

void s545r2_call_cb(s545r2Instance*i,U32 l0);

void s545r2Instantiate(s545r2Instance* instance, void* resolve(const char* module, const char* name));

void s545r2FreeInstance(s545r2Instance* instance);

#endif /* s545r2_H */

