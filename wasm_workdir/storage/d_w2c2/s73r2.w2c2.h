#ifndef s73r2_H
#define s73r2_H

#include "w2c2_base.h"

typedef struct s73r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s73r2Instance;

void f0(s73r2Instance*);

void f1(s73r2Instance*);

U32 f2(s73r2Instance*);

void f3(s73r2Instance*,U32);

U32 f4(s73r2Instance*,U32,U32,U32);

void f5(s73r2Instance*,U32,U32,U32,U32,U32);

void f6(s73r2Instance*,U32);

void f7(s73r2Instance*,U32,U32,U32);

void f8(s73r2Instance*,U32,U32,U32);

void s73r2____wasm_call_ctors(s73r2Instance*i);

void s73r2____wasm_apply_data_relocs(s73r2Instance*i);

U32 s73r2_func_1(s73r2Instance*i);

void s73r2_call_cb(s73r2Instance*i,U32 l0);

void s73r2Instantiate(s73r2Instance* instance, void* resolve(const char* module, const char* name));

void s73r2FreeInstance(s73r2Instance* instance);

#endif /* s73r2_H */

