#ifndef s669r2_H
#define s669r2_H

#include "w2c2_base.h"

typedef struct s669r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s669r2Instance;

void f0(s669r2Instance*);

void f1(s669r2Instance*);

U32 f2(s669r2Instance*);

void f3(s669r2Instance*,U32);

U32 f4(s669r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s669r2Instance*,U32,U32,U32,U32,U32);

void f6(s669r2Instance*,U32);

void f7(s669r2Instance*,U32,U32,U32);

void f8(s669r2Instance*,U32,U32,U32);

void s669r2____wasm_call_ctors(s669r2Instance*i);

void s669r2____wasm_apply_data_relocs(s669r2Instance*i);

U32 s669r2_func_1(s669r2Instance*i);

void s669r2_call_cb(s669r2Instance*i,U32 l0);

void s669r2Instantiate(s669r2Instance* instance, void* resolve(const char* module, const char* name));

void s669r2FreeInstance(s669r2Instance* instance);

#endif /* s669r2_H */

