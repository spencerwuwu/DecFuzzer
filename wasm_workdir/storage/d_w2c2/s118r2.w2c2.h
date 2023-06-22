#ifndef s118r2_H
#define s118r2_H

#include "w2c2_base.h"

typedef struct s118r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s118r2Instance;

void f0(s118r2Instance*);

void f1(s118r2Instance*);

U32 f2(s118r2Instance*);

void f3(s118r2Instance*,U32);

U32 f4(s118r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s118r2Instance*,U32,U32,U32,U32,U32);

void f6(s118r2Instance*,U32);

void f7(s118r2Instance*,U32,U32,U32);

void f8(s118r2Instance*,U32,U32,U32);

void s118r2____wasm_call_ctors(s118r2Instance*i);

void s118r2____wasm_apply_data_relocs(s118r2Instance*i);

U32 s118r2_func_1(s118r2Instance*i);

void s118r2_call_cb(s118r2Instance*i,U32 l0);

void s118r2Instantiate(s118r2Instance* instance, void* resolve(const char* module, const char* name));

void s118r2FreeInstance(s118r2Instance* instance);

#endif /* s118r2_H */

