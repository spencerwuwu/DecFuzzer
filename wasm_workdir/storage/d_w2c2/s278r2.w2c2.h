#ifndef s278r2_H
#define s278r2_H

#include "w2c2_base.h"

typedef struct s278r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s278r2Instance;

void f0(s278r2Instance*);

void f1(s278r2Instance*);

U32 f2(s278r2Instance*);

void f3(s278r2Instance*,U32);

U32 f4(s278r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s278r2Instance*,U32,U32,U32,U32,U32);

void f6(s278r2Instance*,U32);

void f7(s278r2Instance*,U32,U32,U32);

void f8(s278r2Instance*,U32,U32,U32);

void s278r2____wasm_call_ctors(s278r2Instance*i);

void s278r2____wasm_apply_data_relocs(s278r2Instance*i);

U32 s278r2_func_1(s278r2Instance*i);

void s278r2_call_cb(s278r2Instance*i,U32 l0);

void s278r2Instantiate(s278r2Instance* instance, void* resolve(const char* module, const char* name));

void s278r2FreeInstance(s278r2Instance* instance);

#endif /* s278r2_H */

