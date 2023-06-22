#ifndef s891r2_H
#define s891r2_H

#include "w2c2_base.h"

typedef struct s891r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s891r2Instance;

void f0(s891r2Instance*);

void f1(s891r2Instance*);

U32 f2(s891r2Instance*);

void f3(s891r2Instance*,U32);

U32 f4(s891r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s891r2Instance*,U32,U32,U32,U32,U32);

void f6(s891r2Instance*,U32);

void f7(s891r2Instance*,U32,U32,U32);

void f8(s891r2Instance*,U32,U32,U32);

void s891r2____wasm_call_ctors(s891r2Instance*i);

void s891r2____wasm_apply_data_relocs(s891r2Instance*i);

U32 s891r2_func_1(s891r2Instance*i);

void s891r2_call_cb(s891r2Instance*i,U32 l0);

void s891r2Instantiate(s891r2Instance* instance, void* resolve(const char* module, const char* name));

void s891r2FreeInstance(s891r2Instance* instance);

#endif /* s891r2_H */

