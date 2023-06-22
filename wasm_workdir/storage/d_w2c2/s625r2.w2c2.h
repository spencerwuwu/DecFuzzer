#ifndef s625r2_H
#define s625r2_H

#include "w2c2_base.h"

typedef struct s625r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s625r2Instance;

void f0(s625r2Instance*);

void f1(s625r2Instance*);

U32 f2(s625r2Instance*);

void f3(s625r2Instance*,U32);

U32 f4(s625r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s625r2Instance*,U32,U32,U32,U32,U32);

void f6(s625r2Instance*,U32);

void f7(s625r2Instance*,U32,U32,U32);

void f8(s625r2Instance*,U32,U32,U32);

void s625r2____wasm_call_ctors(s625r2Instance*i);

void s625r2____wasm_apply_data_relocs(s625r2Instance*i);

U32 s625r2_func_1(s625r2Instance*i);

void s625r2_call_cb(s625r2Instance*i,U32 l0);

void s625r2Instantiate(s625r2Instance* instance, void* resolve(const char* module, const char* name));

void s625r2FreeInstance(s625r2Instance* instance);

#endif /* s625r2_H */

