#ifndef s289r2_H
#define s289r2_H

#include "w2c2_base.h"

typedef struct s289r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s289r2Instance;

void f0(s289r2Instance*);

void f1(s289r2Instance*);

U32 f2(s289r2Instance*);

void f3(s289r2Instance*,U32);

U32 f4(s289r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s289r2Instance*,U32,U32,U32,U32,U32);

void f6(s289r2Instance*,U32);

void f7(s289r2Instance*,U32,U32,U32);

void f8(s289r2Instance*,U32,U32,U32);

void s289r2____wasm_call_ctors(s289r2Instance*i);

void s289r2____wasm_apply_data_relocs(s289r2Instance*i);

U32 s289r2_func_1(s289r2Instance*i);

void s289r2_call_cb(s289r2Instance*i,U32 l0);

void s289r2Instantiate(s289r2Instance* instance, void* resolve(const char* module, const char* name));

void s289r2FreeInstance(s289r2Instance* instance);

#endif /* s289r2_H */

