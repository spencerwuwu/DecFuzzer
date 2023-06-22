#ifndef s38r2_H
#define s38r2_H

#include "w2c2_base.h"

typedef struct s38r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s38r2Instance;

void f0(s38r2Instance*);

void f1(s38r2Instance*);

U32 f2(s38r2Instance*);

void f3(s38r2Instance*,U32);

U32 f4(s38r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s38r2Instance*,U32,U32,U32,U32,U32);

void f6(s38r2Instance*,U32);

void f7(s38r2Instance*,U32,U32,U32);

void f8(s38r2Instance*,U32,U32,U32);

void s38r2____wasm_call_ctors(s38r2Instance*i);

void s38r2____wasm_apply_data_relocs(s38r2Instance*i);

U32 s38r2_func_1(s38r2Instance*i);

void s38r2_call_cb(s38r2Instance*i,U32 l0);

void s38r2Instantiate(s38r2Instance* instance, void* resolve(const char* module, const char* name));

void s38r2FreeInstance(s38r2Instance* instance);

#endif /* s38r2_H */

