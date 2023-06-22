#ifndef s828r2_H
#define s828r2_H

#include "w2c2_base.h"

typedef struct s828r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s828r2Instance;

void f0(s828r2Instance*);

void f1(s828r2Instance*);

U32 f2(s828r2Instance*);

void f3(s828r2Instance*,U32);

U32 f4(s828r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s828r2Instance*,U32,U32,U32,U32,U32);

void f6(s828r2Instance*,U32);

void f7(s828r2Instance*,U32,U32,U32);

void f8(s828r2Instance*,U32,U32,U32);

void s828r2____wasm_call_ctors(s828r2Instance*i);

void s828r2____wasm_apply_data_relocs(s828r2Instance*i);

U32 s828r2_func_1(s828r2Instance*i);

void s828r2_call_cb(s828r2Instance*i,U32 l0);

void s828r2Instantiate(s828r2Instance* instance, void* resolve(const char* module, const char* name));

void s828r2FreeInstance(s828r2Instance* instance);

#endif /* s828r2_H */

