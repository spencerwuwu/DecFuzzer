#ifndef s305r2_H
#define s305r2_H

#include "w2c2_base.h"

typedef struct s305r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s305r2Instance;

void f0(s305r2Instance*);

void f1(s305r2Instance*);

U32 f2(s305r2Instance*);

void f3(s305r2Instance*,U32);

U32 f4(s305r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s305r2Instance*,U32,U32,U32,U32,U32);

void f6(s305r2Instance*,U32);

void f7(s305r2Instance*,U32,U32,U32);

void f8(s305r2Instance*,U32,U32,U32);

void s305r2____wasm_call_ctors(s305r2Instance*i);

void s305r2____wasm_apply_data_relocs(s305r2Instance*i);

U32 s305r2_func_1(s305r2Instance*i);

void s305r2_call_cb(s305r2Instance*i,U32 l0);

void s305r2Instantiate(s305r2Instance* instance, void* resolve(const char* module, const char* name));

void s305r2FreeInstance(s305r2Instance* instance);

#endif /* s305r2_H */

