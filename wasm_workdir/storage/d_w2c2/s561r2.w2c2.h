#ifndef s561r2_H
#define s561r2_H

#include "w2c2_base.h"

typedef struct s561r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s561r2Instance;

void f0(s561r2Instance*);

void f1(s561r2Instance*);

U32 f2(s561r2Instance*);

void f3(s561r2Instance*,U32);

U32 f4(s561r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s561r2Instance*,U32,U32,U32,U32,U32);

void f6(s561r2Instance*,U32);

void f7(s561r2Instance*,U32,U32,U32);

void f8(s561r2Instance*,U32,U32,U32);

void s561r2____wasm_call_ctors(s561r2Instance*i);

void s561r2____wasm_apply_data_relocs(s561r2Instance*i);

U32 s561r2_func_1(s561r2Instance*i);

void s561r2_call_cb(s561r2Instance*i,U32 l0);

void s561r2Instantiate(s561r2Instance* instance, void* resolve(const char* module, const char* name));

void s561r2FreeInstance(s561r2Instance* instance);

#endif /* s561r2_H */

