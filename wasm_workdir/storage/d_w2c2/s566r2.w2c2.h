#ifndef s566r2_H
#define s566r2_H

#include "w2c2_base.h"

typedef struct s566r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s566r2Instance;

void f0(s566r2Instance*);

void f1(s566r2Instance*);

U32 f2(s566r2Instance*);

void f3(s566r2Instance*,U32);

U32 f4(s566r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s566r2Instance*,U32,U32,U32,U32,U32);

void f6(s566r2Instance*,U32);

void f7(s566r2Instance*,U32,U32,U32);

void f8(s566r2Instance*,U32,U32,U32);

void s566r2____wasm_call_ctors(s566r2Instance*i);

void s566r2____wasm_apply_data_relocs(s566r2Instance*i);

U32 s566r2_func_1(s566r2Instance*i);

void s566r2_call_cb(s566r2Instance*i,U32 l0);

void s566r2Instantiate(s566r2Instance* instance, void* resolve(const char* module, const char* name));

void s566r2FreeInstance(s566r2Instance* instance);

#endif /* s566r2_H */

