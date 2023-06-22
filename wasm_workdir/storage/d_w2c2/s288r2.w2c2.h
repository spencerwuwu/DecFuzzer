#ifndef s288r2_H
#define s288r2_H

#include "w2c2_base.h"

typedef struct s288r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s288r2Instance;

void f0(s288r2Instance*);

void f1(s288r2Instance*);

U32 f2(s288r2Instance*);

void f3(s288r2Instance*,U32);

U32 f4(s288r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s288r2Instance*,U32,U32,U32,U32,U32);

void f6(s288r2Instance*,U32);

void f7(s288r2Instance*,U32,U32,U32);

void f8(s288r2Instance*,U32,U32,U32);

void s288r2____wasm_call_ctors(s288r2Instance*i);

void s288r2____wasm_apply_data_relocs(s288r2Instance*i);

U32 s288r2_func_1(s288r2Instance*i);

void s288r2_call_cb(s288r2Instance*i,U32 l0);

void s288r2Instantiate(s288r2Instance* instance, void* resolve(const char* module, const char* name));

void s288r2FreeInstance(s288r2Instance* instance);

#endif /* s288r2_H */

