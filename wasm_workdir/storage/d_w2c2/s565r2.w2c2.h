#ifndef s565r2_H
#define s565r2_H

#include "w2c2_base.h"

typedef struct s565r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s565r2Instance;

void f0(s565r2Instance*);

void f1(s565r2Instance*);

U32 f2(s565r2Instance*);

void f3(s565r2Instance*,U32);

U32 f4(s565r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s565r2Instance*,U32,U32,U32,U32,U32);

void f6(s565r2Instance*,U32);

void f7(s565r2Instance*,U32,U32,U32);

void f8(s565r2Instance*,U32,U32,U32);

void s565r2____wasm_call_ctors(s565r2Instance*i);

void s565r2____wasm_apply_data_relocs(s565r2Instance*i);

U32 s565r2_func_1(s565r2Instance*i);

void s565r2_call_cb(s565r2Instance*i,U32 l0);

void s565r2Instantiate(s565r2Instance* instance, void* resolve(const char* module, const char* name));

void s565r2FreeInstance(s565r2Instance* instance);

#endif /* s565r2_H */

