#ifndef s55r2_H
#define s55r2_H

#include "w2c2_base.h"

typedef struct s55r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s55r2Instance;

void f0(s55r2Instance*);

void f1(s55r2Instance*);

U32 f2(s55r2Instance*);

void f3(s55r2Instance*,U32);

U32 f4(s55r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s55r2Instance*,U32,U32,U32,U32,U32);

void f6(s55r2Instance*,U32);

void f7(s55r2Instance*,U32,U32,U32);

void f8(s55r2Instance*,U32,U32,U32);

void s55r2____wasm_call_ctors(s55r2Instance*i);

void s55r2____wasm_apply_data_relocs(s55r2Instance*i);

U32 s55r2_func_1(s55r2Instance*i);

void s55r2_call_cb(s55r2Instance*i,U32 l0);

void s55r2Instantiate(s55r2Instance* instance, void* resolve(const char* module, const char* name));

void s55r2FreeInstance(s55r2Instance* instance);

#endif /* s55r2_H */

