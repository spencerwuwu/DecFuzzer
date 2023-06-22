#ifndef s236r2_H
#define s236r2_H

#include "w2c2_base.h"

typedef struct s236r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s236r2Instance;

void f0(s236r2Instance*);

void f1(s236r2Instance*);

U32 f2(s236r2Instance*);

void f3(s236r2Instance*,U32);

U32 f4(s236r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s236r2Instance*,U32,U32,U32,U32,U32);

void f6(s236r2Instance*,U32);

void f7(s236r2Instance*,U32,U32,U32);

void f8(s236r2Instance*,U32,U32,U32);

void s236r2____wasm_call_ctors(s236r2Instance*i);

void s236r2____wasm_apply_data_relocs(s236r2Instance*i);

U32 s236r2_func_1(s236r2Instance*i);

void s236r2_call_cb(s236r2Instance*i,U32 l0);

void s236r2Instantiate(s236r2Instance* instance, void* resolve(const char* module, const char* name));

void s236r2FreeInstance(s236r2Instance* instance);

#endif /* s236r2_H */

