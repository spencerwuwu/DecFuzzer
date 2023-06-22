#ifndef s744r2_H
#define s744r2_H

#include "w2c2_base.h"

typedef struct s744r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s744r2Instance;

void f0(s744r2Instance*);

void f1(s744r2Instance*);

U32 f2(s744r2Instance*);

void f3(s744r2Instance*,U32);

U32 f4(s744r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s744r2Instance*,U32,U32,U32,U32,U32);

void f6(s744r2Instance*,U32);

void f7(s744r2Instance*,U32,U32,U32);

void f8(s744r2Instance*,U32,U32,U32);

void s744r2____wasm_call_ctors(s744r2Instance*i);

void s744r2____wasm_apply_data_relocs(s744r2Instance*i);

U32 s744r2_func_1(s744r2Instance*i);

void s744r2_call_cb(s744r2Instance*i,U32 l0);

void s744r2Instantiate(s744r2Instance* instance, void* resolve(const char* module, const char* name));

void s744r2FreeInstance(s744r2Instance* instance);

#endif /* s744r2_H */

