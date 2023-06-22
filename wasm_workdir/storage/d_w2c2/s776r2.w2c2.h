#ifndef s776r2_H
#define s776r2_H

#include "w2c2_base.h"

typedef struct s776r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s776r2Instance;

void f0(s776r2Instance*);

void f1(s776r2Instance*);

U32 f2(s776r2Instance*);

void f3(s776r2Instance*,U32);

U32 f4(s776r2Instance*,U32,U32,U32);

void f5(s776r2Instance*,U32,U32,U32,U32,U32);

void f6(s776r2Instance*,U32);

void f7(s776r2Instance*,U32,U32,U32);

void f8(s776r2Instance*,U32,U32,U32);

void s776r2____wasm_call_ctors(s776r2Instance*i);

void s776r2____wasm_apply_data_relocs(s776r2Instance*i);

U32 s776r2_func_1(s776r2Instance*i);

void s776r2_call_cb(s776r2Instance*i,U32 l0);

void s776r2Instantiate(s776r2Instance* instance, void* resolve(const char* module, const char* name));

void s776r2FreeInstance(s776r2Instance* instance);

#endif /* s776r2_H */

