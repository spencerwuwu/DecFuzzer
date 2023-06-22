#ifndef s844r2_H
#define s844r2_H

#include "w2c2_base.h"

typedef struct s844r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s844r2Instance;

void f0(s844r2Instance*);

void f1(s844r2Instance*);

U32 f2(s844r2Instance*);

void f3(s844r2Instance*,U32);

U32 f4(s844r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s844r2Instance*,U32,U32,U32,U32,U32);

void f6(s844r2Instance*,U32);

void f7(s844r2Instance*,U32,U32,U32);

void f8(s844r2Instance*,U32,U32,U32);

void s844r2____wasm_call_ctors(s844r2Instance*i);

void s844r2____wasm_apply_data_relocs(s844r2Instance*i);

U32 s844r2_func_1(s844r2Instance*i);

void s844r2_call_cb(s844r2Instance*i,U32 l0);

void s844r2Instantiate(s844r2Instance* instance, void* resolve(const char* module, const char* name));

void s844r2FreeInstance(s844r2Instance* instance);

#endif /* s844r2_H */

