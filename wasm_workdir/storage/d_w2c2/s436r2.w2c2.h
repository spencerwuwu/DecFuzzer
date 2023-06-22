#ifndef s436r2_H
#define s436r2_H

#include "w2c2_base.h"

typedef struct s436r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s436r2Instance;

void f0(s436r2Instance*);

void f1(s436r2Instance*);

U32 f2(s436r2Instance*);

void f3(s436r2Instance*,U32);

U32 f4(s436r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s436r2Instance*,U32,U32,U32,U32,U32);

void f6(s436r2Instance*,U32);

void f7(s436r2Instance*,U32,U32,U32);

void f8(s436r2Instance*,U32,U32,U32);

void s436r2____wasm_call_ctors(s436r2Instance*i);

void s436r2____wasm_apply_data_relocs(s436r2Instance*i);

U32 s436r2_func_1(s436r2Instance*i);

void s436r2_call_cb(s436r2Instance*i,U32 l0);

void s436r2Instantiate(s436r2Instance* instance, void* resolve(const char* module, const char* name));

void s436r2FreeInstance(s436r2Instance* instance);

#endif /* s436r2_H */

