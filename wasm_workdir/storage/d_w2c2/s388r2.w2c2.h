#ifndef s388r2_H
#define s388r2_H

#include "w2c2_base.h"

typedef struct s388r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s388r2Instance;

void f0(s388r2Instance*);

void f1(s388r2Instance*);

U32 f2(s388r2Instance*);

void f3(s388r2Instance*,U32);

U32 f4(s388r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s388r2Instance*,U32,U32,U32,U32,U32);

void f6(s388r2Instance*,U32);

void f7(s388r2Instance*,U32,U32,U32);

void f8(s388r2Instance*,U32,U32,U32);

void s388r2____wasm_call_ctors(s388r2Instance*i);

void s388r2____wasm_apply_data_relocs(s388r2Instance*i);

U32 s388r2_func_1(s388r2Instance*i);

void s388r2_call_cb(s388r2Instance*i,U32 l0);

void s388r2Instantiate(s388r2Instance* instance, void* resolve(const char* module, const char* name));

void s388r2FreeInstance(s388r2Instance* instance);

#endif /* s388r2_H */

