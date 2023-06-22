#ifndef s519r2_H
#define s519r2_H

#include "w2c2_base.h"

typedef struct s519r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s519r2Instance;

void f0(s519r2Instance*);

void f1(s519r2Instance*);

U32 f2(s519r2Instance*);

void f3(s519r2Instance*,U32);

U32 f4(s519r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s519r2Instance*,U32,U32,U32,U32,U32);

void f6(s519r2Instance*,U32);

void f7(s519r2Instance*,U32,U32,U32);

void f8(s519r2Instance*,U32,U32,U32);

void s519r2____wasm_call_ctors(s519r2Instance*i);

void s519r2____wasm_apply_data_relocs(s519r2Instance*i);

U32 s519r2_func_1(s519r2Instance*i);

void s519r2_call_cb(s519r2Instance*i,U32 l0);

void s519r2Instantiate(s519r2Instance* instance, void* resolve(const char* module, const char* name));

void s519r2FreeInstance(s519r2Instance* instance);

#endif /* s519r2_H */

