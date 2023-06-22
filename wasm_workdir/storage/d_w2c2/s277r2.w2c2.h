#ifndef s277r2_H
#define s277r2_H

#include "w2c2_base.h"

typedef struct s277r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s277r2Instance;

void f0(s277r2Instance*);

void f1(s277r2Instance*);

U32 f2(s277r2Instance*);

void f3(s277r2Instance*,U32);

U32 f4(s277r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s277r2Instance*,U32,U32,U32,U32,U32);

void f6(s277r2Instance*,U32);

void f7(s277r2Instance*,U32,U32,U32);

void f8(s277r2Instance*,U32,U32,U32);

void s277r2____wasm_call_ctors(s277r2Instance*i);

void s277r2____wasm_apply_data_relocs(s277r2Instance*i);

U32 s277r2_func_1(s277r2Instance*i);

void s277r2_call_cb(s277r2Instance*i,U32 l0);

void s277r2Instantiate(s277r2Instance* instance, void* resolve(const char* module, const char* name));

void s277r2FreeInstance(s277r2Instance* instance);

#endif /* s277r2_H */

