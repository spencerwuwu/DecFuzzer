#ifndef s508r2_H
#define s508r2_H

#include "w2c2_base.h"

typedef struct s508r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s508r2Instance;

void f0(s508r2Instance*);

void f1(s508r2Instance*);

U32 f2(s508r2Instance*);

void f3(s508r2Instance*,U32);

U32 f4(s508r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s508r2Instance*,U32,U32,U32,U32,U32);

void f6(s508r2Instance*,U32);

void f7(s508r2Instance*,U32,U32,U32);

void f8(s508r2Instance*,U32,U32,U32);

void s508r2____wasm_call_ctors(s508r2Instance*i);

void s508r2____wasm_apply_data_relocs(s508r2Instance*i);

U32 s508r2_func_1(s508r2Instance*i);

void s508r2_call_cb(s508r2Instance*i,U32 l0);

void s508r2Instantiate(s508r2Instance* instance, void* resolve(const char* module, const char* name));

void s508r2FreeInstance(s508r2Instance* instance);

#endif /* s508r2_H */

