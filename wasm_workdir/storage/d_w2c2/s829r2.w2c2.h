#ifndef s829r2_H
#define s829r2_H

#include "w2c2_base.h"

typedef struct s829r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s829r2Instance;

void f0(s829r2Instance*);

void f1(s829r2Instance*);

U32 f2(s829r2Instance*);

void f3(s829r2Instance*,U32);

U32 f4(s829r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s829r2Instance*,U32,U32,U32,U32,U32);

void f6(s829r2Instance*,U32);

void f7(s829r2Instance*,U32,U32,U32);

void f8(s829r2Instance*,U32,U32,U32);

void s829r2____wasm_call_ctors(s829r2Instance*i);

void s829r2____wasm_apply_data_relocs(s829r2Instance*i);

U32 s829r2_func_1(s829r2Instance*i);

void s829r2_call_cb(s829r2Instance*i,U32 l0);

void s829r2Instantiate(s829r2Instance* instance, void* resolve(const char* module, const char* name));

void s829r2FreeInstance(s829r2Instance* instance);

#endif /* s829r2_H */

