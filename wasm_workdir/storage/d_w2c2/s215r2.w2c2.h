#ifndef s215r2_H
#define s215r2_H

#include "w2c2_base.h"

typedef struct s215r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s215r2Instance;

void f0(s215r2Instance*);

void f1(s215r2Instance*);

U32 f2(s215r2Instance*);

void f3(s215r2Instance*,U32);

U32 f4(s215r2Instance*,U32,U32,U32,U32);

void f5(s215r2Instance*,U32,U32,U32,U32,U32);

void f6(s215r2Instance*,U32);

void f7(s215r2Instance*,U32,U32,U32);

void f8(s215r2Instance*,U32,U32,U32);

void s215r2____wasm_call_ctors(s215r2Instance*i);

void s215r2____wasm_apply_data_relocs(s215r2Instance*i);

U32 s215r2_func_1(s215r2Instance*i);

void s215r2_call_cb(s215r2Instance*i,U32 l0);

void s215r2Instantiate(s215r2Instance* instance, void* resolve(const char* module, const char* name));

void s215r2FreeInstance(s215r2Instance* instance);

#endif /* s215r2_H */

