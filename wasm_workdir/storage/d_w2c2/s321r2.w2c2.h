#ifndef s321r2_H
#define s321r2_H

#include "w2c2_base.h"

typedef struct s321r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s321r2Instance;

void f0(s321r2Instance*);

void f1(s321r2Instance*);

U32 f2(s321r2Instance*);

void f3(s321r2Instance*,U32);

U32 f4(s321r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s321r2Instance*,U32,U32,U32,U32,U32);

void f6(s321r2Instance*,U32);

void f7(s321r2Instance*,U32,U32,U32);

void f8(s321r2Instance*,U32,U32,U32);

void s321r2____wasm_call_ctors(s321r2Instance*i);

void s321r2____wasm_apply_data_relocs(s321r2Instance*i);

U32 s321r2_func_1(s321r2Instance*i);

void s321r2_call_cb(s321r2Instance*i,U32 l0);

void s321r2Instantiate(s321r2Instance* instance, void* resolve(const char* module, const char* name));

void s321r2FreeInstance(s321r2Instance* instance);

#endif /* s321r2_H */

