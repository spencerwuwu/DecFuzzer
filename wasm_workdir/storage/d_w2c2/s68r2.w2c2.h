#ifndef s68r2_H
#define s68r2_H

#include "w2c2_base.h"

typedef struct s68r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s68r2Instance;

void f0(s68r2Instance*);

void f1(s68r2Instance*);

U32 f2(s68r2Instance*);

void f3(s68r2Instance*,U32);

U32 f4(s68r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s68r2Instance*,U32,U32,U32,U32,U32);

void f6(s68r2Instance*,U32);

void f7(s68r2Instance*,U32,U32,U32);

void f8(s68r2Instance*,U32,U32,U32);

void s68r2____wasm_call_ctors(s68r2Instance*i);

void s68r2____wasm_apply_data_relocs(s68r2Instance*i);

U32 s68r2_func_1(s68r2Instance*i);

void s68r2_call_cb(s68r2Instance*i,U32 l0);

void s68r2Instantiate(s68r2Instance* instance, void* resolve(const char* module, const char* name));

void s68r2FreeInstance(s68r2Instance* instance);

#endif /* s68r2_H */

