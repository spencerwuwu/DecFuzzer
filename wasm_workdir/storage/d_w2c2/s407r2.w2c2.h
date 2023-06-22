#ifndef s407r2_H
#define s407r2_H

#include "w2c2_base.h"

typedef struct s407r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s407r2Instance;

void f0(s407r2Instance*);

void f1(s407r2Instance*);

U32 f2(s407r2Instance*);

void f3(s407r2Instance*,U32);

U32 f4(s407r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s407r2Instance*,U32,U32,U32,U32,U32);

void f6(s407r2Instance*,U32);

void f7(s407r2Instance*,U32,U32,U32);

void f8(s407r2Instance*,U32,U32,U32);

void s407r2____wasm_call_ctors(s407r2Instance*i);

void s407r2____wasm_apply_data_relocs(s407r2Instance*i);

U32 s407r2_func_1(s407r2Instance*i);

void s407r2_call_cb(s407r2Instance*i,U32 l0);

void s407r2Instantiate(s407r2Instance* instance, void* resolve(const char* module, const char* name));

void s407r2FreeInstance(s407r2Instance* instance);

#endif /* s407r2_H */

