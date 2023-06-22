#ifndef s227r2_H
#define s227r2_H

#include "w2c2_base.h"

typedef struct s227r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s227r2Instance;

void f0(s227r2Instance*);

void f1(s227r2Instance*);

U32 f2(s227r2Instance*);

void f3(s227r2Instance*,U32);

U32 f4(s227r2Instance*,U32,U32,U32,U32,U32);

void f5(s227r2Instance*,U32,U32,U32,U32,U32);

void f6(s227r2Instance*,U32);

void f7(s227r2Instance*,U32,U32,U32);

void f8(s227r2Instance*,U32,U32,U32);

void s227r2____wasm_call_ctors(s227r2Instance*i);

void s227r2____wasm_apply_data_relocs(s227r2Instance*i);

U32 s227r2_func_1(s227r2Instance*i);

void s227r2_call_cb(s227r2Instance*i,U32 l0);

void s227r2Instantiate(s227r2Instance* instance, void* resolve(const char* module, const char* name));

void s227r2FreeInstance(s227r2Instance* instance);

#endif /* s227r2_H */

