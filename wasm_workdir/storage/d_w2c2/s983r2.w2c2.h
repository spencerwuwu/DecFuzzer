#ifndef s983r2_H
#define s983r2_H

#include "w2c2_base.h"

typedef struct s983r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s983r2Instance;

void f0(s983r2Instance*);

void f1(s983r2Instance*);

U32 f2(s983r2Instance*);

void f3(s983r2Instance*,U32);

U32 f4(s983r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s983r2Instance*,U32,U32,U32,U32,U32);

void f6(s983r2Instance*,U32);

void f7(s983r2Instance*,U32,U32,U32);

void f8(s983r2Instance*,U32,U32,U32);

void s983r2____wasm_call_ctors(s983r2Instance*i);

void s983r2____wasm_apply_data_relocs(s983r2Instance*i);

U32 s983r2_func_1(s983r2Instance*i);

void s983r2_call_cb(s983r2Instance*i,U32 l0);

void s983r2Instantiate(s983r2Instance* instance, void* resolve(const char* module, const char* name));

void s983r2FreeInstance(s983r2Instance* instance);

#endif /* s983r2_H */

