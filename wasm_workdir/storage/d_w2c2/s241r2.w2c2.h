#ifndef s241r2_H
#define s241r2_H

#include "w2c2_base.h"

typedef struct s241r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s241r2Instance;

void f0(s241r2Instance*);

void f1(s241r2Instance*);

U32 f2(s241r2Instance*);

void f3(s241r2Instance*,U32);

U32 f4(s241r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s241r2Instance*,U32,U32,U32,U32,U32);

void f6(s241r2Instance*,U32);

void f7(s241r2Instance*,U32,U32,U32);

void f8(s241r2Instance*,U32,U32,U32);

void s241r2____wasm_call_ctors(s241r2Instance*i);

void s241r2____wasm_apply_data_relocs(s241r2Instance*i);

U32 s241r2_func_1(s241r2Instance*i);

void s241r2_call_cb(s241r2Instance*i,U32 l0);

void s241r2Instantiate(s241r2Instance* instance, void* resolve(const char* module, const char* name));

void s241r2FreeInstance(s241r2Instance* instance);

#endif /* s241r2_H */

