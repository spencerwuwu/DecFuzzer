#ifndef s167r2_H
#define s167r2_H

#include "w2c2_base.h"

typedef struct s167r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s167r2Instance;

void f0(s167r2Instance*);

void f1(s167r2Instance*);

U32 f2(s167r2Instance*);

void f3(s167r2Instance*,U32);

U32 f4(s167r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s167r2Instance*,U32,U32,U32,U32,U32);

void f6(s167r2Instance*,U32);

void f7(s167r2Instance*,U32,U32,U32);

void f8(s167r2Instance*,U32,U32,U32);

void s167r2____wasm_call_ctors(s167r2Instance*i);

void s167r2____wasm_apply_data_relocs(s167r2Instance*i);

U32 s167r2_func_1(s167r2Instance*i);

void s167r2_call_cb(s167r2Instance*i,U32 l0);

void s167r2Instantiate(s167r2Instance* instance, void* resolve(const char* module, const char* name));

void s167r2FreeInstance(s167r2Instance* instance);

#endif /* s167r2_H */

