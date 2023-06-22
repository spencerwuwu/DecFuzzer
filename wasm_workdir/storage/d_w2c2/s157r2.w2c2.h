#ifndef s157r2_H
#define s157r2_H

#include "w2c2_base.h"

typedef struct s157r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s157r2Instance;

void f0(s157r2Instance*);

void f1(s157r2Instance*);

U32 f2(s157r2Instance*);

void f3(s157r2Instance*,U32);

U32 f4(s157r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s157r2Instance*,U32,U32,U32,U32,U32);

void f6(s157r2Instance*,U32);

void f7(s157r2Instance*,U32,U32,U32);

void f8(s157r2Instance*,U32,U32,U32);

void s157r2____wasm_call_ctors(s157r2Instance*i);

void s157r2____wasm_apply_data_relocs(s157r2Instance*i);

U32 s157r2_func_1(s157r2Instance*i);

void s157r2_call_cb(s157r2Instance*i,U32 l0);

void s157r2Instantiate(s157r2Instance* instance, void* resolve(const char* module, const char* name));

void s157r2FreeInstance(s157r2Instance* instance);

#endif /* s157r2_H */

