#ifndef s933r2_H
#define s933r2_H

#include "w2c2_base.h"

typedef struct s933r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s933r2Instance;

void f0(s933r2Instance*);

void f1(s933r2Instance*);

U32 f2(s933r2Instance*);

void f3(s933r2Instance*,U32);

U32 f4(s933r2Instance*,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32,U32);

void f5(s933r2Instance*,U32,U32,U32,U32,U32);

void f6(s933r2Instance*,U32);

void f7(s933r2Instance*,U32,U32,U32);

void f8(s933r2Instance*,U32,U32,U32);

void s933r2____wasm_call_ctors(s933r2Instance*i);

void s933r2____wasm_apply_data_relocs(s933r2Instance*i);

U32 s933r2_func_1(s933r2Instance*i);

void s933r2_call_cb(s933r2Instance*i,U32 l0);

void s933r2Instantiate(s933r2Instance* instance, void* resolve(const char* module, const char* name));

void s933r2FreeInstance(s933r2Instance* instance);

#endif /* s933r2_H */

