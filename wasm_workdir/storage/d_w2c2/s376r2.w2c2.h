#ifndef s376r2_H
#define s376r2_H

#include "w2c2_base.h"

typedef struct s376r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s376r2Instance;

void f0(s376r2Instance*);

void f1(s376r2Instance*);

U32 f2(s376r2Instance*);

void f3(s376r2Instance*,U32);

U32 f4(s376r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s376r2Instance*,U32,U32,U32,U32,U32);

void f6(s376r2Instance*,U32);

void f7(s376r2Instance*,U32,U32,U32);

void f8(s376r2Instance*,U32,U32,U32);

void s376r2____wasm_call_ctors(s376r2Instance*i);

void s376r2____wasm_apply_data_relocs(s376r2Instance*i);

U32 s376r2_func_1(s376r2Instance*i);

void s376r2_call_cb(s376r2Instance*i,U32 l0);

void s376r2Instantiate(s376r2Instance* instance, void* resolve(const char* module, const char* name));

void s376r2FreeInstance(s376r2Instance* instance);

#endif /* s376r2_H */

