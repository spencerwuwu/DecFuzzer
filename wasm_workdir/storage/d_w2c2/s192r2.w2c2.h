#ifndef s192r2_H
#define s192r2_H

#include "w2c2_base.h"

typedef struct s192r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s192r2Instance;

void f0(s192r2Instance*);

void f1(s192r2Instance*);

U32 f2(s192r2Instance*);

void f3(s192r2Instance*,U32);

U32 f4(s192r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s192r2Instance*,U32,U32,U32,U32,U32);

void f6(s192r2Instance*,U32);

void f7(s192r2Instance*,U32,U32,U32);

void f8(s192r2Instance*,U32,U32,U32);

void s192r2____wasm_call_ctors(s192r2Instance*i);

void s192r2____wasm_apply_data_relocs(s192r2Instance*i);

U32 s192r2_func_1(s192r2Instance*i);

void s192r2_call_cb(s192r2Instance*i,U32 l0);

void s192r2Instantiate(s192r2Instance* instance, void* resolve(const char* module, const char* name));

void s192r2FreeInstance(s192r2Instance* instance);

#endif /* s192r2_H */

