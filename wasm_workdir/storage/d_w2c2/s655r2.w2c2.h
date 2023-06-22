#ifndef s655r2_H
#define s655r2_H

#include "w2c2_base.h"

typedef struct s655r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s655r2Instance;

void f0(s655r2Instance*);

void f1(s655r2Instance*);

U32 f2(s655r2Instance*);

void f3(s655r2Instance*,U32);

U32 f4(s655r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s655r2Instance*,U32,U32,U32,U32,U32);

void f6(s655r2Instance*,U32);

void f7(s655r2Instance*,U32,U32,U32);

void f8(s655r2Instance*,U32,U32,U32);

void s655r2____wasm_call_ctors(s655r2Instance*i);

void s655r2____wasm_apply_data_relocs(s655r2Instance*i);

U32 s655r2_func_1(s655r2Instance*i);

void s655r2_call_cb(s655r2Instance*i,U32 l0);

void s655r2Instantiate(s655r2Instance* instance, void* resolve(const char* module, const char* name));

void s655r2FreeInstance(s655r2Instance* instance);

#endif /* s655r2_H */

