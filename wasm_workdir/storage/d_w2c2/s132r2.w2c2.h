#ifndef s132r2_H
#define s132r2_H

#include "w2c2_base.h"

typedef struct s132r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s132r2Instance;

void f0(s132r2Instance*);

void f1(s132r2Instance*);

U32 f2(s132r2Instance*);

void f3(s132r2Instance*,U32);

U32 f4(s132r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s132r2Instance*,U32,U32,U32,U32,U32);

void f6(s132r2Instance*,U32);

void f7(s132r2Instance*,U32,U32,U32);

void f8(s132r2Instance*,U32,U32,U32);

void s132r2____wasm_call_ctors(s132r2Instance*i);

void s132r2____wasm_apply_data_relocs(s132r2Instance*i);

U32 s132r2_func_1(s132r2Instance*i);

void s132r2_call_cb(s132r2Instance*i,U32 l0);

void s132r2Instantiate(s132r2Instance* instance, void* resolve(const char* module, const char* name));

void s132r2FreeInstance(s132r2Instance* instance);

#endif /* s132r2_H */

