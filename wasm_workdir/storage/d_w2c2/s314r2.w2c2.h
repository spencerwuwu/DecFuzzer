#ifndef s314r2_H
#define s314r2_H

#include "w2c2_base.h"

typedef struct s314r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s314r2Instance;

void f0(s314r2Instance*);

void f1(s314r2Instance*);

U32 f2(s314r2Instance*);

void f3(s314r2Instance*,U32);

U32 f4(s314r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s314r2Instance*,U32,U32,U32,U32,U32);

void f6(s314r2Instance*,U32);

void f7(s314r2Instance*,U32,U32,U32);

void f8(s314r2Instance*,U32,U32,U32);

void s314r2____wasm_call_ctors(s314r2Instance*i);

void s314r2____wasm_apply_data_relocs(s314r2Instance*i);

U32 s314r2_func_1(s314r2Instance*i);

void s314r2_call_cb(s314r2Instance*i,U32 l0);

void s314r2Instantiate(s314r2Instance* instance, void* resolve(const char* module, const char* name));

void s314r2FreeInstance(s314r2Instance* instance);

#endif /* s314r2_H */

