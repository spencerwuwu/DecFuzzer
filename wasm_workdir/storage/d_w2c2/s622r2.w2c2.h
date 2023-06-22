#ifndef s622r2_H
#define s622r2_H

#include "w2c2_base.h"

typedef struct s622r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s622r2Instance;

void f0(s622r2Instance*);

void f1(s622r2Instance*);

U32 f2(s622r2Instance*);

void f3(s622r2Instance*,U32);

U32 f4(s622r2Instance*,U32,U32,U32);

void f5(s622r2Instance*,U32,U32,U32,U32,U32);

void f6(s622r2Instance*,U32);

void f7(s622r2Instance*,U32,U32,U32);

void f8(s622r2Instance*,U32,U32,U32);

void s622r2____wasm_call_ctors(s622r2Instance*i);

void s622r2____wasm_apply_data_relocs(s622r2Instance*i);

U32 s622r2_func_1(s622r2Instance*i);

void s622r2_call_cb(s622r2Instance*i,U32 l0);

void s622r2Instantiate(s622r2Instance* instance, void* resolve(const char* module, const char* name));

void s622r2FreeInstance(s622r2Instance* instance);

#endif /* s622r2_H */

