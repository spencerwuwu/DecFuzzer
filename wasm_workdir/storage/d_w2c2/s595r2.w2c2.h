#ifndef s595r2_H
#define s595r2_H

#include "w2c2_base.h"

typedef struct s595r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s595r2Instance;

void f0(s595r2Instance*);

void f1(s595r2Instance*);

U32 f2(s595r2Instance*);

void f3(s595r2Instance*,U32);

U32 f4(s595r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s595r2Instance*,U32,U32,U32,U32,U32);

void f6(s595r2Instance*,U32);

void f7(s595r2Instance*,U32,U32,U32);

void f8(s595r2Instance*,U32,U32,U32);

void s595r2____wasm_call_ctors(s595r2Instance*i);

void s595r2____wasm_apply_data_relocs(s595r2Instance*i);

U32 s595r2_func_1(s595r2Instance*i);

void s595r2_call_cb(s595r2Instance*i,U32 l0);

void s595r2Instantiate(s595r2Instance* instance, void* resolve(const char* module, const char* name));

void s595r2FreeInstance(s595r2Instance* instance);

#endif /* s595r2_H */

