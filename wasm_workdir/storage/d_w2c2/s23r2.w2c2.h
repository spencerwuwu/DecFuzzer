#ifndef s23r2_H
#define s23r2_H

#include "w2c2_base.h"

typedef struct s23r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s23r2Instance;

void f0(s23r2Instance*);

void f1(s23r2Instance*);

U32 f2(s23r2Instance*);

void f3(s23r2Instance*,U32);

U32 f4(s23r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s23r2Instance*,U32,U32,U32,U32,U32);

void f6(s23r2Instance*,U32);

void f7(s23r2Instance*,U32,U32,U32);

void f8(s23r2Instance*,U32,U32,U32);

void s23r2____wasm_call_ctors(s23r2Instance*i);

void s23r2____wasm_apply_data_relocs(s23r2Instance*i);

U32 s23r2_func_1(s23r2Instance*i);

void s23r2_call_cb(s23r2Instance*i,U32 l0);

void s23r2Instantiate(s23r2Instance* instance, void* resolve(const char* module, const char* name));

void s23r2FreeInstance(s23r2Instance* instance);

#endif /* s23r2_H */

