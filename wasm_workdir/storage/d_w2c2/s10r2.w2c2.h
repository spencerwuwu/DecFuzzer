#ifndef s10r2_H
#define s10r2_H

#include "w2c2_base.h"

typedef struct s10r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s10r2Instance;

void f0(s10r2Instance*);

void f1(s10r2Instance*);

U32 f2(s10r2Instance*);

void f3(s10r2Instance*,U32);

U32 f4(s10r2Instance*,U32,U32,U32,U32,U32);

void f5(s10r2Instance*,U32,U32,U32,U32,U32);

void f6(s10r2Instance*,U32);

void f7(s10r2Instance*,U32,U32,U32);

void f8(s10r2Instance*,U32,U32,U32);

void s10r2____wasm_call_ctors(s10r2Instance*i);

void s10r2____wasm_apply_data_relocs(s10r2Instance*i);

U32 s10r2_func_1(s10r2Instance*i);

void s10r2_call_cb(s10r2Instance*i,U32 l0);

void s10r2Instantiate(s10r2Instance* instance, void* resolve(const char* module, const char* name));

void s10r2FreeInstance(s10r2Instance* instance);

#endif /* s10r2_H */

