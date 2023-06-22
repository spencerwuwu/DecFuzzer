#ifndef s948r2_H
#define s948r2_H

#include "w2c2_base.h"

typedef struct s948r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s948r2Instance;

void f0(s948r2Instance*);

void f1(s948r2Instance*);

U32 f2(s948r2Instance*);

void f3(s948r2Instance*,U32);

U32 f4(s948r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s948r2Instance*,U32,U32,U32,U32,U32);

void f6(s948r2Instance*,U32);

void f7(s948r2Instance*,U32,U32,U32);

void f8(s948r2Instance*,U32,U32,U32);

void s948r2____wasm_call_ctors(s948r2Instance*i);

void s948r2____wasm_apply_data_relocs(s948r2Instance*i);

U32 s948r2_func_1(s948r2Instance*i);

void s948r2_call_cb(s948r2Instance*i,U32 l0);

void s948r2Instantiate(s948r2Instance* instance, void* resolve(const char* module, const char* name));

void s948r2FreeInstance(s948r2Instance* instance);

#endif /* s948r2_H */

