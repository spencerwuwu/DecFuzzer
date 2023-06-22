#ifndef s637r2_H
#define s637r2_H

#include "w2c2_base.h"

typedef struct s637r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s637r2Instance;

void f0(s637r2Instance*);

void f1(s637r2Instance*);

U32 f2(s637r2Instance*);

void f3(s637r2Instance*,U32);

U32 f4(s637r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s637r2Instance*,U32,U32,U32,U32,U32);

void f6(s637r2Instance*,U32);

void f7(s637r2Instance*,U32,U32,U32);

void f8(s637r2Instance*,U32,U32,U32);

void s637r2____wasm_call_ctors(s637r2Instance*i);

void s637r2____wasm_apply_data_relocs(s637r2Instance*i);

U32 s637r2_func_1(s637r2Instance*i);

void s637r2_call_cb(s637r2Instance*i,U32 l0);

void s637r2Instantiate(s637r2Instance* instance, void* resolve(const char* module, const char* name));

void s637r2FreeInstance(s637r2Instance* instance);

#endif /* s637r2_H */

