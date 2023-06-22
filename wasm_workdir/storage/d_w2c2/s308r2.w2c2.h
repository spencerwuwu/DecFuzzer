#ifndef s308r2_H
#define s308r2_H

#include "w2c2_base.h"

typedef struct s308r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s308r2Instance;

void f0(s308r2Instance*);

void f1(s308r2Instance*);

U32 f2(s308r2Instance*);

void f3(s308r2Instance*,U32);

U32 f4(s308r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s308r2Instance*,U32,U32,U32,U32,U32);

void f6(s308r2Instance*,U32);

void f7(s308r2Instance*,U32,U32,U32);

void f8(s308r2Instance*,U32,U32,U32);

void s308r2____wasm_call_ctors(s308r2Instance*i);

void s308r2____wasm_apply_data_relocs(s308r2Instance*i);

U32 s308r2_func_1(s308r2Instance*i);

void s308r2_call_cb(s308r2Instance*i,U32 l0);

void s308r2Instantiate(s308r2Instance* instance, void* resolve(const char* module, const char* name));

void s308r2FreeInstance(s308r2Instance* instance);

#endif /* s308r2_H */

