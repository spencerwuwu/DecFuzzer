#ifndef s588r2_H
#define s588r2_H

#include "w2c2_base.h"

typedef struct s588r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s588r2Instance;

void f0(s588r2Instance*);

void f1(s588r2Instance*);

U32 f2(s588r2Instance*);

void f3(s588r2Instance*,U32);

U32 f4(s588r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s588r2Instance*,U32,U32,U32,U32,U32);

void f6(s588r2Instance*,U32);

void f7(s588r2Instance*,U32,U32,U32);

void f8(s588r2Instance*,U32,U32,U32);

void s588r2____wasm_call_ctors(s588r2Instance*i);

void s588r2____wasm_apply_data_relocs(s588r2Instance*i);

U32 s588r2_func_1(s588r2Instance*i);

void s588r2_call_cb(s588r2Instance*i,U32 l0);

void s588r2Instantiate(s588r2Instance* instance, void* resolve(const char* module, const char* name));

void s588r2FreeInstance(s588r2Instance* instance);

#endif /* s588r2_H */

