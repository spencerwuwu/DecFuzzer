#ifndef s401r2_H
#define s401r2_H

#include "w2c2_base.h"

typedef struct s401r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s401r2Instance;

void f0(s401r2Instance*);

void f1(s401r2Instance*);

U32 f2(s401r2Instance*);

void f3(s401r2Instance*,U32);

U32 f4(s401r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s401r2Instance*,U32,U32,U32,U32,U32);

void f6(s401r2Instance*,U32);

void f7(s401r2Instance*,U32,U32,U32);

void f8(s401r2Instance*,U32,U32,U32);

void s401r2____wasm_call_ctors(s401r2Instance*i);

void s401r2____wasm_apply_data_relocs(s401r2Instance*i);

U32 s401r2_func_1(s401r2Instance*i);

void s401r2_call_cb(s401r2Instance*i,U32 l0);

void s401r2Instantiate(s401r2Instance* instance, void* resolve(const char* module, const char* name));

void s401r2FreeInstance(s401r2Instance* instance);

#endif /* s401r2_H */

