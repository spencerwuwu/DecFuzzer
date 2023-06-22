#ifndef s599r2_H
#define s599r2_H

#include "w2c2_base.h"

typedef struct s599r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s599r2Instance;

void f0(s599r2Instance*);

void f1(s599r2Instance*);

U32 f2(s599r2Instance*);

void f3(s599r2Instance*,U32);

U32 f4(s599r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s599r2Instance*,U32,U32,U32,U32,U32);

void f6(s599r2Instance*,U32);

void f7(s599r2Instance*,U32,U32,U32);

void f8(s599r2Instance*,U32,U32,U32);

void s599r2____wasm_call_ctors(s599r2Instance*i);

void s599r2____wasm_apply_data_relocs(s599r2Instance*i);

U32 s599r2_func_1(s599r2Instance*i);

void s599r2_call_cb(s599r2Instance*i,U32 l0);

void s599r2Instantiate(s599r2Instance* instance, void* resolve(const char* module, const char* name));

void s599r2FreeInstance(s599r2Instance* instance);

#endif /* s599r2_H */

