#ifndef s837r2_H
#define s837r2_H

#include "w2c2_base.h"

typedef struct s837r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s837r2Instance;

void f0(s837r2Instance*);

void f1(s837r2Instance*);

U32 f2(s837r2Instance*);

void f3(s837r2Instance*,U32);

U32 f4(s837r2Instance*,U32,U32,U32,U32,U32,U32);

void f5(s837r2Instance*,U32,U32,U32,U32,U32);

void f6(s837r2Instance*,U32);

void f7(s837r2Instance*,U32,U32,U32);

void f8(s837r2Instance*,U32,U32,U32);

void s837r2____wasm_call_ctors(s837r2Instance*i);

void s837r2____wasm_apply_data_relocs(s837r2Instance*i);

U32 s837r2_func_1(s837r2Instance*i);

void s837r2_call_cb(s837r2Instance*i,U32 l0);

void s837r2Instantiate(s837r2Instance* instance, void* resolve(const char* module, const char* name));

void s837r2FreeInstance(s837r2Instance* instance);

#endif /* s837r2_H */

