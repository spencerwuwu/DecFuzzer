#ifndef s74r2_H
#define s74r2_H

#include "w2c2_base.h"

typedef struct s74r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s74r2Instance;

void f0(s74r2Instance*);

void f1(s74r2Instance*);

U32 f2(s74r2Instance*);

void f3(s74r2Instance*,U32);

U32 f4(s74r2Instance*,U32,U32,U32,U32,U32);

void f5(s74r2Instance*,U32,U32,U32,U32,U32);

void f6(s74r2Instance*,U32);

void f7(s74r2Instance*,U32,U32,U32);

void f8(s74r2Instance*,U32,U32,U32);

void s74r2____wasm_call_ctors(s74r2Instance*i);

void s74r2____wasm_apply_data_relocs(s74r2Instance*i);

U32 s74r2_func_1(s74r2Instance*i);

void s74r2_call_cb(s74r2Instance*i,U32 l0);

void s74r2Instantiate(s74r2Instance* instance, void* resolve(const char* module, const char* name));

void s74r2FreeInstance(s74r2Instance* instance);

#endif /* s74r2_H */

