#ifndef s526r2_H
#define s526r2_H

#include "w2c2_base.h"

typedef struct s526r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s526r2Instance;

void f0(s526r2Instance*);

void f1(s526r2Instance*);

U32 f2(s526r2Instance*);

void f3(s526r2Instance*,U32);

U32 f4(s526r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s526r2Instance*,U32,U32,U32,U32,U32);

void f6(s526r2Instance*,U32);

void f7(s526r2Instance*,U32,U32,U32);

void f8(s526r2Instance*,U32,U32,U32);

void s526r2____wasm_call_ctors(s526r2Instance*i);

void s526r2____wasm_apply_data_relocs(s526r2Instance*i);

U32 s526r2_func_1(s526r2Instance*i);

void s526r2_call_cb(s526r2Instance*i,U32 l0);

void s526r2Instantiate(s526r2Instance* instance, void* resolve(const char* module, const char* name));

void s526r2FreeInstance(s526r2Instance* instance);

#endif /* s526r2_H */

