#ifndef s734r2_H
#define s734r2_H

#include "w2c2_base.h"

typedef struct s734r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s734r2Instance;

void f0(s734r2Instance*);

void f1(s734r2Instance*);

U32 f2(s734r2Instance*);

void f3(s734r2Instance*,U32);

U32 f4(s734r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s734r2Instance*,U32,U32,U32,U32,U32);

void f6(s734r2Instance*,U32);

void f7(s734r2Instance*,U32,U32,U32);

void f8(s734r2Instance*,U32,U32,U32);

void s734r2____wasm_call_ctors(s734r2Instance*i);

void s734r2____wasm_apply_data_relocs(s734r2Instance*i);

U32 s734r2_func_1(s734r2Instance*i);

void s734r2_call_cb(s734r2Instance*i,U32 l0);

void s734r2Instantiate(s734r2Instance* instance, void* resolve(const char* module, const char* name));

void s734r2FreeInstance(s734r2Instance* instance);

#endif /* s734r2_H */

