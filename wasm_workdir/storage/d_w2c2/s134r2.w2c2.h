#ifndef s134r2_H
#define s134r2_H

#include "w2c2_base.h"

typedef struct s134r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s134r2Instance;

void f0(s134r2Instance*);

void f1(s134r2Instance*);

U32 f2(s134r2Instance*);

void f3(s134r2Instance*,U32);

U32 f4(s134r2Instance*,U32,U32,U32,U32,U32);

void f5(s134r2Instance*,U32,U32,U32,U32,U32);

void f6(s134r2Instance*,U32);

void f7(s134r2Instance*,U32,U32,U32);

void f8(s134r2Instance*,U32,U32,U32);

void s134r2____wasm_call_ctors(s134r2Instance*i);

void s134r2____wasm_apply_data_relocs(s134r2Instance*i);

U32 s134r2_func_1(s134r2Instance*i);

void s134r2_call_cb(s134r2Instance*i,U32 l0);

void s134r2Instantiate(s134r2Instance* instance, void* resolve(const char* module, const char* name));

void s134r2FreeInstance(s134r2Instance* instance);

#endif /* s134r2_H */

