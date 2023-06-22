#ifndef s867r2_H
#define s867r2_H

#include "w2c2_base.h"

typedef struct s867r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s867r2Instance;

void f0(s867r2Instance*);

void f1(s867r2Instance*);

U32 f2(s867r2Instance*);

void f3(s867r2Instance*,U32);

U32 f4(s867r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s867r2Instance*,U32,U32,U32,U32,U32);

void f6(s867r2Instance*,U32);

void f7(s867r2Instance*,U32,U32,U32);

void f8(s867r2Instance*,U32,U32,U32);

void s867r2____wasm_call_ctors(s867r2Instance*i);

void s867r2____wasm_apply_data_relocs(s867r2Instance*i);

U32 s867r2_func_1(s867r2Instance*i);

void s867r2_call_cb(s867r2Instance*i,U32 l0);

void s867r2Instantiate(s867r2Instance* instance, void* resolve(const char* module, const char* name));

void s867r2FreeInstance(s867r2Instance* instance);

#endif /* s867r2_H */

