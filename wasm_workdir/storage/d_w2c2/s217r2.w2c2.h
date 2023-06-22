#ifndef s217r2_H
#define s217r2_H

#include "w2c2_base.h"

typedef struct s217r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s217r2Instance;

void f0(s217r2Instance*);

void f1(s217r2Instance*);

U32 f2(s217r2Instance*);

void f3(s217r2Instance*,U32);

U32 f4(s217r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s217r2Instance*,U32,U32,U32,U32,U32);

void f6(s217r2Instance*,U32);

void f7(s217r2Instance*,U32,U32,U32);

void f8(s217r2Instance*,U32,U32,U32);

void s217r2____wasm_call_ctors(s217r2Instance*i);

void s217r2____wasm_apply_data_relocs(s217r2Instance*i);

U32 s217r2_func_1(s217r2Instance*i);

void s217r2_call_cb(s217r2Instance*i,U32 l0);

void s217r2Instantiate(s217r2Instance* instance, void* resolve(const char* module, const char* name));

void s217r2FreeInstance(s217r2Instance* instance);

#endif /* s217r2_H */

