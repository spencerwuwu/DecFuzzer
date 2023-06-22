#ifndef s374r2_H
#define s374r2_H

#include "w2c2_base.h"

typedef struct s374r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s374r2Instance;

void f0(s374r2Instance*);

void f1(s374r2Instance*);

U32 f2(s374r2Instance*);

void f3(s374r2Instance*,U32);

U32 f4(s374r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s374r2Instance*,U32,U32,U32,U32,U32);

void f6(s374r2Instance*,U32);

void f7(s374r2Instance*,U32,U32,U32);

void f8(s374r2Instance*,U32,U32,U32);

void s374r2____wasm_call_ctors(s374r2Instance*i);

void s374r2____wasm_apply_data_relocs(s374r2Instance*i);

U32 s374r2_func_1(s374r2Instance*i);

void s374r2_call_cb(s374r2Instance*i,U32 l0);

void s374r2Instantiate(s374r2Instance* instance, void* resolve(const char* module, const char* name));

void s374r2FreeInstance(s374r2Instance* instance);

#endif /* s374r2_H */

