#ifndef s18r2_H
#define s18r2_H

#include "w2c2_base.h"

typedef struct s18r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s18r2Instance;

void f0(s18r2Instance*);

void f1(s18r2Instance*);

U32 f2(s18r2Instance*);

void f3(s18r2Instance*,U32);

U32 f4(s18r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s18r2Instance*,U32,U32,U32,U32,U32);

void f6(s18r2Instance*,U32);

void f7(s18r2Instance*,U32,U32,U32);

void f8(s18r2Instance*,U32,U32,U32);

void s18r2____wasm_call_ctors(s18r2Instance*i);

void s18r2____wasm_apply_data_relocs(s18r2Instance*i);

U32 s18r2_func_1(s18r2Instance*i);

void s18r2_call_cb(s18r2Instance*i,U32 l0);

void s18r2Instantiate(s18r2Instance* instance, void* resolve(const char* module, const char* name));

void s18r2FreeInstance(s18r2Instance* instance);

#endif /* s18r2_H */

