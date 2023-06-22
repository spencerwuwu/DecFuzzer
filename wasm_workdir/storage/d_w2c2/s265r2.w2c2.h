#ifndef s265r2_H
#define s265r2_H

#include "w2c2_base.h"

typedef struct s265r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s265r2Instance;

void f0(s265r2Instance*);

void f1(s265r2Instance*);

U32 f2(s265r2Instance*);

void f3(s265r2Instance*,U32);

U32 f4(s265r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s265r2Instance*,U32,U32,U32,U32,U32);

void f6(s265r2Instance*,U32);

void f7(s265r2Instance*,U32,U32,U32);

void f8(s265r2Instance*,U32,U32,U32);

void s265r2____wasm_call_ctors(s265r2Instance*i);

void s265r2____wasm_apply_data_relocs(s265r2Instance*i);

U32 s265r2_func_1(s265r2Instance*i);

void s265r2_call_cb(s265r2Instance*i,U32 l0);

void s265r2Instantiate(s265r2Instance* instance, void* resolve(const char* module, const char* name));

void s265r2FreeInstance(s265r2Instance* instance);

#endif /* s265r2_H */

