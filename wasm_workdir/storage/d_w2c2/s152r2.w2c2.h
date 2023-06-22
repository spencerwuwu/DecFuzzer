#ifndef s152r2_H
#define s152r2_H

#include "w2c2_base.h"

typedef struct s152r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s152r2Instance;

void f0(s152r2Instance*);

void f1(s152r2Instance*);

U32 f2(s152r2Instance*);

void f3(s152r2Instance*,U32);

U32 f4(s152r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s152r2Instance*,U32,U32,U32,U32,U32);

void f6(s152r2Instance*,U32);

void f7(s152r2Instance*,U32,U32,U32);

void f8(s152r2Instance*,U32,U32,U32);

void s152r2____wasm_call_ctors(s152r2Instance*i);

void s152r2____wasm_apply_data_relocs(s152r2Instance*i);

U32 s152r2_func_1(s152r2Instance*i);

void s152r2_call_cb(s152r2Instance*i,U32 l0);

void s152r2Instantiate(s152r2Instance* instance, void* resolve(const char* module, const char* name));

void s152r2FreeInstance(s152r2Instance* instance);

#endif /* s152r2_H */

