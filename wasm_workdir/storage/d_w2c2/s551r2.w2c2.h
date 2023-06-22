#ifndef s551r2_H
#define s551r2_H

#include "w2c2_base.h"

typedef struct s551r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s551r2Instance;

void f0(s551r2Instance*);

void f1(s551r2Instance*);

U32 f2(s551r2Instance*);

void f3(s551r2Instance*,U32);

U32 f4(s551r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s551r2Instance*,U32,U32,U32,U32,U32);

void f6(s551r2Instance*,U32);

void f7(s551r2Instance*,U32,U32,U32);

void f8(s551r2Instance*,U32,U32,U32);

void s551r2____wasm_call_ctors(s551r2Instance*i);

void s551r2____wasm_apply_data_relocs(s551r2Instance*i);

U32 s551r2_func_1(s551r2Instance*i);

void s551r2_call_cb(s551r2Instance*i,U32 l0);

void s551r2Instantiate(s551r2Instance* instance, void* resolve(const char* module, const char* name));

void s551r2FreeInstance(s551r2Instance* instance);

#endif /* s551r2_H */

