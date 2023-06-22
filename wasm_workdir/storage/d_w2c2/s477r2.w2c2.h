#ifndef s477r2_H
#define s477r2_H

#include "w2c2_base.h"

typedef struct s477r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s477r2Instance;

void f0(s477r2Instance*);

void f1(s477r2Instance*);

U32 f2(s477r2Instance*);

void f3(s477r2Instance*,U32);

U32 f4(s477r2Instance*,U32,U32,U32,U32);

void f5(s477r2Instance*,U32,U32,U32,U32,U32);

void f6(s477r2Instance*,U32);

void f7(s477r2Instance*,U32,U32,U32);

void f8(s477r2Instance*,U32,U32,U32);

void s477r2____wasm_call_ctors(s477r2Instance*i);

void s477r2____wasm_apply_data_relocs(s477r2Instance*i);

U32 s477r2_func_1(s477r2Instance*i);

void s477r2_call_cb(s477r2Instance*i,U32 l0);

void s477r2Instantiate(s477r2Instance* instance, void* resolve(const char* module, const char* name));

void s477r2FreeInstance(s477r2Instance* instance);

#endif /* s477r2_H */

