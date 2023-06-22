#ifndef s26r2_H
#define s26r2_H

#include "w2c2_base.h"

typedef struct s26r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s26r2Instance;

void f0(s26r2Instance*);

void f1(s26r2Instance*);

U32 f2(s26r2Instance*);

void f3(s26r2Instance*,U32);

U32 f4(s26r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s26r2Instance*,U32,U32,U32,U32,U32);

void f6(s26r2Instance*,U32);

void f7(s26r2Instance*,U32,U32,U32);

void f8(s26r2Instance*,U32,U32,U32);

void s26r2____wasm_call_ctors(s26r2Instance*i);

void s26r2____wasm_apply_data_relocs(s26r2Instance*i);

U32 s26r2_func_1(s26r2Instance*i);

void s26r2_call_cb(s26r2Instance*i,U32 l0);

void s26r2Instantiate(s26r2Instance* instance, void* resolve(const char* module, const char* name));

void s26r2FreeInstance(s26r2Instance* instance);

#endif /* s26r2_H */

