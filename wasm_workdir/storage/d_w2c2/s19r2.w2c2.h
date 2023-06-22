#ifndef s19r2_H
#define s19r2_H

#include "w2c2_base.h"

typedef struct s19r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s19r2Instance;

void f0(s19r2Instance*);

void f1(s19r2Instance*);

U32 f2(s19r2Instance*);

void f3(s19r2Instance*,U32);

U32 f4(s19r2Instance*,U32,U32,U32,U32);

void f5(s19r2Instance*,U32,U32,U32,U32,U32);

void f6(s19r2Instance*,U32);

void f7(s19r2Instance*,U32,U32,U32);

void f8(s19r2Instance*,U32,U32,U32);

void s19r2____wasm_call_ctors(s19r2Instance*i);

void s19r2____wasm_apply_data_relocs(s19r2Instance*i);

U32 s19r2_func_1(s19r2Instance*i);

void s19r2_call_cb(s19r2Instance*i,U32 l0);

void s19r2Instantiate(s19r2Instance* instance, void* resolve(const char* module, const char* name));

void s19r2FreeInstance(s19r2Instance* instance);

#endif /* s19r2_H */

