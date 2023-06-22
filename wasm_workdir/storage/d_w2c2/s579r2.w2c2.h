#ifndef s579r2_H
#define s579r2_H

#include "w2c2_base.h"

typedef struct s579r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s579r2Instance;

void f0(s579r2Instance*);

void f1(s579r2Instance*);

U32 f2(s579r2Instance*);

void f3(s579r2Instance*,U32);

U32 f4(s579r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s579r2Instance*,U32,U32,U32,U32,U32);

void f6(s579r2Instance*,U32);

void f7(s579r2Instance*,U32,U32,U32);

void f8(s579r2Instance*,U32,U32,U32);

void s579r2____wasm_call_ctors(s579r2Instance*i);

void s579r2____wasm_apply_data_relocs(s579r2Instance*i);

U32 s579r2_func_1(s579r2Instance*i);

void s579r2_call_cb(s579r2Instance*i,U32 l0);

void s579r2Instantiate(s579r2Instance* instance, void* resolve(const char* module, const char* name));

void s579r2FreeInstance(s579r2Instance* instance);

#endif /* s579r2_H */

