#ifndef s266r2_H
#define s266r2_H

#include "w2c2_base.h"

typedef struct s266r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s266r2Instance;

void f0(s266r2Instance*);

void f1(s266r2Instance*);

U32 f2(s266r2Instance*);

void f3(s266r2Instance*,U32);

U32 f4(s266r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s266r2Instance*,U32,U32,U32,U32,U32);

void f6(s266r2Instance*,U32);

void f7(s266r2Instance*,U32,U32,U32);

void f8(s266r2Instance*,U32,U32,U32);

void s266r2____wasm_call_ctors(s266r2Instance*i);

void s266r2____wasm_apply_data_relocs(s266r2Instance*i);

U32 s266r2_func_1(s266r2Instance*i);

void s266r2_call_cb(s266r2Instance*i,U32 l0);

void s266r2Instantiate(s266r2Instance* instance, void* resolve(const char* module, const char* name));

void s266r2FreeInstance(s266r2Instance* instance);

#endif /* s266r2_H */

