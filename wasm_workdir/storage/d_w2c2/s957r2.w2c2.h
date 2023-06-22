#ifndef s957r2_H
#define s957r2_H

#include "w2c2_base.h"

typedef struct s957r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s957r2Instance;

void f0(s957r2Instance*);

void f1(s957r2Instance*);

U32 f2(s957r2Instance*);

void f3(s957r2Instance*,U32);

U32 f4(s957r2Instance*,U32,U32,U32);

void f5(s957r2Instance*,U32,U32,U32,U32,U32);

void f6(s957r2Instance*,U32);

void f7(s957r2Instance*,U32,U32,U32);

void f8(s957r2Instance*,U32,U32,U32);

void s957r2____wasm_call_ctors(s957r2Instance*i);

void s957r2____wasm_apply_data_relocs(s957r2Instance*i);

U32 s957r2_func_1(s957r2Instance*i);

void s957r2_call_cb(s957r2Instance*i,U32 l0);

void s957r2Instantiate(s957r2Instance* instance, void* resolve(const char* module, const char* name));

void s957r2FreeInstance(s957r2Instance* instance);

#endif /* s957r2_H */

