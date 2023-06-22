#ifndef s529r2_H
#define s529r2_H

#include "w2c2_base.h"

typedef struct s529r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s529r2Instance;

void f0(s529r2Instance*);

void f1(s529r2Instance*);

U32 f2(s529r2Instance*);

void f3(s529r2Instance*,U32);

U32 f4(s529r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s529r2Instance*,U32,U32,U32,U32,U32);

void f6(s529r2Instance*,U32);

void f7(s529r2Instance*,U32,U32,U32);

void f8(s529r2Instance*,U32,U32,U32);

void s529r2____wasm_call_ctors(s529r2Instance*i);

void s529r2____wasm_apply_data_relocs(s529r2Instance*i);

U32 s529r2_func_1(s529r2Instance*i);

void s529r2_call_cb(s529r2Instance*i,U32 l0);

void s529r2Instantiate(s529r2Instance* instance, void* resolve(const char* module, const char* name));

void s529r2FreeInstance(s529r2Instance* instance);

#endif /* s529r2_H */

