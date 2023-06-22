#ifndef s90r2_H
#define s90r2_H

#include "w2c2_base.h"

typedef struct s90r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s90r2Instance;

void f0(s90r2Instance*);

void f1(s90r2Instance*);

U32 f2(s90r2Instance*);

void f3(s90r2Instance*,U32);

U32 f4(s90r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s90r2Instance*,U32,U32,U32,U32,U32);

void f6(s90r2Instance*,U32);

void f7(s90r2Instance*,U32,U32,U32);

void f8(s90r2Instance*,U32,U32,U32);

void s90r2____wasm_call_ctors(s90r2Instance*i);

void s90r2____wasm_apply_data_relocs(s90r2Instance*i);

U32 s90r2_func_1(s90r2Instance*i);

void s90r2_call_cb(s90r2Instance*i,U32 l0);

void s90r2Instantiate(s90r2Instance* instance, void* resolve(const char* module, const char* name));

void s90r2FreeInstance(s90r2Instance* instance);

#endif /* s90r2_H */

