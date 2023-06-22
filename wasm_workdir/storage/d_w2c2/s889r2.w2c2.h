#ifndef s889r2_H
#define s889r2_H

#include "w2c2_base.h"

typedef struct s889r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s889r2Instance;

void f0(s889r2Instance*);

void f1(s889r2Instance*);

U32 f2(s889r2Instance*);

void f3(s889r2Instance*,U32);

U32 f4(s889r2Instance*,U32,U32,U32,U32,U32);

void f5(s889r2Instance*,U32,U32,U32,U32,U32);

void f6(s889r2Instance*,U32);

void f7(s889r2Instance*,U32,U32,U32);

void f8(s889r2Instance*,U32,U32,U32);

void s889r2____wasm_call_ctors(s889r2Instance*i);

void s889r2____wasm_apply_data_relocs(s889r2Instance*i);

U32 s889r2_func_1(s889r2Instance*i);

void s889r2_call_cb(s889r2Instance*i,U32 l0);

void s889r2Instantiate(s889r2Instance* instance, void* resolve(const char* module, const char* name));

void s889r2FreeInstance(s889r2Instance* instance);

#endif /* s889r2_H */

