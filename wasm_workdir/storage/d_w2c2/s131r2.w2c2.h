#ifndef s131r2_H
#define s131r2_H

#include "w2c2_base.h"

typedef struct s131r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s131r2Instance;

void f0(s131r2Instance*);

void f1(s131r2Instance*);

U32 f2(s131r2Instance*);

void f3(s131r2Instance*,U32);

U32 f4(s131r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s131r2Instance*,U32,U32,U32,U32,U32);

void f6(s131r2Instance*,U32);

void f7(s131r2Instance*,U32,U32,U32);

void f8(s131r2Instance*,U32,U32,U32);

void s131r2____wasm_call_ctors(s131r2Instance*i);

void s131r2____wasm_apply_data_relocs(s131r2Instance*i);

U32 s131r2_func_1(s131r2Instance*i);

void s131r2_call_cb(s131r2Instance*i,U32 l0);

void s131r2Instantiate(s131r2Instance* instance, void* resolve(const char* module, const char* name));

void s131r2FreeInstance(s131r2Instance* instance);

#endif /* s131r2_H */

