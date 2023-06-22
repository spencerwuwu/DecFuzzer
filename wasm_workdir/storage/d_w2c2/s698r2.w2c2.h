#ifndef s698r2_H
#define s698r2_H

#include "w2c2_base.h"

typedef struct s698r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s698r2Instance;

void f0(s698r2Instance*);

void f1(s698r2Instance*);

U32 f2(s698r2Instance*);

void f3(s698r2Instance*,U32);

U32 f4(s698r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s698r2Instance*,U32,U32,U32,U32,U32);

void f6(s698r2Instance*,U32);

void f7(s698r2Instance*,U32,U32,U32);

void f8(s698r2Instance*,U32,U32,U32);

void s698r2____wasm_call_ctors(s698r2Instance*i);

void s698r2____wasm_apply_data_relocs(s698r2Instance*i);

U32 s698r2_func_1(s698r2Instance*i);

void s698r2_call_cb(s698r2Instance*i,U32 l0);

void s698r2Instantiate(s698r2Instance* instance, void* resolve(const char* module, const char* name));

void s698r2FreeInstance(s698r2Instance* instance);

#endif /* s698r2_H */

