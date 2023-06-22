#ifndef s953r2_H
#define s953r2_H

#include "w2c2_base.h"

typedef struct s953r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s953r2Instance;

void f0(s953r2Instance*);

void f1(s953r2Instance*);

U32 f2(s953r2Instance*);

void f3(s953r2Instance*,U32);

U32 f4(s953r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s953r2Instance*,U32,U32,U32,U32,U32);

void f6(s953r2Instance*,U32);

void f7(s953r2Instance*,U32,U32,U32);

void f8(s953r2Instance*,U32,U32,U32);

void s953r2____wasm_call_ctors(s953r2Instance*i);

void s953r2____wasm_apply_data_relocs(s953r2Instance*i);

U32 s953r2_func_1(s953r2Instance*i);

void s953r2_call_cb(s953r2Instance*i,U32 l0);

void s953r2Instantiate(s953r2Instance* instance, void* resolve(const char* module, const char* name));

void s953r2FreeInstance(s953r2Instance* instance);

#endif /* s953r2_H */

