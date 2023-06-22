#ifndef s726r2_H
#define s726r2_H

#include "w2c2_base.h"

typedef struct s726r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s726r2Instance;

void f0(s726r2Instance*);

void f1(s726r2Instance*);

U32 f2(s726r2Instance*);

void f3(s726r2Instance*,U32);

U32 f4(s726r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s726r2Instance*,U32,U32,U32,U32,U32);

void f6(s726r2Instance*,U32);

void f7(s726r2Instance*,U32,U32,U32);

void f8(s726r2Instance*,U32,U32,U32);

void s726r2____wasm_call_ctors(s726r2Instance*i);

void s726r2____wasm_apply_data_relocs(s726r2Instance*i);

U32 s726r2_func_1(s726r2Instance*i);

void s726r2_call_cb(s726r2Instance*i,U32 l0);

void s726r2Instantiate(s726r2Instance* instance, void* resolve(const char* module, const char* name));

void s726r2FreeInstance(s726r2Instance* instance);

#endif /* s726r2_H */

