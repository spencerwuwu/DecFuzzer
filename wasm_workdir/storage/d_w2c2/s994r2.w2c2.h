#ifndef s994r2_H
#define s994r2_H

#include "w2c2_base.h"

typedef struct s994r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s994r2Instance;

void f0(s994r2Instance*);

void f1(s994r2Instance*);

U32 f2(s994r2Instance*);

void f3(s994r2Instance*,U32);

U32 f4(s994r2Instance*,U32,U32,U32,U32);

void f5(s994r2Instance*,U32,U32,U32,U32,U32);

void f6(s994r2Instance*,U32);

void f7(s994r2Instance*,U32,U32,U32);

void f8(s994r2Instance*,U32,U32,U32);

void s994r2____wasm_call_ctors(s994r2Instance*i);

void s994r2____wasm_apply_data_relocs(s994r2Instance*i);

U32 s994r2_func_1(s994r2Instance*i);

void s994r2_call_cb(s994r2Instance*i,U32 l0);

void s994r2Instantiate(s994r2Instance* instance, void* resolve(const char* module, const char* name));

void s994r2FreeInstance(s994r2Instance* instance);

#endif /* s994r2_H */

