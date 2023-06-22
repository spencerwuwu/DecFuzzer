#ifndef s592r2_H
#define s592r2_H

#include "w2c2_base.h"

typedef struct s592r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s592r2Instance;

void f0(s592r2Instance*);

void f1(s592r2Instance*);

U32 f2(s592r2Instance*);

void f3(s592r2Instance*,U32);

U32 f4(s592r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s592r2Instance*,U32,U32,U32,U32,U32);

void f6(s592r2Instance*,U32);

void f7(s592r2Instance*,U32,U32,U32);

void f8(s592r2Instance*,U32,U32,U32);

void s592r2____wasm_call_ctors(s592r2Instance*i);

void s592r2____wasm_apply_data_relocs(s592r2Instance*i);

U32 s592r2_func_1(s592r2Instance*i);

void s592r2_call_cb(s592r2Instance*i,U32 l0);

void s592r2Instantiate(s592r2Instance* instance, void* resolve(const char* module, const char* name));

void s592r2FreeInstance(s592r2Instance* instance);

#endif /* s592r2_H */

