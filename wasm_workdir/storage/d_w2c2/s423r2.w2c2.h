#ifndef s423r2_H
#define s423r2_H

#include "w2c2_base.h"

typedef struct s423r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s423r2Instance;

void f0(s423r2Instance*);

void f1(s423r2Instance*);

U32 f2(s423r2Instance*);

void f3(s423r2Instance*,U32);

U32 f4(s423r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s423r2Instance*,U32,U32,U32,U32,U32);

void f6(s423r2Instance*,U32);

void f7(s423r2Instance*,U32,U32,U32);

void f8(s423r2Instance*,U32,U32,U32);

void s423r2____wasm_call_ctors(s423r2Instance*i);

void s423r2____wasm_apply_data_relocs(s423r2Instance*i);

U32 s423r2_func_1(s423r2Instance*i);

void s423r2_call_cb(s423r2Instance*i,U32 l0);

void s423r2Instantiate(s423r2Instance* instance, void* resolve(const char* module, const char* name));

void s423r2FreeInstance(s423r2Instance* instance);

#endif /* s423r2_H */

