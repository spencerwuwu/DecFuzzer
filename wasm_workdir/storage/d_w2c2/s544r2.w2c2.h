#ifndef s544r2_H
#define s544r2_H

#include "w2c2_base.h"

typedef struct s544r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s544r2Instance;

void f0(s544r2Instance*);

void f1(s544r2Instance*);

U32 f2(s544r2Instance*);

void f3(s544r2Instance*,U32);

U32 f4(s544r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s544r2Instance*,U32,U32,U32,U32,U32);

void f6(s544r2Instance*,U32);

void f7(s544r2Instance*,U32,U32,U32);

void f8(s544r2Instance*,U32,U32,U32);

void s544r2____wasm_call_ctors(s544r2Instance*i);

void s544r2____wasm_apply_data_relocs(s544r2Instance*i);

U32 s544r2_func_1(s544r2Instance*i);

void s544r2_call_cb(s544r2Instance*i,U32 l0);

void s544r2Instantiate(s544r2Instance* instance, void* resolve(const char* module, const char* name));

void s544r2FreeInstance(s544r2Instance* instance);

#endif /* s544r2_H */

