#ifndef s941r2_H
#define s941r2_H

#include "w2c2_base.h"

typedef struct s941r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s941r2Instance;

void f0(s941r2Instance*);

void f1(s941r2Instance*);

U32 f2(s941r2Instance*);

void f3(s941r2Instance*,U32);

U32 f4(s941r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s941r2Instance*,U32,U32,U32,U32,U32);

void f6(s941r2Instance*,U32);

void f7(s941r2Instance*,U32,U32,U32);

void f8(s941r2Instance*,U32,U32,U32);

void s941r2____wasm_call_ctors(s941r2Instance*i);

void s941r2____wasm_apply_data_relocs(s941r2Instance*i);

U32 s941r2_func_1(s941r2Instance*i);

void s941r2_call_cb(s941r2Instance*i,U32 l0);

void s941r2Instantiate(s941r2Instance* instance, void* resolve(const char* module, const char* name));

void s941r2FreeInstance(s941r2Instance* instance);

#endif /* s941r2_H */

