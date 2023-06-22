#ifndef s538r2_H
#define s538r2_H

#include "w2c2_base.h"

typedef struct s538r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s538r2Instance;

void f0(s538r2Instance*);

void f1(s538r2Instance*);

U32 f2(s538r2Instance*);

void f3(s538r2Instance*,U32);

U32 f4(s538r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s538r2Instance*,U32,U32,U32,U32,U32);

void f6(s538r2Instance*,U32);

void f7(s538r2Instance*,U32,U32,U32);

void f8(s538r2Instance*,U32,U32,U32);

void s538r2____wasm_call_ctors(s538r2Instance*i);

void s538r2____wasm_apply_data_relocs(s538r2Instance*i);

U32 s538r2_func_1(s538r2Instance*i);

void s538r2_call_cb(s538r2Instance*i,U32 l0);

void s538r2Instantiate(s538r2Instance* instance, void* resolve(const char* module, const char* name));

void s538r2FreeInstance(s538r2Instance* instance);

#endif /* s538r2_H */

