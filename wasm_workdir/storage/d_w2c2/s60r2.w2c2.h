#ifndef s60r2_H
#define s60r2_H

#include "w2c2_base.h"

typedef struct s60r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s60r2Instance;

void f0(s60r2Instance*);

void f1(s60r2Instance*);

U32 f2(s60r2Instance*);

void f3(s60r2Instance*,U32);

U32 f4(s60r2Instance*,U32,U32,U32,U32,U32);

void f5(s60r2Instance*,U32,U32,U32,U32,U32);

void f6(s60r2Instance*,U32);

void f7(s60r2Instance*,U32,U32,U32);

void f8(s60r2Instance*,U32,U32,U32);

void s60r2____wasm_call_ctors(s60r2Instance*i);

void s60r2____wasm_apply_data_relocs(s60r2Instance*i);

U32 s60r2_func_1(s60r2Instance*i);

void s60r2_call_cb(s60r2Instance*i,U32 l0);

void s60r2Instantiate(s60r2Instance* instance, void* resolve(const char* module, const char* name));

void s60r2FreeInstance(s60r2Instance* instance);

#endif /* s60r2_H */

