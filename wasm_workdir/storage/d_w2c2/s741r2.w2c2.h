#ifndef s741r2_H
#define s741r2_H

#include "w2c2_base.h"

typedef struct s741r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s741r2Instance;

void f0(s741r2Instance*);

void f1(s741r2Instance*);

U32 f2(s741r2Instance*);

void f3(s741r2Instance*,U32);

U32 f4(s741r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s741r2Instance*,U32,U32,U32,U32,U32);

void f6(s741r2Instance*,U32);

void f7(s741r2Instance*,U32,U32,U32);

void f8(s741r2Instance*,U32,U32,U32);

void s741r2____wasm_call_ctors(s741r2Instance*i);

void s741r2____wasm_apply_data_relocs(s741r2Instance*i);

U32 s741r2_func_1(s741r2Instance*i);

void s741r2_call_cb(s741r2Instance*i,U32 l0);

void s741r2Instantiate(s741r2Instance* instance, void* resolve(const char* module, const char* name));

void s741r2FreeInstance(s741r2Instance* instance);

#endif /* s741r2_H */

