#ifndef s560r2_H
#define s560r2_H

#include "w2c2_base.h"

typedef struct s560r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s560r2Instance;

void f0(s560r2Instance*);

void f1(s560r2Instance*);

U32 f2(s560r2Instance*);

void f3(s560r2Instance*,U32);

U32 f4(s560r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s560r2Instance*,U32,U32,U32,U32,U32);

void f6(s560r2Instance*,U32);

void f7(s560r2Instance*,U32,U32,U32);

void f8(s560r2Instance*,U32,U32,U32);

void s560r2____wasm_call_ctors(s560r2Instance*i);

void s560r2____wasm_apply_data_relocs(s560r2Instance*i);

U32 s560r2_func_1(s560r2Instance*i);

void s560r2_call_cb(s560r2Instance*i,U32 l0);

void s560r2Instantiate(s560r2Instance* instance, void* resolve(const char* module, const char* name));

void s560r2FreeInstance(s560r2Instance* instance);

#endif /* s560r2_H */

