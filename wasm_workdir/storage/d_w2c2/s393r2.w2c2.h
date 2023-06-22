#ifndef s393r2_H
#define s393r2_H

#include "w2c2_base.h"

typedef struct s393r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s393r2Instance;

void f0(s393r2Instance*);

void f1(s393r2Instance*);

U32 f2(s393r2Instance*);

void f3(s393r2Instance*,U32);

U32 f4(s393r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s393r2Instance*,U32,U32,U32,U32,U32);

void f6(s393r2Instance*,U32);

void f7(s393r2Instance*,U32,U32,U32);

void f8(s393r2Instance*,U32,U32,U32);

void s393r2____wasm_call_ctors(s393r2Instance*i);

void s393r2____wasm_apply_data_relocs(s393r2Instance*i);

U32 s393r2_func_1(s393r2Instance*i);

void s393r2_call_cb(s393r2Instance*i,U32 l0);

void s393r2Instantiate(s393r2Instance* instance, void* resolve(const char* module, const char* name));

void s393r2FreeInstance(s393r2Instance* instance);

#endif /* s393r2_H */

