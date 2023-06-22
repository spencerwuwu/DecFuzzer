#ifndef s931r2_H
#define s931r2_H

#include "w2c2_base.h"

typedef struct s931r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s931r2Instance;

void f0(s931r2Instance*);

void f1(s931r2Instance*);

U32 f2(s931r2Instance*);

void f3(s931r2Instance*,U32);

U32 f4(s931r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s931r2Instance*,U32,U32,U32,U32,U32);

void f6(s931r2Instance*,U32);

void f7(s931r2Instance*,U32,U32,U32);

void f8(s931r2Instance*,U32,U32,U32);

void s931r2____wasm_call_ctors(s931r2Instance*i);

void s931r2____wasm_apply_data_relocs(s931r2Instance*i);

U32 s931r2_func_1(s931r2Instance*i);

void s931r2_call_cb(s931r2Instance*i,U32 l0);

void s931r2Instantiate(s931r2Instance* instance, void* resolve(const char* module, const char* name));

void s931r2FreeInstance(s931r2Instance* instance);

#endif /* s931r2_H */

