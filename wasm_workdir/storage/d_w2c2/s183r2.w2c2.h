#ifndef s183r2_H
#define s183r2_H

#include "w2c2_base.h"

typedef struct s183r2Instance {
wasmMemory*env__memory;
wasmTable*env_____indirect_function_table;
U32*env_____stack_pointer;
U32*env_____memory_base;
U32*env_____table_base;
} s183r2Instance;

void f0(s183r2Instance*);

void f1(s183r2Instance*);

U32 f2(s183r2Instance*);

void f3(s183r2Instance*,U32);

U32 f4(s183r2Instance*,U32,U32,U32,U32,U32);

void f5(s183r2Instance*,U32,U32,U32,U32,U32);

void f6(s183r2Instance*,U32);

void f7(s183r2Instance*,U32,U32,U32);

void f8(s183r2Instance*,U32,U32,U32);

void s183r2____wasm_call_ctors(s183r2Instance*i);

void s183r2____wasm_apply_data_relocs(s183r2Instance*i);

U32 s183r2_func_1(s183r2Instance*i);

void s183r2_call_cb(s183r2Instance*i,U32 l0);

void s183r2Instantiate(s183r2Instance* instance, void* resolve(const char* module, const char* name));

void s183r2FreeInstance(s183r2Instance* instance);

#endif /* s183r2_H */

