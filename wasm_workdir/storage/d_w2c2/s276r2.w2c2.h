#ifndef s276r2_H
#define s276r2_H

#include "w2c2_base.h"

typedef struct s276r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s276r2Instance;

void f0(s276r2Instance*);

void f1(s276r2Instance*);

U32 f2(s276r2Instance*);

void f3(s276r2Instance*,U32);

U32 f4(s276r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s276r2Instance*,U32,U32,U32,U32,U32);

void f6(s276r2Instance*,U32);

void f7(s276r2Instance*,U32,U32,U32);

void f8(s276r2Instance*,U32,U32,U32);

void s276r2____wasm_call_ctors(s276r2Instance*i);

void s276r2____wasm_apply_data_relocs(s276r2Instance*i);

U32 s276r2_func_1(s276r2Instance*i);

void s276r2_call_cb(s276r2Instance*i,U32 l0);

void s276r2Instantiate(s276r2Instance* instance, void* resolve(const char* module, const char* name));

void s276r2FreeInstance(s276r2Instance* instance);

#endif /* s276r2_H */

