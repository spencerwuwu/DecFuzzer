#ifndef s262r2_H
#define s262r2_H

#include "w2c2_base.h"

typedef struct s262r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s262r2Instance;

void f0(s262r2Instance*);

void f1(s262r2Instance*);

U32 f2(s262r2Instance*);

void f3(s262r2Instance*,U32);

U32 f4(s262r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s262r2Instance*,U32,U32,U32,U32,U32);

void f6(s262r2Instance*,U32);

void f7(s262r2Instance*,U32,U32,U32);

void f8(s262r2Instance*,U32,U32,U32);

void s262r2____wasm_call_ctors(s262r2Instance*i);

void s262r2____wasm_apply_data_relocs(s262r2Instance*i);

U32 s262r2_func_1(s262r2Instance*i);

void s262r2_call_cb(s262r2Instance*i,U32 l0);

void s262r2Instantiate(s262r2Instance* instance, void* resolve(const char* module, const char* name));

void s262r2FreeInstance(s262r2Instance* instance);

#endif /* s262r2_H */

