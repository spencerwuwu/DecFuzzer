#ifndef s350r2_H
#define s350r2_H

#include "w2c2_base.h"

typedef struct s350r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s350r2Instance;

void f0(s350r2Instance*);

void f1(s350r2Instance*);

U32 f2(s350r2Instance*);

void f3(s350r2Instance*,U32);

U32 f4(s350r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s350r2Instance*,U32,U32,U32,U32,U32);

void f6(s350r2Instance*,U32);

void f7(s350r2Instance*,U32,U32,U32);

void f8(s350r2Instance*,U32,U32,U32);

void s350r2____wasm_call_ctors(s350r2Instance*i);

void s350r2____wasm_apply_data_relocs(s350r2Instance*i);

U32 s350r2_func_1(s350r2Instance*i);

void s350r2_call_cb(s350r2Instance*i,U32 l0);

void s350r2Instantiate(s350r2Instance* instance, void* resolve(const char* module, const char* name));

void s350r2FreeInstance(s350r2Instance* instance);

#endif /* s350r2_H */

