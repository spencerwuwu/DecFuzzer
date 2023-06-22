#ifndef s639r2_H
#define s639r2_H

#include "w2c2_base.h"

typedef struct s639r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s639r2Instance;

void f0(s639r2Instance*);

void f1(s639r2Instance*);

U32 f2(s639r2Instance*);

void f3(s639r2Instance*,U32);

U32 f4(s639r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s639r2Instance*,U32,U32,U32,U32,U32);

void f6(s639r2Instance*,U32);

void f7(s639r2Instance*,U32,U32,U32);

void f8(s639r2Instance*,U32,U32,U32);

void s639r2____wasm_call_ctors(s639r2Instance*i);

void s639r2____wasm_apply_data_relocs(s639r2Instance*i);

U32 s639r2_func_1(s639r2Instance*i);

void s639r2_call_cb(s639r2Instance*i,U32 l0);

void s639r2Instantiate(s639r2Instance* instance, void* resolve(const char* module, const char* name));

void s639r2FreeInstance(s639r2Instance* instance);

#endif /* s639r2_H */

