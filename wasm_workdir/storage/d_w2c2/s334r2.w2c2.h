#ifndef s334r2_H
#define s334r2_H

#include "w2c2_base.h"

typedef struct s334r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s334r2Instance;

void f0(s334r2Instance*);

void f1(s334r2Instance*);

U32 f2(s334r2Instance*);

void f3(s334r2Instance*,U32);

U32 f4(s334r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s334r2Instance*,U32,U32,U32,U32,U32);

void f6(s334r2Instance*,U32);

void f7(s334r2Instance*,U32,U32,U32);

void f8(s334r2Instance*,U32,U32,U32);

void s334r2____wasm_call_ctors(s334r2Instance*i);

void s334r2____wasm_apply_data_relocs(s334r2Instance*i);

U32 s334r2_func_1(s334r2Instance*i);

void s334r2_call_cb(s334r2Instance*i,U32 l0);

void s334r2Instantiate(s334r2Instance* instance, void* resolve(const char* module, const char* name));

void s334r2FreeInstance(s334r2Instance* instance);

#endif /* s334r2_H */

