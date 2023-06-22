#ifndef s426r2_H
#define s426r2_H

#include "w2c2_base.h"

typedef struct s426r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s426r2Instance;

void f0(s426r2Instance*);

void f1(s426r2Instance*);

U32 f2(s426r2Instance*);

void f3(s426r2Instance*,U32);

U32 f4(s426r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s426r2Instance*,U32,U32,U32,U32,U32);

void f6(s426r2Instance*,U32);

void f7(s426r2Instance*,U32,U32,U32);

void f8(s426r2Instance*,U32,U32,U32);

void s426r2____wasm_call_ctors(s426r2Instance*i);

void s426r2____wasm_apply_data_relocs(s426r2Instance*i);

U32 s426r2_func_1(s426r2Instance*i);

void s426r2_call_cb(s426r2Instance*i,U32 l0);

void s426r2Instantiate(s426r2Instance* instance, void* resolve(const char* module, const char* name));

void s426r2FreeInstance(s426r2Instance* instance);

#endif /* s426r2_H */

