#ifndef s855r2_H
#define s855r2_H

#include "w2c2_base.h"

typedef struct s855r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s855r2Instance;

void f0(s855r2Instance*);

void f1(s855r2Instance*);

U32 f2(s855r2Instance*);

void f3(s855r2Instance*,U32);

U32 f4(s855r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s855r2Instance*,U32,U32,U32,U32,U32);

void f6(s855r2Instance*,U32);

void f7(s855r2Instance*,U32,U32,U32);

void f8(s855r2Instance*,U32,U32,U32);

void s855r2____wasm_call_ctors(s855r2Instance*i);

void s855r2____wasm_apply_data_relocs(s855r2Instance*i);

U32 s855r2_func_1(s855r2Instance*i);

void s855r2_call_cb(s855r2Instance*i,U32 l0);

void s855r2Instantiate(s855r2Instance* instance, void* resolve(const char* module, const char* name));

void s855r2FreeInstance(s855r2Instance* instance);

#endif /* s855r2_H */

