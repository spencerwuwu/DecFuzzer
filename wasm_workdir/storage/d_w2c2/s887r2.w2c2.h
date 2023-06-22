#ifndef s887r2_H
#define s887r2_H

#include "w2c2_base.h"

typedef struct s887r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s887r2Instance;

void f0(s887r2Instance*);

void f1(s887r2Instance*);

U32 f2(s887r2Instance*);

void f3(s887r2Instance*,U32);

U32 f4(s887r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s887r2Instance*,U32,U32,U32,U32,U32);

void f6(s887r2Instance*,U32);

void f7(s887r2Instance*,U32,U32,U32);

void f8(s887r2Instance*,U32,U32,U32);

void s887r2____wasm_call_ctors(s887r2Instance*i);

void s887r2____wasm_apply_data_relocs(s887r2Instance*i);

U32 s887r2_func_1(s887r2Instance*i);

void s887r2_call_cb(s887r2Instance*i,U32 l0);

void s887r2Instantiate(s887r2Instance* instance, void* resolve(const char* module, const char* name));

void s887r2FreeInstance(s887r2Instance* instance);

#endif /* s887r2_H */

