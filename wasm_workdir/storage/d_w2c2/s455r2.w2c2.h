#ifndef s455r2_H
#define s455r2_H

#include "w2c2_base.h"

typedef struct s455r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s455r2Instance;

void f0(s455r2Instance*);

void f1(s455r2Instance*);

U32 f2(s455r2Instance*);

void f3(s455r2Instance*,U32);

U32 f4(s455r2Instance*,U32,U32,U32,U32,U32);

void f5(s455r2Instance*,U32,U32,U32,U32,U32);

void f6(s455r2Instance*,U32);

void f7(s455r2Instance*,U32,U32,U32);

void f8(s455r2Instance*,U32,U32,U32);

void s455r2____wasm_call_ctors(s455r2Instance*i);

void s455r2____wasm_apply_data_relocs(s455r2Instance*i);

U32 s455r2_func_1(s455r2Instance*i);

void s455r2_call_cb(s455r2Instance*i,U32 l0);

void s455r2Instantiate(s455r2Instance* instance, void* resolve(const char* module, const char* name));

void s455r2FreeInstance(s455r2Instance* instance);

#endif /* s455r2_H */

