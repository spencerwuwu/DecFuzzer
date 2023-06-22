#ifndef s342r2_H
#define s342r2_H

#include "w2c2_base.h"

typedef struct s342r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s342r2Instance;

void f0(s342r2Instance*);

void f1(s342r2Instance*);

U32 f2(s342r2Instance*);

void f3(s342r2Instance*,U32);

U32 f4(s342r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s342r2Instance*,U32,U32,U32,U32,U32);

void f6(s342r2Instance*,U32);

void f7(s342r2Instance*,U32,U32,U32);

void f8(s342r2Instance*,U32,U32,U32);

void s342r2____wasm_call_ctors(s342r2Instance*i);

void s342r2____wasm_apply_data_relocs(s342r2Instance*i);

U32 s342r2_func_1(s342r2Instance*i);

void s342r2_call_cb(s342r2Instance*i,U32 l0);

void s342r2Instantiate(s342r2Instance* instance, void* resolve(const char* module, const char* name));

void s342r2FreeInstance(s342r2Instance* instance);

#endif /* s342r2_H */

