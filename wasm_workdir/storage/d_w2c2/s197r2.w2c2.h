#ifndef s197r2_H
#define s197r2_H

#include "w2c2_base.h"

typedef struct s197r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s197r2Instance;

void f0(s197r2Instance*);

void f1(s197r2Instance*);

U32 f2(s197r2Instance*);

void f3(s197r2Instance*,U32);

U32 f4(s197r2Instance*,U32,U32,U32);

void f5(s197r2Instance*,U32,U32,U32,U32,U32);

void f6(s197r2Instance*,U32);

void f7(s197r2Instance*,U32,U32,U32);

void f8(s197r2Instance*,U32,U32,U32);

void s197r2____wasm_call_ctors(s197r2Instance*i);

void s197r2____wasm_apply_data_relocs(s197r2Instance*i);

U32 s197r2_func_1(s197r2Instance*i);

void s197r2_call_cb(s197r2Instance*i,U32 l0);

void s197r2Instantiate(s197r2Instance* instance, void* resolve(const char* module, const char* name));

void s197r2FreeInstance(s197r2Instance* instance);

#endif /* s197r2_H */

