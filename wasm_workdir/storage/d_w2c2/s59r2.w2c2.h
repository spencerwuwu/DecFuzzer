#ifndef s59r2_H
#define s59r2_H

#include "w2c2_base.h"

typedef struct s59r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s59r2Instance;

void f0(s59r2Instance*);

void f1(s59r2Instance*);

U32 f2(s59r2Instance*);

void f3(s59r2Instance*,U32);

U32 f4(s59r2Instance*,U32,U32,U32);

void f5(s59r2Instance*,U32,U32,U32,U32,U32);

void f6(s59r2Instance*,U32);

void f7(s59r2Instance*,U32,U32,U32);

void f8(s59r2Instance*,U32,U32,U32);

void s59r2____wasm_call_ctors(s59r2Instance*i);

void s59r2____wasm_apply_data_relocs(s59r2Instance*i);

U32 s59r2_func_1(s59r2Instance*i);

void s59r2_call_cb(s59r2Instance*i,U32 l0);

void s59r2Instantiate(s59r2Instance* instance, void* resolve(const char* module, const char* name));

void s59r2FreeInstance(s59r2Instance* instance);

#endif /* s59r2_H */

