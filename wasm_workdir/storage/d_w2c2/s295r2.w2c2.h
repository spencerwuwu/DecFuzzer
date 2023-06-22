#ifndef s295r2_H
#define s295r2_H

#include "w2c2_base.h"

typedef struct s295r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s295r2Instance;

void f0(s295r2Instance*);

void f1(s295r2Instance*);

U32 f2(s295r2Instance*);

void f3(s295r2Instance*,U32);

U32 f4(s295r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s295r2Instance*,U32,U32,U32,U32,U32);

void f6(s295r2Instance*,U32);

void f7(s295r2Instance*,U32,U32,U32);

void f8(s295r2Instance*,U32,U32,U32);

void s295r2____wasm_call_ctors(s295r2Instance*i);

void s295r2____wasm_apply_data_relocs(s295r2Instance*i);

U32 s295r2_func_1(s295r2Instance*i);

void s295r2_call_cb(s295r2Instance*i,U32 l0);

void s295r2Instantiate(s295r2Instance* instance, void* resolve(const char* module, const char* name));

void s295r2FreeInstance(s295r2Instance* instance);

#endif /* s295r2_H */

