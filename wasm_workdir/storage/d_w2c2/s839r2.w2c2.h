#ifndef s839r2_H
#define s839r2_H

#include "w2c2_base.h"

typedef struct s839r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s839r2Instance;

void f0(s839r2Instance*);

void f1(s839r2Instance*);

U32 f2(s839r2Instance*);

void f3(s839r2Instance*,U32);

U32 f4(s839r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s839r2Instance*,U32,U32,U32,U32,U32);

void f6(s839r2Instance*,U32);

void f7(s839r2Instance*,U32,U32,U32);

void f8(s839r2Instance*,U32,U32,U32);

void s839r2____wasm_call_ctors(s839r2Instance*i);

void s839r2____wasm_apply_data_relocs(s839r2Instance*i);

U32 s839r2_func_1(s839r2Instance*i);

void s839r2_call_cb(s839r2Instance*i,U32 l0);

void s839r2Instantiate(s839r2Instance* instance, void* resolve(const char* module, const char* name));

void s839r2FreeInstance(s839r2Instance* instance);

#endif /* s839r2_H */

