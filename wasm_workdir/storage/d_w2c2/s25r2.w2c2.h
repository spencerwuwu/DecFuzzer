#ifndef s25r2_H
#define s25r2_H

#include "w2c2_base.h"

typedef struct s25r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s25r2Instance;

void f0(s25r2Instance*);

void f1(s25r2Instance*);

U32 f2(s25r2Instance*);

void f3(s25r2Instance*,U32);

U32 f4(s25r2Instance*,U32,U32,U32,U32);

void f5(s25r2Instance*,U32,U32,U32,U32,U32);

void f6(s25r2Instance*,U32);

void f7(s25r2Instance*,U32,U32,U32);

void f8(s25r2Instance*,U32,U32,U32);

void s25r2____wasm_call_ctors(s25r2Instance*i);

void s25r2____wasm_apply_data_relocs(s25r2Instance*i);

U32 s25r2_func_1(s25r2Instance*i);

void s25r2_call_cb(s25r2Instance*i,U32 l0);

void s25r2Instantiate(s25r2Instance* instance, void* resolve(const char* module, const char* name));

void s25r2FreeInstance(s25r2Instance* instance);

#endif /* s25r2_H */

