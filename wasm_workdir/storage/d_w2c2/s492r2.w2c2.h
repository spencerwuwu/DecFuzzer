#ifndef s492r2_H
#define s492r2_H

#include "w2c2_base.h"

typedef struct s492r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s492r2Instance;

void f0(s492r2Instance*);

void f1(s492r2Instance*);

U32 f2(s492r2Instance*);

void f3(s492r2Instance*,U32);

U32 f4(s492r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s492r2Instance*,U32,U32,U32,U32,U32);

void f6(s492r2Instance*,U32);

void f7(s492r2Instance*,U32,U32,U32);

void f8(s492r2Instance*,U32,U32,U32);

void s492r2____wasm_call_ctors(s492r2Instance*i);

void s492r2____wasm_apply_data_relocs(s492r2Instance*i);

U32 s492r2_func_1(s492r2Instance*i);

void s492r2_call_cb(s492r2Instance*i,U32 l0);

void s492r2Instantiate(s492r2Instance* instance, void* resolve(const char* module, const char* name));

void s492r2FreeInstance(s492r2Instance* instance);

#endif /* s492r2_H */

