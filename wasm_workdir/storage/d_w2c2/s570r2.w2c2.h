#ifndef s570r2_H
#define s570r2_H

#include "w2c2_base.h"

typedef struct s570r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s570r2Instance;

void f0(s570r2Instance*);

void f1(s570r2Instance*);

U32 f2(s570r2Instance*);

void f3(s570r2Instance*,U32);

U32 f4(s570r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s570r2Instance*,U32,U32,U32,U32,U32);

void f6(s570r2Instance*,U32);

void f7(s570r2Instance*,U32,U32,U32);

void f8(s570r2Instance*,U32,U32,U32);

void s570r2____wasm_call_ctors(s570r2Instance*i);

void s570r2____wasm_apply_data_relocs(s570r2Instance*i);

U32 s570r2_func_1(s570r2Instance*i);

void s570r2_call_cb(s570r2Instance*i,U32 l0);

void s570r2Instantiate(s570r2Instance* instance, void* resolve(const char* module, const char* name));

void s570r2FreeInstance(s570r2Instance* instance);

#endif /* s570r2_H */

