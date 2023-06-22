#ifndef s66r2_H
#define s66r2_H

#include "w2c2_base.h"

typedef struct s66r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s66r2Instance;

void f0(s66r2Instance*);

void f1(s66r2Instance*);

U32 f2(s66r2Instance*);

void f3(s66r2Instance*,U32);

U32 f4(s66r2Instance*,U32,U32,U32);

void f5(s66r2Instance*,U32,U32,U32,U32,U32);

void f6(s66r2Instance*,U32);

void f7(s66r2Instance*,U32,U32,U32);

void f8(s66r2Instance*,U32,U32,U32);

void s66r2____wasm_call_ctors(s66r2Instance*i);

void s66r2____wasm_apply_data_relocs(s66r2Instance*i);

U32 s66r2_func_1(s66r2Instance*i);

void s66r2_call_cb(s66r2Instance*i,U32 l0);

void s66r2Instantiate(s66r2Instance* instance, void* resolve(const char* module, const char* name));

void s66r2FreeInstance(s66r2Instance* instance);

#endif /* s66r2_H */

