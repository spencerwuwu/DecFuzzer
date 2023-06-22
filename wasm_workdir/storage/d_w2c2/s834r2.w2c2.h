#ifndef s834r2_H
#define s834r2_H

#include "w2c2_base.h"

typedef struct s834r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s834r2Instance;

void f0(s834r2Instance*);

void f1(s834r2Instance*);

U32 f2(s834r2Instance*);

void f3(s834r2Instance*,U32);

U32 f4(s834r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s834r2Instance*,U32,U32,U32,U32,U32);

void f6(s834r2Instance*,U32);

void f7(s834r2Instance*,U32,U32,U32);

void f8(s834r2Instance*,U32,U32,U32);

void s834r2____wasm_call_ctors(s834r2Instance*i);

void s834r2____wasm_apply_data_relocs(s834r2Instance*i);

U32 s834r2_func_1(s834r2Instance*i);

void s834r2_call_cb(s834r2Instance*i,U32 l0);

void s834r2Instantiate(s834r2Instance* instance, void* resolve(const char* module, const char* name));

void s834r2FreeInstance(s834r2Instance* instance);

#endif /* s834r2_H */

