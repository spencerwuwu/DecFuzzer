#ifndef s111r2_H
#define s111r2_H

#include "w2c2_base.h"

typedef struct s111r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s111r2Instance;

void f0(s111r2Instance*);

void f1(s111r2Instance*);

U32 f2(s111r2Instance*);

void f3(s111r2Instance*,U32);

U32 f4(s111r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s111r2Instance*,U32,U32,U32,U32,U32);

void f6(s111r2Instance*,U32);

void f7(s111r2Instance*,U32,U32,U32);

void f8(s111r2Instance*,U32,U32,U32);

void s111r2____wasm_call_ctors(s111r2Instance*i);

void s111r2____wasm_apply_data_relocs(s111r2Instance*i);

U32 s111r2_func_1(s111r2Instance*i);

void s111r2_call_cb(s111r2Instance*i,U32 l0);

void s111r2Instantiate(s111r2Instance* instance, void* resolve(const char* module, const char* name));

void s111r2FreeInstance(s111r2Instance* instance);

#endif /* s111r2_H */

