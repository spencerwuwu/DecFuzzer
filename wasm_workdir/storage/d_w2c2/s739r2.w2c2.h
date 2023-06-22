#ifndef s739r2_H
#define s739r2_H

#include "w2c2_base.h"

typedef struct s739r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s739r2Instance;

void f0(s739r2Instance*);

void f1(s739r2Instance*);

U32 f2(s739r2Instance*);

void f3(s739r2Instance*,U32);

U32 f4(s739r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s739r2Instance*,U32,U32,U32,U32,U32);

void f6(s739r2Instance*,U32);

void f7(s739r2Instance*,U32,U32,U32);

void f8(s739r2Instance*,U32,U32,U32);

void s739r2____wasm_call_ctors(s739r2Instance*i);

void s739r2____wasm_apply_data_relocs(s739r2Instance*i);

U32 s739r2_func_1(s739r2Instance*i);

void s739r2_call_cb(s739r2Instance*i,U32 l0);

void s739r2Instantiate(s739r2Instance* instance, void* resolve(const char* module, const char* name));

void s739r2FreeInstance(s739r2Instance* instance);

#endif /* s739r2_H */

