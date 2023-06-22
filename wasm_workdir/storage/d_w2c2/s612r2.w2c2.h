#ifndef s612r2_H
#define s612r2_H

#include "w2c2_base.h"

typedef struct s612r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s612r2Instance;

void f0(s612r2Instance*);

void f1(s612r2Instance*);

U32 f2(s612r2Instance*);

void f3(s612r2Instance*,U32);

U32 f4(s612r2Instance*,U32,U32,U32);

void f5(s612r2Instance*,U32,U32,U32,U32,U32);

void f6(s612r2Instance*,U32);

void f7(s612r2Instance*,U32,U32,U32);

void f8(s612r2Instance*,U32,U32,U32);

void s612r2____wasm_call_ctors(s612r2Instance*i);

void s612r2____wasm_apply_data_relocs(s612r2Instance*i);

U32 s612r2_func_1(s612r2Instance*i);

void s612r2_call_cb(s612r2Instance*i,U32 l0);

void s612r2Instantiate(s612r2Instance* instance, void* resolve(const char* module, const char* name));

void s612r2FreeInstance(s612r2Instance* instance);

#endif /* s612r2_H */

