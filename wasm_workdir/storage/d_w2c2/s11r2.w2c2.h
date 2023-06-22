#ifndef s11r2_H
#define s11r2_H

#include "w2c2_base.h"

typedef struct s11r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s11r2Instance;

void f0(s11r2Instance*);

void f1(s11r2Instance*);

U32 f2(s11r2Instance*);

void f3(s11r2Instance*,U32);

U32 f4(s11r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s11r2Instance*,U32,U32,U32,U32,U32);

void f6(s11r2Instance*,U32);

void f7(s11r2Instance*,U32,U32,U32);

void f8(s11r2Instance*,U32,U32,U32);

void s11r2____wasm_call_ctors(s11r2Instance*i);

void s11r2____wasm_apply_data_relocs(s11r2Instance*i);

U32 s11r2_func_1(s11r2Instance*i);

void s11r2_call_cb(s11r2Instance*i,U32 l0);

void s11r2Instantiate(s11r2Instance* instance, void* resolve(const char* module, const char* name));

void s11r2FreeInstance(s11r2Instance* instance);

#endif /* s11r2_H */

