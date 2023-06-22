#ifndef s306r2_H
#define s306r2_H

#include "w2c2_base.h"

typedef struct s306r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s306r2Instance;

void f0(s306r2Instance*);

void f1(s306r2Instance*);

U32 f2(s306r2Instance*);

void f3(s306r2Instance*,U32);

U32 f4(s306r2Instance*,U32,U32,U32,U32,U32,U32,U32);

void f5(s306r2Instance*,U32,U32,U32,U32,U32);

void f6(s306r2Instance*,U32);

void f7(s306r2Instance*,U32,U32,U32);

void f8(s306r2Instance*,U32,U32,U32);

void s306r2____wasm_call_ctors(s306r2Instance*i);

void s306r2____wasm_apply_data_relocs(s306r2Instance*i);

U32 s306r2_func_1(s306r2Instance*i);

void s306r2_call_cb(s306r2Instance*i,U32 l0);

void s306r2Instantiate(s306r2Instance* instance, void* resolve(const char* module, const char* name));

void s306r2FreeInstance(s306r2Instance* instance);

#endif /* s306r2_H */

