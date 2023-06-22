#ifndef s805r2_H
#define s805r2_H

#include "w2c2_base.h"

typedef struct s805r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s805r2Instance;

void f0(s805r2Instance*);

void f1(s805r2Instance*);

U32 f2(s805r2Instance*);

void f3(s805r2Instance*,U32);

U32 f4(s805r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s805r2Instance*,U32,U32,U32,U32,U32);

void f6(s805r2Instance*,U32);

void f7(s805r2Instance*,U32,U32,U32);

void f8(s805r2Instance*,U32,U32,U32);

void s805r2____wasm_call_ctors(s805r2Instance*i);

void s805r2____wasm_apply_data_relocs(s805r2Instance*i);

U32 s805r2_func_1(s805r2Instance*i);

void s805r2_call_cb(s805r2Instance*i,U32 l0);

void s805r2Instantiate(s805r2Instance* instance, void* resolve(const char* module, const char* name));

void s805r2FreeInstance(s805r2Instance* instance);

#endif /* s805r2_H */

