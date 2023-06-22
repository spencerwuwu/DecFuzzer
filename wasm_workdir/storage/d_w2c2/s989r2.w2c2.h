#ifndef s989r2_H
#define s989r2_H

#include "w2c2_base.h"

typedef struct s989r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s989r2Instance;

void f0(s989r2Instance*);

void f1(s989r2Instance*);

U32 f2(s989r2Instance*);

void f3(s989r2Instance*,U32);

U32 f4(s989r2Instance*,U32,U32,U32);

void f5(s989r2Instance*,U32,U32,U32,U32,U32);

void f6(s989r2Instance*,U32);

void f7(s989r2Instance*,U32,U32,U32);

void f8(s989r2Instance*,U32,U32,U32);

void s989r2____wasm_call_ctors(s989r2Instance*i);

void s989r2____wasm_apply_data_relocs(s989r2Instance*i);

U32 s989r2_func_1(s989r2Instance*i);

void s989r2_call_cb(s989r2Instance*i,U32 l0);

void s989r2Instantiate(s989r2Instance* instance, void* resolve(const char* module, const char* name));

void s989r2FreeInstance(s989r2Instance* instance);

#endif /* s989r2_H */

