#ifndef s819r2_H
#define s819r2_H

#include "w2c2_base.h"

typedef struct s819r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s819r2Instance;

void f0(s819r2Instance*);

void f1(s819r2Instance*);

U32 f2(s819r2Instance*);

void f3(s819r2Instance*,U32);

U32 f4(s819r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s819r2Instance*,U32,U32,U32,U32,U32);

void f6(s819r2Instance*,U32);

void f7(s819r2Instance*,U32,U32,U32);

void f8(s819r2Instance*,U32,U32,U32);

void s819r2____wasm_call_ctors(s819r2Instance*i);

void s819r2____wasm_apply_data_relocs(s819r2Instance*i);

U32 s819r2_func_1(s819r2Instance*i);

void s819r2_call_cb(s819r2Instance*i,U32 l0);

void s819r2Instantiate(s819r2Instance* instance, void* resolve(const char* module, const char* name));

void s819r2FreeInstance(s819r2Instance* instance);

#endif /* s819r2_H */

