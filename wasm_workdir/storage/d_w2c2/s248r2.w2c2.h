#ifndef s248r2_H
#define s248r2_H

#include "w2c2_base.h"

typedef struct s248r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s248r2Instance;

void f0(s248r2Instance*);

void f1(s248r2Instance*);

U32 f2(s248r2Instance*);

void f3(s248r2Instance*,U32);

U32 f4(s248r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s248r2Instance*,U32,U32,U32,U32,U32);

void f6(s248r2Instance*,U32);

void f7(s248r2Instance*,U32,U32,U32);

void f8(s248r2Instance*,U32,U32,U32);

void s248r2____wasm_call_ctors(s248r2Instance*i);

void s248r2____wasm_apply_data_relocs(s248r2Instance*i);

U32 s248r2_func_1(s248r2Instance*i);

void s248r2_call_cb(s248r2Instance*i,U32 l0);

void s248r2Instantiate(s248r2Instance* instance, void* resolve(const char* module, const char* name));

void s248r2FreeInstance(s248r2Instance* instance);

#endif /* s248r2_H */

