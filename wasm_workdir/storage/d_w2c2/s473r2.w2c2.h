#ifndef s473r2_H
#define s473r2_H

#include "w2c2_base.h"

typedef struct s473r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s473r2Instance;

void f0(s473r2Instance*);

void f1(s473r2Instance*);

U32 f2(s473r2Instance*);

void f3(s473r2Instance*,U32);

U32 f4(s473r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s473r2Instance*,U32,U32,U32,U32,U32);

void f6(s473r2Instance*,U32);

void f7(s473r2Instance*,U32,U32,U32);

void f8(s473r2Instance*,U32,U32,U32);

void s473r2____wasm_call_ctors(s473r2Instance*i);

void s473r2____wasm_apply_data_relocs(s473r2Instance*i);

U32 s473r2_func_1(s473r2Instance*i);

void s473r2_call_cb(s473r2Instance*i,U32 l0);

void s473r2Instantiate(s473r2Instance* instance, void* resolve(const char* module, const char* name));

void s473r2FreeInstance(s473r2Instance* instance);

#endif /* s473r2_H */

