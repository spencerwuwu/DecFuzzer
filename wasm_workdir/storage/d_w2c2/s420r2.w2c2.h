#ifndef s420r2_H
#define s420r2_H

#include "w2c2_base.h"

typedef struct s420r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s420r2Instance;

void f0(s420r2Instance*);

void f1(s420r2Instance*);

U32 f2(s420r2Instance*);

void f3(s420r2Instance*,U32);

U32 f4(s420r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s420r2Instance*,U32,U32,U32,U32,U32);

void f6(s420r2Instance*,U32);

void f7(s420r2Instance*,U32,U32,U32);

void f8(s420r2Instance*,U32,U32,U32);

void s420r2____wasm_call_ctors(s420r2Instance*i);

void s420r2____wasm_apply_data_relocs(s420r2Instance*i);

U32 s420r2_func_1(s420r2Instance*i);

void s420r2_call_cb(s420r2Instance*i,U32 l0);

void s420r2Instantiate(s420r2Instance* instance, void* resolve(const char* module, const char* name));

void s420r2FreeInstance(s420r2Instance* instance);

#endif /* s420r2_H */

