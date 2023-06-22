#ifndef s418r2_H
#define s418r2_H

#include "w2c2_base.h"

typedef struct s418r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s418r2Instance;

void f0(s418r2Instance*);

void f1(s418r2Instance*);

U32 f2(s418r2Instance*);

void f3(s418r2Instance*,U32);

U32 f4(s418r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s418r2Instance*,U32,U32,U32,U32,U32);

void f6(s418r2Instance*,U32);

void f7(s418r2Instance*,U32,U32,U32);

void f8(s418r2Instance*,U32,U32,U32);

void s418r2____wasm_call_ctors(s418r2Instance*i);

void s418r2____wasm_apply_data_relocs(s418r2Instance*i);

U32 s418r2_func_1(s418r2Instance*i);

void s418r2_call_cb(s418r2Instance*i,U32 l0);

void s418r2Instantiate(s418r2Instance* instance, void* resolve(const char* module, const char* name));

void s418r2FreeInstance(s418r2Instance* instance);

#endif /* s418r2_H */

