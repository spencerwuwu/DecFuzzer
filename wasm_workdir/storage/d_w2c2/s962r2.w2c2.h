#ifndef s962r2_H
#define s962r2_H

#include "w2c2_base.h"

typedef struct s962r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s962r2Instance;

void f0(s962r2Instance*);

void f1(s962r2Instance*);

U32 f2(s962r2Instance*);

void f3(s962r2Instance*,U32);

U32 f4(s962r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s962r2Instance*,U32,U32,U32,U32,U32);

void f6(s962r2Instance*,U32);

void f7(s962r2Instance*,U32,U32,U32);

void f8(s962r2Instance*,U32,U32,U32);

void s962r2____wasm_call_ctors(s962r2Instance*i);

void s962r2____wasm_apply_data_relocs(s962r2Instance*i);

U32 s962r2_func_1(s962r2Instance*i);

void s962r2_call_cb(s962r2Instance*i,U32 l0);

void s962r2Instantiate(s962r2Instance* instance, void* resolve(const char* module, const char* name));

void s962r2FreeInstance(s962r2Instance* instance);

#endif /* s962r2_H */

