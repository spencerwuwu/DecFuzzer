#ifndef s966r2_H
#define s966r2_H

#include "w2c2_base.h"

typedef struct s966r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s966r2Instance;

void f0(s966r2Instance*);

void f1(s966r2Instance*);

U32 f2(s966r2Instance*);

void f3(s966r2Instance*,U32);

U32 f4(s966r2Instance*,U32,U32,U32,U32);

void f5(s966r2Instance*,U32,U32,U32,U32,U32);

void f6(s966r2Instance*,U32);

void f7(s966r2Instance*,U32,U32,U32);

void f8(s966r2Instance*,U32,U32,U32);

void s966r2____wasm_call_ctors(s966r2Instance*i);

void s966r2____wasm_apply_data_relocs(s966r2Instance*i);

U32 s966r2_func_1(s966r2Instance*i);

void s966r2_call_cb(s966r2Instance*i,U32 l0);

void s966r2Instantiate(s966r2Instance* instance, void* resolve(const char* module, const char* name));

void s966r2FreeInstance(s966r2Instance* instance);

#endif /* s966r2_H */

